#pragma once

#include <QtWidgets/QWidget>
#include "ui_ToolBar.h"

class ToolBar : public QWidget
{
    Q_OBJECT

public:
    ToolBar(QWidget *parent = Q_NULLPTR);

private:
    Ui::ToolBarClass ui;
};
