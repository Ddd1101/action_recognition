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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
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
    QHBoxLayout *horizontalLayout;
    QLabel *srcImg;
    QLabel *traitImg;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QTextEdit *srcPathText;
    QToolButton *srcToolButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QTextEdit *srcPathText_2;
    QToolButton *dstToolButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *action_recognitionClass)
    {
        if (action_recognitionClass->objectName().isEmpty())
            action_recognitionClass->setObjectName(QStringLiteral("action_recognitionClass"));
        action_recognitionClass->resize(1400, 1000);
        centralWidget = new QWidget(action_recognitionClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        start = new QPushButton(centralWidget);
        start->setObjectName(QStringLiteral("start"));
        start->setGeometry(QRect(1070, 540, 150, 46));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 10, 1312, 482));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(30);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        srcImg = new QLabel(layoutWidget);
        srcImg->setObjectName(QStringLiteral("srcImg"));
        srcImg->setMinimumSize(QSize(640, 480));

        horizontalLayout->addWidget(srcImg);

        traitImg = new QLabel(layoutWidget);
        traitImg->setObjectName(QStringLiteral("traitImg"));
        traitImg->setMinimumSize(QSize(640, 480));

        horizontalLayout->addWidget(traitImg);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 540, 915, 188));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(15);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(15);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        srcPathText = new QTextEdit(layoutWidget1);
        srcPathText->setObjectName(QStringLiteral("srcPathText"));
        srcPathText->setMinimumSize(QSize(0, 10));
        srcPathText->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_2->addWidget(srcPathText);

        srcToolButton = new QToolButton(layoutWidget1);
        srcToolButton->setObjectName(QStringLiteral("srcToolButton"));

        horizontalLayout_2->addWidget(srcToolButton);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetMaximumSize);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        srcPathText_2 = new QTextEdit(layoutWidget1);
        srcPathText_2->setObjectName(QStringLiteral("srcPathText_2"));
        srcPathText_2->setMinimumSize(QSize(0, 10));
        srcPathText_2->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_3->addWidget(srcPathText_2);

        dstToolButton = new QToolButton(layoutWidget1);
        dstToolButton->setObjectName(QStringLiteral("dstToolButton"));

        horizontalLayout_3->addWidget(dstToolButton);


        verticalLayout->addLayout(horizontalLayout_3);

        action_recognitionClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(action_recognitionClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1400, 37));
        action_recognitionClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(action_recognitionClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        action_recognitionClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(action_recognitionClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        action_recognitionClass->setStatusBar(statusBar);

        retranslateUi(action_recognitionClass);
        QObject::connect(start, SIGNAL(clicked()), action_recognitionClass, SLOT(startProcess()));
        QObject::connect(srcToolButton, SIGNAL(clicked()), action_recognitionClass, SLOT(srcPath()));

        QMetaObject::connectSlotsByName(action_recognitionClass);
    } // setupUi

    void retranslateUi(QMainWindow *action_recognitionClass)
    {
        action_recognitionClass->setWindowTitle(QApplication::translate("action_recognitionClass", "action_recognition", Q_NULLPTR));
        start->setText(QApplication::translate("action_recognitionClass", "Start", Q_NULLPTR));
        srcImg->setText(QApplication::translate("action_recognitionClass", "srcImg", Q_NULLPTR));
        traitImg->setText(QApplication::translate("action_recognitionClass", "traitImg", Q_NULLPTR));
        label->setText(QApplication::translate("action_recognitionClass", "\346\272\220 \346\226\207\344\273\266 \350\267\257\345\276\204 \357\274\232", Q_NULLPTR));
        srcToolButton->setText(QApplication::translate("action_recognitionClass", "...", Q_NULLPTR));
        label_2->setText(QApplication::translate("action_recognitionClass", "\344\277\235\345\255\230\346\226\207\344\273\266\350\267\257\345\276\204 \357\274\232", Q_NULLPTR));
        dstToolButton->setText(QApplication::translate("action_recognitionClass", "...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class action_recognitionClass: public Ui_action_recognitionClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTION_RECOGNITION_H
