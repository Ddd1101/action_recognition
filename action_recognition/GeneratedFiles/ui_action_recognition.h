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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_action_recognitionClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *action_recognitionClass)
    {
        if (action_recognitionClass->objectName().isEmpty())
            action_recognitionClass->setObjectName(QStringLiteral("action_recognitionClass"));
        action_recognitionClass->resize(600, 400);
        menuBar = new QMenuBar(action_recognitionClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        action_recognitionClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(action_recognitionClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        action_recognitionClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(action_recognitionClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        action_recognitionClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(action_recognitionClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        action_recognitionClass->setStatusBar(statusBar);

        retranslateUi(action_recognitionClass);

        QMetaObject::connectSlotsByName(action_recognitionClass);
    } // setupUi

    void retranslateUi(QMainWindow *action_recognitionClass)
    {
        action_recognitionClass->setWindowTitle(QApplication::translate("action_recognitionClass", "action_recognition", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class action_recognitionClass: public Ui_action_recognitionClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTION_RECOGNITION_H
