#include "QtGuiApplication1.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtGuiApplication1 w;
    w.show();
	B * b = new B;
	A * ax = static_cast<A*>(b);
	//ax->deleteLater();
	b->deleteLater();
    return a.exec();
}
