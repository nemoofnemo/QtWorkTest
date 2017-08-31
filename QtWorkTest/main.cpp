#include "QtWorkTest.h"
#include "CommentDialog.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CommentDialog w;
    w.show();
    return a.exec();
}
