/********************************************************************************
** Form generated from reading UI file 'HandoutItem.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HANDOUTITEM_H
#define UI_HANDOUTITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HandoutItem
{
public:
    QGridLayout *gridLayout;
    QPushButton *iconButton;
    QLabel *filenameLabel;
    QSpacerItem *horizontalSpacer;
    QPushButton *removeButton;

    void setupUi(QWidget *HandoutItem)
    {
        if (HandoutItem->objectName().isEmpty())
            HandoutItem->setObjectName(QStringLiteral("HandoutItem"));
        HandoutItem->resize(370, 45);
        HandoutItem->setStyleSheet(QLatin1String("QWidget {	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton#iconButton {\n"
"	background-color: transparent;\n"
"}\n"
"\n"
"QLabel#filenameLabel {\n"
"	background-color: transparent;\n"
"	font-size: 12px;\n"
"	color: #4A4A4A;\n"
"	font-family:\"Microsoft YaHei\"; \n"
"}\n"
"\n"
"QPushButton#removeButton {\n"
"	background-color: transparent;\n"
"	font-family:\"Microsoft YaHei\";\n"
"	font-size: 12px;\n"
"	color: rgb(74,149,241);\n"
"}\n"
"\n"
"QPushButton#removeButton:hover {\n"
"	background-color: transparent;\n"
"	font-family:\"Microsoft YaHei\";\n"
"	font-size: 12px;\n"
"	color: #81BBFF;\n"
"}\n"
"\n"
"QPushButton#removeButton:pressed {\n"
"	background-color: transparent;\n"
"	font-family:\"Microsoft YaHei\";\n"
"	font-size: 12px;\n"
"	color: #3371BA;\n"
"}\n"
"\n"
""));
        gridLayout = new QGridLayout(HandoutItem);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        iconButton = new QPushButton(HandoutItem);
        iconButton->setObjectName(QStringLiteral("iconButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(iconButton->sizePolicy().hasHeightForWidth());
        iconButton->setSizePolicy(sizePolicy);
        iconButton->setMinimumSize(QSize(22, 22));
        iconButton->setMaximumSize(QSize(22, 22));
        iconButton->setIconSize(QSize(20, 20));

        gridLayout->addWidget(iconButton, 0, 0, 1, 1);

        filenameLabel = new QLabel(HandoutItem);
        filenameLabel->setObjectName(QStringLiteral("filenameLabel"));
        filenameLabel->setMinimumSize(QSize(260, 0));
        filenameLabel->setMaximumSize(QSize(260, 16777215));

        gridLayout->addWidget(filenameLabel, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(220, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        removeButton = new QPushButton(HandoutItem);
        removeButton->setObjectName(QStringLiteral("removeButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(removeButton->sizePolicy().hasHeightForWidth());
        removeButton->setSizePolicy(sizePolicy1);
        removeButton->setMaximumSize(QSize(40, 16777215));

        gridLayout->addWidget(removeButton, 0, 3, 1, 1);


        retranslateUi(HandoutItem);

        QMetaObject::connectSlotsByName(HandoutItem);
    } // setupUi

    void retranslateUi(QWidget *HandoutItem)
    {
        HandoutItem->setWindowTitle(QApplication::translate("HandoutItem", "HandoutItem", 0));
        iconButton->setText(QString());
        filenameLabel->setText(QApplication::translate("HandoutItem", "filename", 0));
        removeButton->setText(QApplication::translate("HandoutItem", "\347\247\273\351\231\244", 0));
    } // retranslateUi

};

namespace Ui {
    class HandoutItem: public Ui_HandoutItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HANDOUTITEM_H
