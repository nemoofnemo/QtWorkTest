#include "QtGuiApplication2.h"
#include <QtWidgets/QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtGuiApplication2 w;
	//w.setWindowFlags(Qt::Dialog | Qt::Tool);
    w.show();
    return a.exec();
}
