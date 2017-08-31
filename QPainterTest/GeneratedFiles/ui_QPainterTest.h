/********************************************************************************
** Form generated from reading UI file 'QPainterTest.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QPAINTERTEST_H
#define UI_QPAINTERTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QPainterTestClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;

    void setupUi(QMainWindow *QPainterTestClass)
    {
        if (QPainterTestClass->objectName().isEmpty())
            QPainterTestClass->setObjectName(QStringLiteral("QPainterTestClass"));
        QPainterTestClass->resize(315, 75);
        centralWidget = new QWidget(QPainterTestClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(130, 30, 75, 23));
        QPainterTestClass->setCentralWidget(centralWidget);

        retranslateUi(QPainterTestClass);

        QMetaObject::connectSlotsByName(QPainterTestClass);
    } // setupUi

    void retranslateUi(QMainWindow *QPainterTestClass)
    {
        QPainterTestClass->setWindowTitle(QApplication::translate("QPainterTestClass", "QPainterTest", 0));
        pushButton->setText(QApplication::translate("QPainterTestClass", "generrate", 0));
    } // retranslateUi

};

namespace Ui {
    class QPainterTestClass: public Ui_QPainterTestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QPAINTERTEST_H
