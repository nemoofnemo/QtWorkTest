#pragma once
#include "ui_CommentListItem.h"
#include <QListWidgetItem>  
#include <qpixmap.h>
#include <qpainter.h>
#include <qbitmap.h>
#include <qstatictext.h>

//yuanyi add

class CommentListItem : public QWidget {
	Q_OBJECT
public:
	Ui::Form ui;
	QPixmap pixmap;
	bool pixmapSet;
	QString str;
	CommentListItem(QWidget * parent = nullptr);
	virtual ~CommentListItem();

public slots:
	void paintEvent(QPaintEvent *);
};