#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_action_recognition.h"

class action_recognition : public QMainWindow
{
	Q_OBJECT

public:
	action_recognition(QWidget *parent = Q_NULLPTR);

private:
	Ui::action_recognitionClass ui;
};
