#include "action_recognition.h"

action_recognition::action_recognition(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	rgbPath.clear();
	grayPath.clear();
	stdRgbPath = "";
	stdGrayPath = "";
	//svm1
	train_data1 = ml::TrainData::loadFromCSV("C:\\dataset\\svm1\\stand_pos.csv", 1);
	m1 = train_data1->getTrainSamples();
	normalize(m1, m1, CV_32FC1);
	labels1.assign(m1.rows, +1);
	train_data1 = ml::TrainData::loadFromCSV("C:\\dataset\\svm1\\stand_neg.csv", 1);
	m2 = train_data1->getTrainSamples();
	normalize(m2, m2, CV_32FC1);
	labels1.insert(labels1.end(), m2.rows, -1);
	m = mergeRow(m1, m2);

	svm1 = SVM::create();
	svm1->setCoef0(0.0);
	svm1->setDegree(3);
	svm1->setTermCriteria(TermCriteria(CV_TERMCRIT_ITER + CV_TERMCRIT_EPS, 1000, 1e-3));
	svm1->setGamma(0);
	svm1->setKernel(SVM::LINEAR); //采用线性核函，其他的sigmoid 和RBF 可自行设置，其值由0-5。  
	svm1->setNu(0.5);
	svm1->setP(0.1); // for EPSILON_SVR, epsilon in loss function?  
	svm1->setC(0.01); // From paper, soft classifier  
	svm1->setType(SVM::EPS_SVR); // C_SVC; // EPSILON_SVR; // may be also NU_SVR; // do regression task  
	svm1->train(m, ROW_SAMPLE, Mat(labels1));

	//svm2
	train_data2 = ml::TrainData::loadFromCSV("C:\\dataset\\svm2\\train\\svm2_pos.csv", 1);
	m1 = train_data2->getTrainSamples();
	normalize(m1, m1, CV_32FC1);
	labels2.assign(m1.rows, +1);
	train_data2 = ml::TrainData::loadFromCSV("C:\\dataset\\svm2\\train\\svm2_neg.csv", 1);
	m2 = train_data2->getTrainSamples();
	normalize(m2, m2, CV_32FC1);
	labels2.insert(labels2.end(), m2.rows, -1);
	m = mergeRow(m1, m2);

	svm2 = SVM::create();
	svm2->setCoef0(0.0);
	svm2->setDegree(3);
	svm2->setTermCriteria(TermCriteria(CV_TERMCRIT_ITER + CV_TERMCRIT_EPS, 1000, 1e-3));
	svm2->setGamma(0);
	svm2->setKernel(SVM::LINEAR); //采用线性核函，其他的sigmoid 和RBF 可自行设置，其值由0-5。  
	svm2->setNu(0.5);
	svm2->setP(0.1); // for EPSILON_SVR, epsilon in loss function?  
	svm2->setC(0.01); // From paper, soft classifier  
	svm2->setType(SVM::EPS_SVR); // C_SVC; // EPSILON_SVR; // may be also NU_SVR; // do regression task  
	svm2->train(m, ROW_SAMPLE, Mat(labels2));

	imgCount = 0;

	z_m = new ZernikeMoment();

	//ui.srcPathText->setText("C:\\dataset\\dataset\\pos\\1");

	//帧播放
	time_clock = new QTimer();
	time_clock->setInterval(10);
	time_clock->stop();
	connect(time_clock, SIGNAL(timeout()), this, SLOT(frameProcess()));

	QPixmap myPix("C:\\default.jpg");
	ui.srcImg->setPixmap(myPix);
	ui.srcImg->show();

	//地址默认值
	QString pathTmp = "C:\\dataset\\src\\pos\\1";
	ui.rgbPath->setText(pathTmp);
	pathTmp = "C:\\dataset\\dataset\\pos\\1";
	ui.grayPath->setText(pathTmp);

	//ui.svm1Text->setReadOnly(true);
	//ui.svm2Text->setReadOnly(true);

	//特征显示
	lightTrait = Mat(480, 640, CV_8UC1, Scalar(0));
	whTraitImg = Mat(360, 480, CV_8UC1, Scalar(0));

}

void action_recognition::start() {
	time_clock->start();
	imgCount = 0;
	stdRgbPath = ui.rgbPath->text().toStdString();
	stdGrayPath = ui.grayPath->text().toStdString();

	lightTrait = Mat(480, 640, CV_8UC1, Scalar(0));

	whTraitImg = Mat(360, 480, CV_8UC1, Scalar(0));
	while (whTrait.empty() != 1) {
		whTrait.pop();
	}

	coreTraitImg = Mat(360, 480, CV_8UC1, Scalar(0));
	while (coreTrait.empty() != 1) {
		coreTrait.pop();
	}
}

