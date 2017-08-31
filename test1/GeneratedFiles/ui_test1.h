/********************************************************************************
** Form generated from reading UI file 'test1.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST1_H
#define UI_TEST1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_test1Class
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QLabel *label_3;
    QTextEdit *textEdit;
    QTextBrowser *textBrowser;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *test1Class)
    {
        if (test1Class->objectName().isEmpty())
            test1Class->setObjectName(QStringLiteral("test1Class"));
        test1Class->resize(364, 517);
        centralWidget = new QWidget(test1Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(9, 9, 54, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(185, 9, 54, 16));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(190, 50, 75, 23));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 60, 54, 12));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(20, 110, 261, 71));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI Emoji"));
        font.setKerning(false);
        textEdit->setFont(font);
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(20, 210, 256, 192));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI Emoji"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        textBrowser->setFont(font1);
        textBrowser->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextEditable|Qt::TextSelectableByMouse);
        test1Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(test1Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 364, 23));
        test1Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(test1Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        test1Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(test1Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        test1Class->setStatusBar(statusBar);

        retranslateUi(test1Class);

        QMetaObject::connectSlotsByName(test1Class);
    } // setupUi

    void retranslateUi(QMainWindow *test1Class)
    {
        test1Class->setWindowTitle(QApplication::translate("test1Class", "test1", 0));
        label->setText(QApplication::translate("test1Class", "TextLabel", 0));
        label_2->setText(QApplication::translate("test1Class", "TextLabel", 0));
        pushButton->setText(QApplication::translate("test1Class", "PushButton", 0));
        label_3->setText(QApplication::translate("test1Class", "xxx", 0));
        textEdit->setHtml(QApplication::translate("test1Class", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI Emoji'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> \360\237\221\275 \360\237\221\276 \360\237\244\226 </p></body></html>", 0));
        textBrowser->setHtml(QApplication::translate("test1Class", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI Emoji'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:9pt;\">\360\237\230\203\360\237\230\200asddasd</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class test1Class: public Ui_test1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST1_H
