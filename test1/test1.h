#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_test1.h"

class test1 : public QMainWindow
{
    Q_OBJECT

public:
    test1(QWidget *parent = Q_NULLPTR);

private:
    Ui::test1Class ui;

	void moveEvent(QMoveEvent *event);

public slots:
void onPushButton();
};