void action_recognition::stop() {
	time_clock->stop();
}

void action_recognition::frameProcess() {
	////cv::cvtColor(image, image, CV_RGB2RGBA);//图像在QT显示前，必须转化成QImage格式，将RGBA格式转化成RGB  
	//stdRgbPath = rgbPath.toStdString();
	//cout << stdRgbPath << endl;
	glob(stdRgbPath, rgbFiles);
	glob(stdGrayPath, grayFiles);
	//if (imgCount < files.size()) {
	//	image = cv::imread(files[imgCount]);//读取图像  
	//	cv::cvtColor(image, image, CV_RGB2RGBA);//图像在QT显示前，必须转化成QImage格式，将RGBA格式转化成RGB  
	//	showFrame(image);
	//}
	int isStand = 0;
	float svm2Res = 0;
	if (imgCount < rgbFiles.size() && imgCount < grayFiles.size()) {
		image = cv::imread(rgbFiles[imgCount]);
		whTraitImg = Mat(360, 480, CV_8UC1, Scalar(0));
		coreTraitImg = Mat(360, 480, CV_8UC1, Scalar(0));
		//srcGray= cv::imread(grayFiles[imgCount]);
		Mat tmp;
		cvtColor(image, tmp, COLOR_RGB2GRAY);

		//image = cv::imread(grayFiles[imgCount]);
		//cvtColor(image, tmp, COLOR_RGB2GRAY);
		if (imgCount == 0) {
			Vibe_Bgs.init(tmp);
			Vibe_Bgs.processFirstFrame(tmp);
			//cout << "training gmm compelete" << endl;
		}
		else {
			//threshold(src, src, 0,255, THRESH_BINARY);//最大类间差
			Vibe_Bgs.testAndUpdate(tmp);
			mask = Vibe_Bgs.getMask();
			lightTrait = getLightTrait(rgbFiles[imgCount - 1], rgbFiles[imgCount]);//稀疏光流特征
			morphologyEx(mask, mask, MORPH_OPEN, elem7);//开运算=腐蚀+膨胀
			morphologyEx(mask, mask, MORPH_CLOSE, elem7);//闭运算=膨胀+腐蚀
			medianBlur(mask, mask, 3);//中值滤波

			bound = filterBg_boundRect(mask);

			isStand = 0;
			//svm1-站姿检测
			if (bound.isEx == 1) {
				if (coreTrait.size() >= 40) {
					coreTrait.pop();
					coreTrait.push(bound.core);
				}
				else {
					coreTrait.push(bound.core);
				}
				if (whTrait.size() >= 40) {
					whTrait.pop();
					whTrait.push(float(bound.width) / float(bound.height));
				}
				else {
					whTrait.push(float(bound.width) / float(bound.height));
				}
				float labels[4] = { float(bound.width) / float(bound.height), bound.width * bound.height, bound.width + bound.height, bound.height };
				Mat test(1, 4, CV_32F, labels);
				float response = svm1->predict(test);
				//cout << "svm1  :";
				if (response < 0.23) {
					//cout << 0 << "    ";
					isStand = 0;
				}
				else {
					//cout << 1 << "    ";
					isStand = 1;
				}
				rectangle(image, Rect(bound.x, bound.y, bound.width, bound.height), Scalar(255, 255, 255), 1, 8);
			}
			//svm2-摔倒检测
			int index = 0;
			if (isStand == 0 && bound.isEx == 1) {
				z_m->readImg(mask);

				z_modes[index++] = z_m->getZernike(0, 0);

				z_modes[index++] = z_m->getZernike(1, 1);

				z_modes[index++] = z_m->getZernike(2, 0);

				z_modes[index++] = z_m->getZernike(2, 2);

				z_modes[index++] = z_m->getZernike(3, 1);

				z_modes[index++] = z_m->getZernike(3, 3);

				z_modes[index++] = z_m->getZernike(4, 0);

				z_modes[index++] = z_m->getZernike(4, 2);

				z_modes[index++] = z_m->getZernike(4, 4);

				z_modes[index] = float(bound.width) / float(bound.height);

				Mat test(1, 10, CV_32F, z_modes);
				svm2Res = svm2->predict(test);
				//cout << "svm2  : " << svm2Res;
			}
			//cout << endl;
		}
		if (mask.empty() != 1) {
			cv::resize(mask, mask, Size(mask.cols * 0.75, mask.rows * 0.75), 0, 0, INTER_LINEAR);
			if (mask.channels() == 3) {
				cv::cvtColor(mask, mask, CV_RGB2RGBA);
				showBgFrame();
			}
			else if (mask.channels() == 1) {
				cv::cvtColor(mask, mask, CV_GRAY2BGRA);
				showBgFrame();
			}
		}
		if (whTrait.size() > 0) {
			for (int i = 0; i < whTrait.size(); i++) {
				cv::Point pointInterest;//特征点，用以画在图像中
				pointInterest.x = i * 12;//特征点在图像中横坐标
				float tmp = whTrait.front();
				whTrait.pop();
				whTrait.push(tmp);
				pointInterest.y = 240 - tmp * 80;//特征点在图像中纵坐标
				cv::circle(whTraitImg, pointInterest, 4, cv::Scalar(255, 255, 255));//在图像中画出特征点，2是圆的半径
			}
		}
		if (coreTrait.size() > 0) {
			for (int i = 0; i < coreTrait.size(); i++) {
				cv::Point pointInterest;//特征点，用以画在图像中
				pointInterest.x = i * 12;//特征点在图像中横坐标
				float tmp = coreTrait.front();
				coreTrait.pop();
				coreTrait.push(tmp);
				pointInterest.y = 240 - tmp * 80;//特征点在图像中纵坐标
				cv::circle(coreTraitImg, pointInterest, 4, cv::Scalar(255, 255, 255));//在图像中画出特征点，2是圆的半径
			}
		}
		if (whTraitImg.channels() == 1) {
			cv::cvtColor(whTraitImg, whTraitImg, CV_GRAY2BGRA);
		}
		else {
			cv::cvtColor(whTraitImg, whTraitImg, CV_RGB2RGBA);
		}
		showWHTFrame();
		if (coreTraitImg.channels() == 1) {
			cv::cvtColor(coreTraitImg, coreTraitImg, CV_GRAY2BGRA);
		}
		else {
			cv::cvtColor(coreTraitImg, coreTraitImg, CV_RGB2RGBA);
		}
		showCTFrame();
		cv::resize(image, image, Size(image.cols * 1.5, image.rows * 1.5), 0, 0, INTER_LINEAR);
		cv::cvtColor(image, image, CV_RGB2RGBA);
		showSrcFrame();
		cv::resize(lightTrait, lightTrait, Size(lightTrait.cols * 0.75, lightTrait.rows * 0.75), 0, 0, INTER_LINEAR);
		cv::cvtColor(lightTrait, lightTrait, CV_GRAY2BGRA);
		showLTFrame();
	}
	//auto workCursor1 = ui.svm1Text->textCursor();
	/*workCursor1.movePosition(QTextCursor::Start);
	workCursor1.insertText(QString::number(isStand, 10));
	workCursor1.insertBlock();*/

	//移动滚动条到底部
	//QScrollBar *scrollbar = ui.svm1Text->verticalScrollBar();


	//auto workCursor2 = ui.svm2Text->textCursor();
	/*workCursor2.movePosition(QTextCursor::Start);
	workCursor2.insertText(QString("%1").arg(svm2Res*(-1)));
	workCursor2.insertBlock();*/

	if (imgCount == (rgbFiles.size() - 1) || imgCount == (grayFiles.size() - 1)) {
		time_clock->stop();
	}

	imgCount++;
}

