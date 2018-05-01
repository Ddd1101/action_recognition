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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_action_recognitionClass
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *traitImg;
    QLabel *srcImg;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QRadioButton *bgButton1;
    QRadioButton *bgButton2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *action_recognitionClass)
    {
        if (action_recognitionClass->objectName().isEmpty())
            action_recognitionClass->setObjectName(QStringLiteral("action_recognitionClass"));
        action_recognitionClass->resize(1240, 898);
        centralWidget = new QWidget(action_recognitionClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(60, 130, 1091, 291));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        traitImg = new QLabel(widget);
        traitImg->setObjectName(QStringLiteral("traitImg"));

        horizontalLayout->addWidget(traitImg);

        srcImg = new QLabel(widget);
        srcImg->setObjectName(QStringLiteral("srcImg"));

        horizontalLayout->addWidget(srcImg);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(60, 460, 161, 121));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        bgButton1 = new QRadioButton(widget1);
        bgButton1->setObjectName(QStringLiteral("bgButton1"));

        verticalLayout->addWidget(bgButton1);

        bgButton2 = new QRadioButton(widget1);
        bgButton2->setObjectName(QStringLiteral("bgButton2"));

        verticalLayout->addWidget(bgButton2);

        action_recognitionClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(action_recognitionClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1240, 37));
        action_recognitionClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(action_recognitionClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        action_recognitionClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(action_recognitionClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        action_recognitionClass->setStatusBar(statusBar);

        retranslateUi(action_recognitionClass);

        QMetaObject::connectSlotsByName(action_recognitionClass);
    } // setupUi

    void retranslateUi(QMainWindow *action_recognitionClass)
    {
        action_recognitionClass->setWindowTitle(QApplication::translate("action_recognitionClass", "action_recognition", Q_NULLPTR));
        traitImg->setText(QApplication::translate("action_recognitionClass", "traitImg", Q_NULLPTR));
        srcImg->setText(QApplication::translate("action_recognitionClass", "srcImg", Q_NULLPTR));
        bgButton1->setText(QApplication::translate("action_recognitionClass", "\351\253\230\346\226\257", Q_NULLPTR));
        bgButton2->setText(QApplication::translate("action_recognitionClass", "Vibe", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class action_recognitionClass: public Ui_action_recognitionClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTION_RECOGNITION_H
