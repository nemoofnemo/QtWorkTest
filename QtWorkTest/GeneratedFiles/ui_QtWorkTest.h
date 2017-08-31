/********************************************************************************
** Form generated from reading UI file 'QtWorkTest.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTWORKTEST_H
#define UI_QTWORKTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtWorkTestClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtWorkTestClass)
    {
        if (QtWorkTestClass->objectName().isEmpty())
            QtWorkTestClass->setObjectName(QStringLiteral("QtWorkTestClass"));
        QtWorkTestClass->resize(600, 400);
        menuBar = new QMenuBar(QtWorkTestClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        QtWorkTestClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtWorkTestClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtWorkTestClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(QtWorkTestClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QtWorkTestClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QtWorkTestClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtWorkTestClass->setStatusBar(statusBar);

        retranslateUi(QtWorkTestClass);

        QMetaObject::connectSlotsByName(QtWorkTestClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtWorkTestClass)
    {
        QtWorkTestClass->setWindowTitle(QApplication::translate("QtWorkTestClass", "QtWorkTest", 0));
    } // retranslateUi

};

namespace Ui {
    class QtWorkTestClass: public Ui_QtWorkTestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTWORKTEST_H
