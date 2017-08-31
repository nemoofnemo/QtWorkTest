#include "widget.h"
#include <qstackedlayout.h>

widget::widget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	
	QStackedLayout * stacked = new QStackedLayout;
	QGridLayout * grid = new QGridLayout;
	
}
