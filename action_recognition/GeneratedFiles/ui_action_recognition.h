/********************************************************************************
** Form generated from reading UI file 'action_recognition.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACTION_RECOGNITION_H
#define UI_ACTION_RECOGNITION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_action_recognitionClass
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_3;
    QLabel *srcImg;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *bgImg;
    QLabel *lightImg;
    QHBoxLayout *horizontalLayout_5;
    QLabel *coreImg;
    QLabel *whImg;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *posRadio;
    QRadioButton *negRadio;
    QSpacerItem *horizontalSpacer_3;
    QLabel *rgbLabel;
    QLineEdit *pathNum;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_3;
    QLineEdit *frameRate;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_2;
    QLineEdit *status;
    QVBoxLayout *verticalLayout_2;
    QPushButton *start;
    QPushButton *start_3;
    QSpacerItem *horizontalSpacer_2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label;
    QVBoxLayout *verticalLayout_6;
    QRadioButton *isTrait;
    QRadioButton *noTrait;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *action_recognitionClass)
    {
        if (action_recognitionClass->objectName().isEmpty())
            action_recognitionClass->setObjectName(QStringLiteral("action_recognitionClass"));
        action_recognitionClass->resize(2042, 1210);
        centralWidget = new QWidget(action_recognitionClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(42, 30, 1954, 941));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(12);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetMinimumSize);
        srcImg = new QLabel(layoutWidget);
        srcImg->setObjectName(QStringLiteral("srcImg"));
        srcImg->setMinimumSize(QSize(960, 720));

        horizontalLayout_3->addWidget(srcImg);


        horizontalLayout_6->addLayout(horizontalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(12);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        bgImg = new QLabel(layoutWidget);
        bgImg->setObjectName(QStringLiteral("bgImg"));
        bgImg->setMinimumSize(QSize(480, 360));
        bgImg->setMaximumSize(QSize(480, 360));

        horizontalLayout_2->addWidget(bgImg);

        lightImg = new QLabel(layoutWidget);
        lightImg->setObjectName(QStringLiteral("lightImg"));

        horizontalLayout_2->addWidget(lightImg);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(12);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setSizeConstraint(QLayout::SetMinimumSize);
        coreImg = new QLabel(layoutWidget);
        coreImg->setObjectName(QStringLiteral("coreImg"));
        coreImg->setMinimumSize(QSize(480, 360));

        horizontalLayout_5->addWidget(coreImg);

        whImg = new QLabel(layoutWidget);
        whImg->setObjectName(QStringLiteral("whImg"));
        whImg->setMinimumSize(QSize(480, 360));
        whImg->setMaximumSize(QSize(480, 360));

        horizontalLayout_5->addWidget(whImg);


        verticalLayout_4->addLayout(horizontalLayout_5);


        horizontalLayout_6->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout_6);

        verticalSpacer = new QSpacerItem(20, 48, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, -1, -1, -1);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        posRadio = new QRadioButton(layoutWidget);
        posRadio->setObjectName(QStringLiteral("posRadio"));
        posRadio->setChecked(true);

        verticalLayout_3->addWidget(posRadio);

        negRadio = new QRadioButton(layoutWidget);
        negRadio->setObjectName(QStringLiteral("negRadio"));

        verticalLayout_3->addWidget(negRadio);


        horizontalLayout->addLayout(verticalLayout_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        rgbLabel = new QLabel(layoutWidget);
        rgbLabel->setObjectName(QStringLiteral("rgbLabel"));
        rgbLabel->setMinimumSize(QSize(240, 0));

        horizontalLayout->addWidget(rgbLabel);

        pathNum = new QLineEdit(layoutWidget);
        pathNum->setObjectName(QStringLiteral("pathNum"));

        horizontalLayout->addWidget(pathNum);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_4->addLayout(verticalLayout);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_9->addWidget(label_3);

        frameRate = new QLineEdit(layoutWidget);
        frameRate->setObjectName(QStringLiteral("frameRate"));

        horizontalLayout_9->addWidget(frameRate);


        horizontalLayout_4->addLayout(horizontalLayout_9);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_7->addWidget(label_2);

        status = new QLineEdit(layoutWidget);
        status->setObjectName(QStringLiteral("status"));
        status->setMinimumSize(QSize(200, 0));

        horizontalLayout_7->addWidget(status);


        horizontalLayout_4->addLayout(horizontalLayout_7);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        start = new QPushButton(layoutWidget);
        start->setObjectName(QStringLiteral("start"));

        verticalLayout_2->addWidget(start);

        start_3 = new QPushButton(layoutWidget);
        start_3->setObjectName(QStringLiteral("start_3"));

        verticalLayout_2->addWidget(start_3);


        horizontalLayout_4->addLayout(verticalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_5->addLayout(horizontalLayout_4);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(40, 990, 178, 106));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_8->addWidget(label);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        isTrait = new QRadioButton(layoutWidget1);
        isTrait->setObjectName(QStringLiteral("isTrait"));
        isTrait->setChecked(false);

        verticalLayout_6->addWidget(isTrait);

        noTrait = new QRadioButton(layoutWidget1);
        noTrait->setObjectName(QStringLiteral("noTrait"));
        noTrait->setChecked(true);

        verticalLayout_6->addWidget(noTrait);


        horizontalLayout_8->addLayout(verticalLayout_6);

        action_recognitionClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(action_recognitionClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 2042, 37));
        action_recognitionClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(action_recognitionClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        action_recognitionClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(action_recognitionClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        action_recognitionClass->setStatusBar(statusBar);

        retranslateUi(action_recognitionClass);
        QObject::connect(start, SIGNAL(clicked()), action_recognitionClass, SLOT(start()));
        QObject::connect(start_3, SIGNAL(clicked()), action_recognitionClass, SLOT(stop()));

        QMetaObject::connectSlotsByName(action_recognitionClass);
    } // setupUi

    void retranslateUi(QMainWindow *action_recognitionClass)
    {
        action_recognitionClass->setWindowTitle(QApplication::translate("action_recognitionClass", "action_recognition", Q_NULLPTR));
        srcImg->setText(QApplication::translate("action_recognitionClass", "\350\216\267\345\217\226\345\233\276\345\203\217", Q_NULLPTR));
        bgImg->setText(QApplication::translate("action_recognitionClass", "\345\211\215\346\231\257\345\233\276", Q_NULLPTR));
        lightImg->setText(QApplication::translate("action_recognitionClass", "\347\250\200\347\226\217\345\205\211\346\265\201\347\211\271\345\276\201", Q_NULLPTR));
        coreImg->setText(QApplication::translate("action_recognitionClass", "\351\207\215\345\277\203", Q_NULLPTR));
        whImg->setText(QApplication::translate("action_recognitionClass", "\345\256\275\351\253\230\346\257\224", Q_NULLPTR));
        posRadio->setText(QApplication::translate("action_recognitionClass", "\346\221\224\345\200\222\346\225\260\346\215\256", Q_NULLPTR));
        negRadio->setText(QApplication::translate("action_recognitionClass", "\346\227\245\345\270\270\346\225\260\346\215\256", Q_NULLPTR));
        rgbLabel->setText(QApplication::translate("action_recognitionClass", " \346\272\220\346\226\207\344\273\266\345\272\217\345\217\267 : ", Q_NULLPTR));
        pathNum->setText(QApplication::translate("action_recognitionClass", "1", Q_NULLPTR));
        label_3->setText(QApplication::translate("action_recognitionClass", "\345\270\247\347\216\207", Q_NULLPTR));
        frameRate->setText(QApplication::translate("action_recognitionClass", "0", Q_NULLPTR));
        label_2->setText(QApplication::translate("action_recognitionClass", "\347\212\266\346\200\201\347\233\221\346\216\247", Q_NULLPTR));
        status->setText(QApplication::translate("action_recognitionClass", "        \346\255\243\345\270\270", Q_NULLPTR));
        start->setText(QApplication::translate("action_recognitionClass", "Start", Q_NULLPTR));
        start_3->setText(QApplication::translate("action_recognitionClass", "Stop", Q_NULLPTR));
        label->setText(QApplication::translate("action_recognitionClass", "\346\230\276\347\244\272\347\211\271\345\276\201", Q_NULLPTR));
        isTrait->setText(QApplication::translate("action_recognitionClass", "\346\230\257", Q_NULLPTR));
        noTrait->setText(QApplication::translate("action_recognitionClass", "\345\220\246", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class action_recognitionClass: public Ui_action_recognitionClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTION_RECOGNITION_H
