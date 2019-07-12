#include "webengineplay.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	WebenginePlay w;
	w.show();
	return a.exec();
}
