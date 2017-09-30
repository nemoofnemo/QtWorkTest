#include <QtCore/QCoreApplication>
#include <QFile>

int main(int argc, char *argv[])
{
	QFile file("asd/asdf.txt");
	file.open(QIODevice::WriteOnly);
	file.close();
	return 0;
}
