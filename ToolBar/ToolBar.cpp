#include "ToolBar.h"

ToolBar::ToolBar(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	setWindowFlags(Qt::Dialog | Qt::Tool | Qt::FramelessWindowHint);
}
