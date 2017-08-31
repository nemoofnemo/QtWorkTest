#include "test1.h"

test1::test1(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton,&QPushButton::clicked, this, &test1::onPushButton);
	QString str = QString("");
}

void test1::moveEvent(QMoveEvent *event){
	//QPoint p = QWidget::mapToGlobal(QPoint(0,0));
	ui.label->setText(QString::number(pos().x())); 
	ui.label_2->setText(QString::number(pos().y()));
}

void test1::onPushButton(){
	this->move(x() +100,y() + 100);
}
