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
#include <QtWidgets/QToolButton>
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
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *rgbLabel;
    QLineEdit *rgbPath;
    QToolButton *rgbToolButton;
    QHBoxLayout *horizontalLayout2;
    QLabel *grayLabel;
    QLineEdit *grayPath;
    QToolButton *grayToolButton;
    QHBoxLayout *horizontalLayout3;
    QLabel *dstLabel;
    QLineEdit *dstPath;
    QToolButton *dstToolButton;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_2;
    QLineEdit *status;
    QVBoxLayout *verticalLayout_2;
    QPushButton *start;
    QPushButton *start_3;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *action_recognitionClass)
    {
        if (action_recognitionClass->objectName().isEmpty())
            action_recognitionClass->setObjectName(QStringLiteral("action_recognitionClass"));
        action_recognitionClass->resize(2042, 1082);
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
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        rgbLabel = new QLabel(layoutWidget);
        rgbLabel->setObjectName(QStringLiteral("rgbLabel"));
        rgbLabel->setMinimumSize(QSize(240, 0));

        horizontalLayout->addWidget(rgbLabel);

        rgbPath = new QLineEdit(layoutWidget);
        rgbPath->setObjectName(QStringLiteral("rgbPath"));
        rgbPath->setMinimumSize(QSize(640, 0));

        horizontalLayout->addWidget(rgbPath);

        rgbToolButton = new QToolButton(layoutWidget);
        rgbToolButton->setObjectName(QStringLiteral("rgbToolButton"));

        horizontalLayout->addWidget(rgbToolButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout2 = new QHBoxLayout();
        horizontalLayout2->setSpacing(6);
        horizontalLayout2->setObjectName(QStringLiteral("horizontalLayout2"));
        grayLabel = new QLabel(layoutWidget);
        grayLabel->setObjectName(QStringLiteral("grayLabel"));
        grayLabel->setMinimumSize(QSize(240, 0));

        horizontalLayout2->addWidget(grayLabel);

        grayPath = new QLineEdit(layoutWidget);
        grayPath->setObjectName(QStringLiteral("grayPath"));

        horizontalLayout2->addWidget(grayPath);

        grayToolButton = new QToolButton(layoutWidget);
        grayToolButton->setObjectName(QStringLiteral("grayToolButton"));

        horizontalLayout2->addWidget(grayToolButton);


        verticalLayout->addLayout(horizontalLayout2);

        horizontalLayout3 = new QHBoxLayout();
        horizontalLayout3->setSpacing(6);
        horizontalLayout3->setObjectName(QStringLiteral("horizontalLayout3"));
        dstLabel = new QLabel(layoutWidget);
        dstLabel->setObjectName(QStringLiteral("dstLabel"));
        dstLabel->setMinimumSize(QSize(240, 0));

        horizontalLayout3->addWidget(dstLabel);

        dstPath = new QLineEdit(layoutWidget);
        dstPath->setObjectName(QStringLiteral("dstPath"));

        horizontalLayout3->addWidget(dstPath);

        dstToolButton = new QToolButton(layoutWidget);
        dstToolButton->setObjectName(QStringLiteral("dstToolButton"));

        horizontalLayout3->addWidget(dstToolButton);


        verticalLayout->addLayout(horizontalLayout3);


        horizontalLayout_4->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        radioButton = new QRadioButton(layoutWidget);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        verticalLayout_3->addWidget(radioButton);

        radioButton_2 = new QRadioButton(layoutWidget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        verticalLayout_3->addWidget(radioButton_2);


        horizontalLayout_4->addLayout(verticalLayout_3);

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
        QObject::connect(rgbToolButton, SIGNAL(clicked()), action_recognitionClass, SLOT(getRgbPath()));
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
        rgbLabel->setText(QApplication::translate("action_recognitionClass", " \346\272\220 \346\226\207\344\273\266\344\275\215\347\275\256 : ", Q_NULLPTR));
        rgbToolButton->setText(QApplication::translate("action_recognitionClass", "...", Q_NULLPTR));
        grayLabel->setText(QApplication::translate("action_recognitionClass", "\347\201\260\345\272\246\346\226\207\344\273\266\344\275\215\347\275\256 : ", Q_NULLPTR));
        grayToolButton->setText(QApplication::translate("action_recognitionClass", "...", Q_NULLPTR));
        dstLabel->setText(QApplication::translate("action_recognitionClass", "\344\277\235\345\255\230\346\226\207\344\273\266\344\275\215\347\275\256 : ", Q_NULLPTR));
        dstToolButton->setText(QApplication::translate("action_recognitionClass", "...", Q_NULLPTR));
        radioButton->setText(QApplication::translate("action_recognitionClass", "svm\346\250\241\345\236\213", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("action_recognitionClass", "\351\232\220\351\251\254\345\260\224\347\247\221\345\244\253\346\250\241\345\236\213", Q_NULLPTR));
        label_2->setText(QApplication::translate("action_recognitionClass", "\347\212\266\346\200\201\347\233\221\346\216\247", Q_NULLPTR));
        status->setText(QApplication::translate("action_recognitionClass", "        \350\255\246\345\221\212", Q_NULLPTR));
        start->setText(QApplication::translate("action_recognitionClass", "Start", Q_NULLPTR));
        start_3->setText(QApplication::translate("action_recognitionClass", "Stop", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class action_recognitionClass: public Ui_action_recognitionClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTION_RECOGNITION_H
