#pragma once

//yuanyi add
#include <QMouseEvent>
#include <qdialog.h>
#include <qfontmetrics.h>
#include <qfont.h>
#include "ui_Comment.h"
#include "CommentListItem.h"
#include "CommentPurchaseItem.h"


class CommentDialog : public QDialog
{
	Q_OBJECT

public:
	CommentDialog(QWidget *parent = Q_NULLPTR);	
	virtual ~CommentDialog();

private:
	Ui::CommentClass ui;
	QPoint mousePosition;
	bool isPressed;

	//demo debug
	void debugShow();


public slots:
	void mouseMoveEvent(QMouseEvent *event);
	void mousePressEvent(QMouseEvent *event);
	void mouseReleaseEvent(QMouseEvent *event);
	void paintEvent(QPaintEvent *);
};