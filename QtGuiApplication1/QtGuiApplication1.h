#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtGuiApplication1.h"

class QtGuiApplication1 : public QMainWindow
{
    Q_OBJECT

public:
    QtGuiApplication1(QWidget *parent = Q_NULLPTR);

private:
    Ui::QtGuiApplication1Class ui;
};

class A : public QObject{
	Q_OBJECT
public:
	A(){
		qDebug("a cons");
	}

	virtual ~A(){
		qDebug("a des");
	}
};

class B : public A{
	Q_OBJECT
public:
	B(){
		qDebug("v cons");
	}

	virtual ~B(){
		qDebug("v des");
	}
};