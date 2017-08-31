/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_widgetClass
{
public:
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QLabel *label;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;

    void setupUi(QWidget *widgetClass)
    {
        if (widgetClass->objectName().isEmpty())
            widgetClass->setObjectName(QStringLiteral("widgetClass"));
        widgetClass->resize(600, 400);
        verticalLayoutWidget_2 = new QWidget(widgetClass);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 10, 581, 381));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(verticalLayoutWidget_2);
        widget->setObjectName(QStringLiteral("widget"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 160, 54, 12));
        horizontalLayoutWidget = new QWidget(widget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(120, 10, 401, 301));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addWidget(widget);


        retranslateUi(widgetClass);

        QMetaObject::connectSlotsByName(widgetClass);
    } // setupUi

    void retranslateUi(QWidget *widgetClass)
    {
        widgetClass->setWindowTitle(QApplication::translate("widgetClass", "widget", 0));
        label->setText(QApplication::translate("widgetClass", "TextLabel", 0));
        pushButton->setText(QApplication::translate("widgetClass", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class widgetClass: public Ui_widgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
