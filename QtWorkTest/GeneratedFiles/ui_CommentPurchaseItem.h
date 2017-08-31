/********************************************************************************
** Form generated from reading UI file 'CommentPurchaseItem.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMENTPURCHASEITEM_H
#define UI_COMMENTPURCHASEITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CommentPurchaseItem
{
public:
    QGridLayout *gridLayout;
    QLabel *shadowTopLabel;
    QLabel *contentLabel;
    QLabel *shadowBottomLabel;

    void setupUi(QWidget *CommentPurchaseItem)
    {
        if (CommentPurchaseItem->objectName().isEmpty())
            CommentPurchaseItem->setObjectName(QStringLiteral("CommentPurchaseItem"));
        CommentPurchaseItem->resize(320, 36);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CommentPurchaseItem->sizePolicy().hasHeightForWidth());
        CommentPurchaseItem->setSizePolicy(sizePolicy);
        CommentPurchaseItem->setStyleSheet(QLatin1String("QWidget#Form {\n"
"	background-color:#ffffff;\n"
"}\n"
"\n"
"QLabel#shadowTopLabel {\n"
"	background: qlineargradient(x1: 0, y1: 1, x2: 0, y2: 0, stop: 0 rgb(218,218,218), stop: 1 white);\n"
"}\n"
"\n"
"QLabel#shadowBottomLabel{\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(218,218,218), stop: 1 white);\n"
"}\n"
"\n"
"QLabel#contentLabel {\n"
"	font-size: 13px;\n"
"	background-color: #FF9594;\n"
"	font-family: Microsoft YaHei;\n"
"	color: white;\n"
"}"));
        gridLayout = new QGridLayout(CommentPurchaseItem);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        shadowTopLabel = new QLabel(CommentPurchaseItem);
        shadowTopLabel->setObjectName(QStringLiteral("shadowTopLabel"));
        sizePolicy.setHeightForWidth(shadowTopLabel->sizePolicy().hasHeightForWidth());
        shadowTopLabel->setSizePolicy(sizePolicy);
        shadowTopLabel->setMinimumSize(QSize(0, 5));
        shadowTopLabel->setMaximumSize(QSize(16777215, 5));

        gridLayout->addWidget(shadowTopLabel, 0, 0, 1, 1);

        contentLabel = new QLabel(CommentPurchaseItem);
        contentLabel->setObjectName(QStringLiteral("contentLabel"));
        sizePolicy.setHeightForWidth(contentLabel->sizePolicy().hasHeightForWidth());
        contentLabel->setSizePolicy(sizePolicy);
        contentLabel->setMinimumSize(QSize(10, 26));
        contentLabel->setMaximumSize(QSize(16777215, 26));
        contentLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(contentLabel, 1, 0, 1, 1);

        shadowBottomLabel = new QLabel(CommentPurchaseItem);
        shadowBottomLabel->setObjectName(QStringLiteral("shadowBottomLabel"));
        sizePolicy.setHeightForWidth(shadowBottomLabel->sizePolicy().hasHeightForWidth());
        shadowBottomLabel->setSizePolicy(sizePolicy);
        shadowBottomLabel->setMinimumSize(QSize(0, 5));
        shadowBottomLabel->setMaximumSize(QSize(16777215, 5));

        gridLayout->addWidget(shadowBottomLabel, 2, 0, 1, 1);


        retranslateUi(CommentPurchaseItem);

        QMetaObject::connectSlotsByName(CommentPurchaseItem);
    } // setupUi

    void retranslateUi(QWidget *CommentPurchaseItem)
    {
        CommentPurchaseItem->setWindowTitle(QApplication::translate("CommentPurchaseItem", "Form", 0));
        shadowTopLabel->setText(QString());
        contentLabel->setText(QApplication::translate("CommentPurchaseItem", "Content\346\265\213\350\257\225", 0));
        shadowBottomLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CommentPurchaseItem: public Ui_CommentPurchaseItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMENTPURCHASEITEM_H