void action_recognition::getRgbPath() {
	rgbPath = QDir::toNativeSeparators(QFileDialog::getExistingDirectory(this, tr("Save path"), QDir::currentPath()));
	if (!rgbPath.isEmpty()) {
		ui.rgbPath->setText(rgbPath);
	}
}

void action_recognition::showSrcFrame() {
	QImage img = QImage((const unsigned char*)(image.data),
		image.cols, image.rows, QImage::Format_RGB32);
	ui.srcImg->setPixmap(QPixmap::fromImage(img));
	ui.srcImg->show();
}

void action_recognition::showBgFrame() {
	QImage img = QImage((const unsigned char*)(mask.data),
		mask.cols, mask.rows, QImage::Format_RGB32);
	ui.bgImg->setPixmap(QPixmap::fromImage(img));
	ui.bgImg->show();
}

void action_recognition::showLTFrame() {
	QImage img = QImage((const unsigned char*)(lightTrait.data),
		lightTrait.cols, lightTrait.rows, QImage::Format_RGB32);
	ui.lightImg->setPixmap(QPixmap::fromImage(img));
	ui.lightImg->show();
}

void action_recognition::showWHTFrame() {
	QImage img = QImage((const unsigned char*)(whTraitImg.data),
		whTraitImg.cols, whTraitImg.rows, QImage::Format_RGB32);
	ui.whImg->setPixmap(QPixmap::fromImage(img));
	ui.whImg->show();
}

void action_recognition::showCTFrame() {
	QImage img = QImage((const unsigned char*)(coreTraitImg.data),
		coreTraitImg.cols, coreTraitImg.rows, QImage::Format_RGB32);
	ui.coreImg->setPixmap(QPixmap::fromImage(img));
	ui.coreImg->show();
}