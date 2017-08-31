/********************************************************************************
** Form generated from reading UI file 'CommentListItem.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMENTLISTITEM_H
#define UI_COMMENTLISTITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QLabel *picLabel;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout;
    QLabel *typeLabel;
    QLabel *nameLabel;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QFrame *line;
    QSpacerItem *horizontalSpacer_6;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(378, 114);
        Form->setStyleSheet(QLatin1String("QWidget#Form{\n"
"	font-family: Microsoft YaHei;\n"
"	background-color:#ffffff;\n"
"}\n"
"\n"
"QLabel#nameLabel {\n"
"	font-family: Microsoft YaHei;\n"
"	font-size: 14px;\n"
"	color: #999999;\n"
"	background-position:center;\n"
"	background-color: transparent;\n"
"	margin-bottom: 2px;\n"
"}\n"
"\n"
"QLabel#typeLabel {\n"
"	font-size: 13px;\n"
"	background-color: #ffa300;\n"
"	font-family: Microsoft YaHei;\n"
"    border-radius: 2px;\n"
"    border-color: #ffffff;\n"
"	color: white;\n"
"	margin-top: 3px;\n"
"	margin-bottom: 4px;\n"
"}\n"
"\n"
"QLabel#contentLabel {\n"
"	background-color: transparent;\n"
"}\n"
"\n"
"QTextEdit#textEdit{\n"
"	font-family: Microsoft YaHei;\n"
"	font-size: 13px;\n"
"	color: #535252;\n"
"}"));
        gridLayout = new QGridLayout(Form);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(10, 8, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        picLabel = new QLabel(Form);
        picLabel->setObjectName(QStringLiteral("picLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(picLabel->sizePolicy().hasHeightForWidth());
        picLabel->setSizePolicy(sizePolicy);
        picLabel->setMinimumSize(QSize(28, 28));
        picLabel->setMaximumSize(QSize(28, 28));

        horizontalLayout_2->addWidget(picLabel);

        horizontalSpacer_5 = new QSpacerItem(5, 8, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        typeLabel = new QLabel(Form);
        typeLabel->setObjectName(QStringLiteral("typeLabel"));
        typeLabel->setMaximumSize(QSize(45, 24));

        horizontalLayout->addWidget(typeLabel);

        nameLabel = new QLabel(Form);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));

        horizontalLayout->addWidget(nameLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        horizontalLayout_2->addLayout(horizontalLayout);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(41, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textEdit = new QTextEdit(Form);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        textEdit->setReadOnly(true);

        verticalLayout->addWidget(textEdit);

        line = new QFrame(Form);
        line->setObjectName(QStringLiteral("line"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy1);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);


        horizontalLayout_3->addLayout(verticalLayout);

        horizontalSpacer_6 = new QSpacerItem(10, 8, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", 0));
        picLabel->setText(QString());
        typeLabel->setText(QApplication::translate("Form", "\350\256\262\345\270\210", 0));
        nameLabel->setText(QApplication::translate("Form", "\346\270\205n\346\230\216A:", 0));
        textEdit->setHtml(QApplication::translate("Form", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei'; font-size:13px; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:9pt;\"><br /></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMENTLISTITEM_H
