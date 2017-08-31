#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtWorkTest.h"

class QtWorkTest : public QMainWindow
{
    Q_OBJECT

public:
    QtWorkTest(QWidget *parent = Q_NULLPTR);

private:
    Ui::QtWorkTestClass ui;
};
