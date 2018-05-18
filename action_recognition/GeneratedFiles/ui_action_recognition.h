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
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
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
    QPushButton *start;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *srcImg;
    QLabel *label;
    QPlainTextEdit *svm1Text;
    QLabel *label_2;
    QPlainTextEdit *svm2Text;
    QWidget *layoutWidget1;
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
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *action_recognitionClass)
    {
        if (action_recognitionClass->objectName().isEmpty())
            action_recognitionClass->setObjectName(QStringLiteral("action_recognitionClass"));
        action_recognitionClass->resize(1618, 778);
        centralWidget = new QWidget(action_recognitionClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        start = new QPushButton(centralWidget);
        start->setObjectName(QStringLiteral("start"));
        start->setGeometry(QRect(1190, 530, 150, 46));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 20, 1482, 482));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        srcImg = new QLabel(layoutWidget);
        srcImg->setObjectName(QStringLiteral("srcImg"));
        srcImg->setMinimumSize(QSize(640, 480));

        horizontalLayout_3->addWidget(srcImg);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);

        horizontalLayout_3->addWidget(label);

        svm1Text = new QPlainTextEdit(layoutWidget);
        svm1Text->setObjectName(QStringLiteral("svm1Text"));
        svm1Text->setMinimumSize(QSize(50, 0));
        svm1Text->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_3->addWidget(svm1Text);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        horizontalLayout_3->addWidget(label_2);

        svm2Text = new QPlainTextEdit(layoutWidget);
        svm2Text->setObjectName(QStringLiteral("svm2Text"));
        svm2Text->setMinimumSize(QSize(300, 0));
        svm2Text->setMaximumSize(QSize(300, 16777215));

        horizontalLayout_3->addWidget(svm2Text);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(70, 530, 976, 125));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        rgbLabel = new QLabel(layoutWidget1);
        rgbLabel->setObjectName(QStringLiteral("rgbLabel"));
        rgbLabel->setMinimumSize(QSize(60, 0));

        horizontalLayout->addWidget(rgbLabel);

        rgbPath = new QLineEdit(layoutWidget1);
        rgbPath->setObjectName(QStringLiteral("rgbPath"));
        rgbPath->setMinimumSize(QSize(640, 0));

        horizontalLayout->addWidget(rgbPath);

        rgbToolButton = new QToolButton(layoutWidget1);
        rgbToolButton->setObjectName(QStringLiteral("rgbToolButton"));

        horizontalLayout->addWidget(rgbToolButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout2 = new QHBoxLayout();
        horizontalLayout2->setSpacing(6);
        horizontalLayout2->setObjectName(QStringLiteral("horizontalLayout2"));
        grayLabel = new QLabel(layoutWidget1);
        grayLabel->setObjectName(QStringLiteral("grayLabel"));
        grayLabel->setMinimumSize(QSize(60, 0));

        horizontalLayout2->addWidget(grayLabel);

        grayPath = new QLineEdit(layoutWidget1);
        grayPath->setObjectName(QStringLiteral("grayPath"));

        horizontalLayout2->addWidget(grayPath);

        grayToolButton = new QToolButton(layoutWidget1);
        grayToolButton->setObjectName(QStringLiteral("grayToolButton"));

        horizontalLayout2->addWidget(grayToolButton);


        verticalLayout->addLayout(horizontalLayout2);

        horizontalLayout3 = new QHBoxLayout();
        horizontalLayout3->setSpacing(6);
        horizontalLayout3->setObjectName(QStringLiteral("horizontalLayout3"));
        dstLabel = new QLabel(layoutWidget1);
        dstLabel->setObjectName(QStringLiteral("dstLabel"));
        dstLabel->setMinimumSize(QSize(60, 0));

        horizontalLayout3->addWidget(dstLabel);

        dstPath = new QLineEdit(layoutWidget1);
        dstPath->setObjectName(QStringLiteral("dstPath"));

        horizontalLayout3->addWidget(dstPath);

        dstToolButton = new QToolButton(layoutWidget1);
        dstToolButton->setObjectName(QStringLiteral("dstToolButton"));

        horizontalLayout3->addWidget(dstToolButton);


        verticalLayout->addLayout(horizontalLayout3);

        action_recognitionClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(action_recognitionClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1618, 37));
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

        QMetaObject::connectSlotsByName(action_recognitionClass);
    } // setupUi

    void retranslateUi(QMainWindow *action_recognitionClass)
    {
        action_recognitionClass->setWindowTitle(QApplication::translate("action_recognitionClass", "action_recognition", Q_NULLPTR));
        start->setText(QApplication::translate("action_recognitionClass", "Start", Q_NULLPTR));
        srcImg->setText(QApplication::translate("action_recognitionClass", "srcImg", Q_NULLPTR));
        label->setText(QApplication::translate("action_recognitionClass", "svm 1 :", Q_NULLPTR));
        label_2->setText(QApplication::translate("action_recognitionClass", "svm 2 :", Q_NULLPTR));
        rgbLabel->setText(QApplication::translate("action_recognitionClass", " \346\272\220 \346\226\207\344\273\266\344\275\215\347\275\256 : ", Q_NULLPTR));
        rgbToolButton->setText(QApplication::translate("action_recognitionClass", "...", Q_NULLPTR));
        grayLabel->setText(QApplication::translate("action_recognitionClass", "\347\201\260\345\272\246\346\226\207\344\273\266\344\275\215\347\275\256 : ", Q_NULLPTR));
        grayToolButton->setText(QApplication::translate("action_recognitionClass", "...", Q_NULLPTR));
        dstLabel->setText(QApplication::translate("action_recognitionClass", "\344\277\235\345\255\230\346\226\207\344\273\266\344\275\215\347\275\256 : ", Q_NULLPTR));
        dstToolButton->setText(QApplication::translate("action_recognitionClass", "...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class action_recognitionClass: public Ui_action_recognitionClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTION_RECOGNITION_H
