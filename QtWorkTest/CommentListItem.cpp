#include "CommentListItem.h"

CommentListItem::CommentListItem(QWidget * parent) : QWidget(parent)
{
	ui.setupUi(this);
	pixmapSet = false;
	QPalette palette = ui.line->palette();
	palette.setColor(QPalette::Dark, QColor(229,229,229));
	ui.line->setPalette(palette);
	
}

CommentListItem::~CommentListItem(){
	qDebug("asd");
}

void CommentListItem::paintEvent(QPaintEvent * e){

}

