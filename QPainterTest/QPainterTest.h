#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QPainterTest.h"
#include <list>
#include <QPainter>
#include <QPalette>
#include <cmath>
#include <QBrush>

using std::list;

class QPainterTest : public QMainWindow
{
    Q_OBJECT

public:
    QPainterTest(QWidget *parent = Q_NULLPTR);

protected:
	void paintEvent(QPaintEvent * e);
	void onButtonClicked();

private:
    Ui::QPainterTestClass ui;
	
	struct RectNode {
		int x;
		int y;
		int len;

		RectNode(){
			x = 0;
			y = 0;
			len = 0;
		}

		RectNode(int _x, int _y, int _len) :x(_x), y(_y), len(_len)
		{

		}

	};

	unsigned long long cusPow(unsigned int arg, unsigned int pow);
	list<RectNode> rectList;
	void initRectList(int maxLevel, int firstLength, int sectionCount, int posX, int posY);
	void writeImage();
	
};
