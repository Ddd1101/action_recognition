#include "action_recognition.h"
#include <QtWidgets/QApplication>
#include <QTextcodec.h>
#include <iostream>

using namespace std;
int main(int argc, char *argv[])
{
	QTextCodec *gbk = QTextCodec::codecForName("GBK");
	QApplication a(argc, argv);
	action_recognition w;
	w.show();
	return a.exec();
}
