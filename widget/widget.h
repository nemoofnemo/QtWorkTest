#pragma once

#include <QtWidgets/QWidget>
#include <QPainter>
#include "ui_widget.h"

class widget : public QWidget
{
    Q_OBJECT

public:
    widget(QWidget *parent = Q_NULLPTR);

private:
    Ui::widgetClass ui;
	void paintEvent(QPaintEvent * e){
		QPainterPath path;
		path.addRect(20, 20, 60, 60);

		path.moveTo(0, 0);
		path.cubicTo(99, 0, 50, 50, 99, 99);
		path.cubicTo(0, 99, 50, 50, 0, 0);

		QPainter painter(this);
		painter.fillRect(0, 0, 100, 100, Qt::white);
		painter.setPen(QPen(QColor(79, 106, 25), 1, Qt::SolidLine,
			Qt::FlatCap, Qt::MiterJoin));
		painter.setBrush(QColor(122, 163, 39));

		painter.drawPath(path);
	}
};
