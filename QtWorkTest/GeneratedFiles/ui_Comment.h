/********************************************************************************
** Form generated from reading UI file 'Comment.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMENT_H
#define UI_COMMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CommentClass
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *iconLabel;
    QLabel *labelTop;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *minButton;
    QToolButton *closeButton;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_2;
    QLabel *shadowLabel;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout_2;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *expressionButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *sendButton;
    QTextEdit *textEdit;

    void setupUi(QDialog *CommentClass)
    {
        if (CommentClass->objectName().isEmpty())
            CommentClass->setObjectName(QStringLiteral("CommentClass"));
        CommentClass->setEnabled(true);
        CommentClass->resize(320, 650);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CommentClass->sizePolicy().hasHeightForWidth());
        CommentClass->setSizePolicy(sizePolicy);
        CommentClass->setMinimumSize(QSize(320, 650));
        CommentClass->setMaximumSize(QSize(320, 650));
        CommentClass->setStyleSheet(QString::fromUtf8("QDialog#CommentClass {	\n"
"	font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QLabel#iconLabel{\n"
"	background-image:url(:/QtWorkTest/Resources/commentDialogIcon.png);\n"
"    background-repeat: no-repeat;\n"
"    background-color: transparent;\n"
"    background-position:center;\n"
"	\n"
"}\n"
"\n"
"QLabel#labelTop {\n"
"	background-repeat: no-repeat;\n"
"	background-color: transparent;\n"
"	background-position:center;\n"
"	font-family: Microsoft YaHei;\n"
"	font-size: 18px;\n"
"	color: #686868;\n"
"	line-height: 18px;\n"
"	padding-left: 10px;\n"
"	padding-top: 4px;\n"
"	padding-bottom: 10px;\n"
"}\n"
"\n"
"\n"
"QLabel#shadowLabel{\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(218,218,218), stop: 1 white);\n"
"	margin-left: 2px;\n"
"}\n"
"\n"
"QListWidget#listWidget {\n"
"	border: 0;\n"
"}\n"
"\n"
"QTextEdit#textEdit {\n"
"	border: 0;\n"
"}\n"
"\n"
"QPushButton#expressionButton {\n"
"	background-image: url("
                        ":/res/images/expression.png);\n"
"	background-position:center;\n"
"	background-repeat: no-repeat;\n"
"	background-color: transparent;\n"
"	background-size:cover;\n"
"}\n"
"\n"
"QListWidget#listWidget{\n"
"	padding-left: 2px;\n"
"}\n"
"QListView#listWidget::item:selected {\n"
"	border: 0px;\n"
"}\n"
"QListView#listWidget::item:selected:!active {\n"
"	background: #FFFFFF;\n"
"}\n"
"\n"
"QListView#listWidget::item:selected:active {\n"
"	background: #FFFFFF;\n"
"}\n"
"QListView#listWidget::item:hover{\n"
"	background: #FFFFFF;\n"
"}\n"
"\n"
"QScrollBar{\n"
"    width:10px;\n"
"    border-radius:5px;\n"
"}\n"
"QScrollBar::handle{\n"
"	background:lightgray; border:2px ; border-radius:5px;\n"
"}\n"
"QScrollBar::handle:hover{\n"
"	background:gray; \n"
"}\n"
"QScrollBar::handle:pressed{\n"
"    background:rgb(83,82,82);\n"
"}\n"
"\n"
"QToolButton#minButton {\n"
"    background-image:url(:/QtWorkTest/Resources/mini_normal.png);\n"
"    background-repeat: no-repeat;\n"
"    background-color: transparent;\n"
"    backgrou"
                        "nd-position:center;\n"
"}\n"
"QToolButton#minButton:hover {\n"
"    background-image: url(:/QtWorkTest/Resources/mini_hover.png);\n"
"    background-repeat: no-repeat;\n"
"    background-color: transparent;\n"
"    background-position:center;\n"
"}\n"
"\n"
"QToolButton#closeButton {\n"
"    background-image:url(:/QtWorkTest/Resources/close_normal.png);\n"
"    background-repeat: no-repeat;\n"
"    background-color: transparent;\n"
"    background-position:center;\n"
"}\n"
"QToolButton#closeButton:hover {\n"
"    background-image: url(:/QtWorkTest/Resources/close_hover.png);\n"
"    background-repeat: no-repeat;\n"
"    background-color: transparent;\n"
"    background-position:center;\n"
"}"));
        gridLayout = new QGridLayout(CommentClass);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 14, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(115, 13, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        iconLabel = new QLabel(CommentClass);
        iconLabel->setObjectName(QStringLiteral("iconLabel"));
        iconLabel->setMinimumSize(QSize(20, 20));
        iconLabel->setMaximumSize(QSize(20, 20));

        horizontalLayout_3->addWidget(iconLabel);

        labelTop = new QLabel(CommentClass);
        labelTop->setObjectName(QStringLiteral("labelTop"));
        labelTop->setStyleSheet(QStringLiteral(""));
        labelTop->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(labelTop);

        horizontalSpacer_3 = new QSpacerItem(40, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        minButton = new QToolButton(CommentClass);
        minButton->setObjectName(QStringLiteral("minButton"));

        horizontalLayout_2->addWidget(minButton);

        closeButton = new QToolButton(CommentClass);
        closeButton->setObjectName(QStringLiteral("closeButton"));

        horizontalLayout_2->addWidget(closeButton);

        horizontalSpacer_4 = new QSpacerItem(5, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 2, 0, 1, 1);

        shadowLabel = new QLabel(CommentClass);
        shadowLabel->setObjectName(QStringLiteral("shadowLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(shadowLabel->sizePolicy().hasHeightForWidth());
        shadowLabel->setSizePolicy(sizePolicy1);
        shadowLabel->setMinimumSize(QSize(0, 7));
        shadowLabel->setMaximumSize(QSize(16777215, 7));

        gridLayout->addWidget(shadowLabel, 3, 0, 1, 1);

        listWidget = new QListWidget(CommentClass);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setEnabled(true);
        listWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget->setSelectionRectVisible(false);

        gridLayout->addWidget(listWidget, 4, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        line_2 = new QFrame(CommentClass);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        expressionButton = new QPushButton(CommentClass);
        expressionButton->setObjectName(QStringLiteral("expressionButton"));
        expressionButton->setMaximumSize(QSize(32, 32));
        expressionButton->setStyleSheet(QStringLiteral(""));
        expressionButton->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(expressionButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        sendButton = new QPushButton(CommentClass);
        sendButton->setObjectName(QStringLiteral("sendButton"));
        sendButton->setMinimumSize(QSize(32, 32));
        sendButton->setMaximumSize(QSize(32, 32));
        sendButton->setStyleSheet(QLatin1String("background-image: url(:/res/images/send.png);\n"
"background-color: transparent;\n"
"background-repeat: no-repeat;\n"
"background-position:center;\n"
"background-size:contain;"));

        horizontalLayout->addWidget(sendButton);


        verticalLayout_2->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout_2, 5, 0, 1, 1);

        textEdit = new QTextEdit(CommentClass);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setMaximumSize(QSize(16777215, 90));

        gridLayout->addWidget(textEdit, 6, 0, 1, 1);


        retranslateUi(CommentClass);

        QMetaObject::connectSlotsByName(CommentClass);
    } // setupUi

    void retranslateUi(QDialog *CommentClass)
    {
        CommentClass->setWindowTitle(QApplication::translate("CommentClass", "Comment", 0));
        iconLabel->setText(QString());
        labelTop->setText(QApplication::translate("CommentClass", "\350\257\204\350\256\272\345\214\272", 0));
        minButton->setText(QString());
        closeButton->setText(QString());
        shadowLabel->setText(QString());
        expressionButton->setText(QString());
        sendButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CommentClass: public Ui_CommentClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMENT_H
