#include "action_recognition.h"
#include <QtWidgets/QApplication>
#include <iostream>

using namespace std;
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	action_recognition w;
	w.show();
	return a.exec();
}
