/********************************************************************************
** Form generated from reading UI file 'ToolBar.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOOLBAR_H
#define UI_TOOLBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ToolBarClass
{
public:
    QGridLayout *gridLayout;
    QCheckBox *laserPen;
    QCheckBox *moveCheckBox;
    QCheckBox *penCheckBox;
    QCheckBox *textCheckBox;
    QCheckBox *arrowCheckBox;
    QCheckBox *rectCheckBox;
    QCheckBox *eraseCheckBox;
    QCheckBox *clearCheckBox;
    QToolButton *retractButton;

    void setupUi(QWidget *ToolBarClass)
    {
        if (ToolBarClass->objectName().isEmpty())
            ToolBarClass->setObjectName(QStringLiteral("ToolBarClass"));
        ToolBarClass->resize(356, 42);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ToolBarClass->sizePolicy().hasHeightForWidth());
        ToolBarClass->setSizePolicy(sizePolicy);
        ToolBarClass->setMinimumSize(QSize(0, 42));
        ToolBarClass->setMaximumSize(QSize(16777215, 42));
        ToolBarClass->setStyleSheet(QLatin1String("QWidget#ToolBarClass {\n"
"	background-color:white;\n"
"	border-style: solid solid solid none;\n"
"	border-width: 1px;\n"
"	border-color: rgb(205,200,200);\n"
"}"));
        gridLayout = new QGridLayout(ToolBarClass);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        laserPen = new QCheckBox(ToolBarClass);
        laserPen->setObjectName(QStringLiteral("laserPen"));
        laserPen->setMinimumSize(QSize(42, 42));
        laserPen->setStyleSheet(QLatin1String("QCheckBox#laserPen {\n"
"    \n"
"}\n"
"\n"
"QCheckBox#laserPen::indicator {\n"
"    \n"
"}\n"
" \n"
"QCheckBox#laserPen::indicator:unchecked {\n"
"    image: url(:/ToolBar/Resources/tb_laser_pen.png);\n"
"	background-color: transparent;\n"
"}\n"
" \n"
"QCheckBox#laserPen::indicator:unchecked:disabled {\n"
"    image: url(:/ToolBar/Resources/tb_laser_pen.png);\n"
"	background-color: transparent;\n"
"}\n"
" \n"
"QCheckBox#laserPen::indicator:unchecked:hover {\n"
"    image: url(:/ToolBar/Resources/tb_laser_pen.png);\n"
"	background-color: rgb(245,240,240);\n"
"	border-style:solid;\n"
"	border-width:1px;\n"
"	border-color: rgb(192,187,187);\n"
"}\n"
" \n"
"QCheckBox#laserPen::indicator:checked {\n"
"    image: url(:/ToolBar/Resources/tb_laser_pen_selected.png);\n"
"	background-color: rgb(205,200,200);\n"
"	border-style:solid;\n"
"	border-width:1px;\n"
"	border-color: rgb(192,187,187);\n"
"}"));

        gridLayout->addWidget(laserPen, 0, 0, 1, 1);

        moveCheckBox = new QCheckBox(ToolBarClass);
        moveCheckBox->setObjectName(QStringLiteral("moveCheckBox"));
        moveCheckBox->setMinimumSize(QSize(42, 42));
        moveCheckBox->setStyleSheet(QLatin1String("QCheckBox#moveCheckBox {\n"
"    \n"
"}\n"
"\n"
"QCheckBox#moveCheckBox::indicator {\n"
"    \n"
"}\n"
" \n"
"QCheckBox#moveCheckBox::indicator:unchecked {\n"
"    image: url(:/ToolBar/Resources/tb_move.png);\n"
"}\n"
" \n"
"QCheckBox#moveCheckBox::indicator:unchecked:disabled {\n"
"    image:url(:/ToolBar/Resources/tb_move.png);\n"
"}\n"
" \n"
"QCheckBox#moveCheckBox::indicator:unchecked:hover {\n"
"    image: url(:/ToolBar/Resources/tb_move.png);\n"
"	background-color: rgb(245,240,240);\n"
"	border-style:solid;\n"
"	border-width:1px;\n"
"	border-color: rgb(192,187,187);\n"
"}\n"
" \n"
"QCheckBox#moveCheckBox::indicator:checked {\n"
"    image: url(:/ToolBar/Resources/tb_move_selected.png);\n"
"	background-color: rgb(205,200,200);\n"
"	border-style:solid;\n"
"	border-width:1px;\n"
"	border-color: rgb(192,187,187);\n"
"}"));

        gridLayout->addWidget(moveCheckBox, 0, 1, 1, 1);

        penCheckBox = new QCheckBox(ToolBarClass);
        penCheckBox->setObjectName(QStringLiteral("penCheckBox"));
        penCheckBox->setMinimumSize(QSize(42, 42));
        penCheckBox->setStyleSheet(QLatin1String("QCheckBox#penCheckBox {\n"
"    \n"
"}\n"
"\n"
"QCheckBox#penCheckBox::indicator {\n"
"    \n"
"}\n"
" \n"
"QCheckBox#penCheckBox::indicator:unchecked {\n"
"    image: url(:/ToolBar/Resources/tb_pen.png);\n"
"	background-color: transparent;\n"
"}\n"
" \n"
"QCheckBox#penCheckBox::indicator:unchecked:disabled {\n"
"    image: url(:/ToolBar/Resources/tb_pen.png);\n"
"	background-color: transparent;\n"
"}\n"
" \n"
"QCheckBox#penCheckBox::indicator:unchecked:hover {\n"
"    image: url(:/ToolBar/Resources/tb_pen.png);\n"
"	background-color: rgb(245,240,240);\n"
"	border-style:solid;\n"
"	border-width:1px;\n"
"	border-color: rgb(192,187,187);\n"
"}\n"
" \n"
"QCheckBox#penCheckBox::indicator:checked {\n"
"    image: url(:/ToolBar/Resources/tb_pen_selected.png);\n"
"	background-color: rgb(205,200,200);\n"
"	border-style:solid;\n"
"	border-width:1px;\n"
"	border-color: rgb(192,187,187);\n"
"}"));

        gridLayout->addWidget(penCheckBox, 0, 2, 1, 1);

        textCheckBox = new QCheckBox(ToolBarClass);
        textCheckBox->setObjectName(QStringLiteral("textCheckBox"));
        textCheckBox->setMinimumSize(QSize(42, 42));
        textCheckBox->setStyleSheet(QLatin1String("QCheckBox#textCheckBox {\n"
"    \n"
"}\n"
"\n"
"QCheckBox#textCheckBox::indicator {\n"
"    \n"
"}\n"
" \n"
"QCheckBox#textCheckBox::indicator:unchecked {\n"
"    image: url(:/ToolBar/Resources/tb_text.png);\n"
"	background-color: transparent;\n"
"}\n"
" \n"
"QCheckBox#textCheckBox::indicator:unchecked:disabled {\n"
"    image: url(:/ToolBar/Resources/tb_text.png);\n"
"	background-color: transparent;\n"
"}\n"
" \n"
"QCheckBox#textCheckBox::indicator:unchecked:hover {\n"
"    image: url(:/ToolBar/Resources/tb_text.png);\n"
"	background-color: rgb(245,240,240);\n"
"	border-style:solid;\n"
"	border-width:1px;\n"
"	border-color: rgb(192,187,187);\n"
"}\n"
" \n"
"QCheckBox#textCheckBox::indicator:checked {\n"
"    image: url(:/ToolBar/Resources/tb_text_selected.png);\n"
"	background-color: rgb(205,200,200);\n"
"	border-style:solid;\n"
"	border-width:1px;\n"
"	border-color: rgb(192,187,187);\n"
"}"));

        gridLayout->addWidget(textCheckBox, 0, 3, 1, 1);

        arrowCheckBox = new QCheckBox(ToolBarClass);
        arrowCheckBox->setObjectName(QStringLiteral("arrowCheckBox"));
        arrowCheckBox->setMinimumSize(QSize(42, 42));
        arrowCheckBox->setStyleSheet(QLatin1String("QCheckBox#arrowCheckBox {\n"
"    \n"
"}\n"
"\n"
"QCheckBox#arrowCheckBox::indicator {\n"
"    \n"
"}\n"
" \n"
"QCheckBox#arrowCheckBox::indicator:unchecked {\n"
"    image: url(:/ToolBar/Resources/tb_arrow.png);\n"
"	background-color: transparent;\n"
"}\n"
" \n"
"QCheckBox#arrowCheckBox::indicator:unchecked:disabled {\n"
"    image: url(:/ToolBar/Resources/tb_arrow.png);\n"
"	background-color: transparent;\n"
"}\n"
" \n"
"QCheckBox#arrowCheckBox::indicator:unchecked:hover {\n"
"    image: url(:/ToolBar/Resources/tb_arrow.png);\n"
"	background-color: rgb(245,240,240);\n"
"	border-style:solid;\n"
"	border-width:1px;\n"
"	border-color: rgb(192,187,187);\n"
"}\n"
" \n"
"QCheckBox#arrowCheckBox::indicator:checked {\n"
"    image: url(:/ToolBar/Resources/tb_arrow_selected.png);\n"
"	background-color: rgb(205,200,200);\n"
"	border-style:solid;\n"
"	border-width:1px;\n"
"	border-color: rgb(192,187,187);\n"
"}"));

        gridLayout->addWidget(arrowCheckBox, 0, 4, 1, 1);

        rectCheckBox = new QCheckBox(ToolBarClass);
        rectCheckBox->setObjectName(QStringLiteral("rectCheckBox"));
        rectCheckBox->setMinimumSize(QSize(42, 42));
        rectCheckBox->setStyleSheet(QLatin1String("QCheckBox#rectCheckBox {\n"
"    \n"
"}\n"
"\n"
"QCheckBox#rectCheckBox::indicator {\n"
"    \n"
"}\n"
" \n"
"QCheckBox#rectCheckBox::indicator:unchecked {\n"
"    image: url(:/ToolBar/Resources/tb_rect.png);\n"
"	background-color: transparent;\n"
"}\n"
" \n"
"QCheckBox#rectCheckBox::indicator:unchecked:disabled {\n"
"    image: url(:/ToolBar/Resources/tb_rect.png);\n"
"	background-color: transparent;\n"
"}\n"
" \n"
"QCheckBox#rectCheckBox::indicator:unchecked:hover {\n"
"    image: url(:/ToolBar/Resources/tb_rect.png);\n"
"	background-color: rgb(245,240,240);\n"
"	border-style:solid;\n"
"	border-width:1px;\n"
"	border-color: rgb(192,187,187);\n"
"}\n"
" \n"
"QCheckBox#rectCheckBox::indicator:checked {\n"
"    image: url(:/ToolBar/Resources/tb_rect_selected.png);\n"
"	background-color: rgb(205,200,200);\n"
"	border-style:solid;\n"
"	border-width:1px;\n"
"	border-color: rgb(192,187,187);\n"
"}"));

        gridLayout->addWidget(rectCheckBox, 0, 5, 1, 1);

        eraseCheckBox = new QCheckBox(ToolBarClass);
        eraseCheckBox->setObjectName(QStringLiteral("eraseCheckBox"));
        eraseCheckBox->setMinimumSize(QSize(42, 42));
        eraseCheckBox->setStyleSheet(QLatin1String("QCheckBox#eraseCheckBox {\n"
"    \n"
"}\n"
"\n"
"QCheckBox#eraseCheckBox::indicator {\n"
"    \n"
"}\n"
" \n"
"QCheckBox#eraseCheckBox::indicator:unchecked {\n"
"    image: url(:/ToolBar/Resources/tb_erase.png);\n"
"	background-color: transparent;\n"
"}\n"
" \n"
"QCheckBox#eraseCheckBox::indicator:unchecked:disabled {\n"
"    image: url(:/ToolBar/Resources/tb_erase.png);\n"
"	background-color: transparent;\n"
"}\n"
" \n"
"QCheckBox#eraseCheckBox::indicator:unchecked:hover {\n"
"    image: url(:/ToolBar/Resources/tb_erase.png);\n"
"	background-color: rgb(245,240,240);\n"
"	border-style:solid;\n"
"	border-width:1px;\n"
"	border-color: rgb(192,187,187);\n"
"}\n"
" \n"
"QCheckBox#eraseCheckBox::indicator:checked {\n"
"    image: url(:/ToolBar/Resources/tb_erase_selected.png);\n"
"	background-color: rgb(205,200,200);\n"
"	border-style:solid;\n"
"	border-width:1px;\n"
"	border-color: rgb(192,187,187);\n"
"}"));

        gridLayout->addWidget(eraseCheckBox, 0, 6, 1, 1);

        clearCheckBox = new QCheckBox(ToolBarClass);
        clearCheckBox->setObjectName(QStringLiteral("clearCheckBox"));
        clearCheckBox->setMinimumSize(QSize(42, 42));
        clearCheckBox->setStyleSheet(QLatin1String("QCheckBox#clearCheckBox {\n"
"    \n"
"}\n"
"\n"
"QCheckBox#clearCheckBox::indicator {\n"
"    \n"
"}\n"
" \n"
"QCheckBox#clearCheckBox::indicator:unchecked {\n"
"    image: url(:/ToolBar/Resources/tb_clear.png);\n"
"	background-color: transparent;\n"
"}\n"
" \n"
"QCheckBox#clearCheckBox::indicator:unchecked:disabled {\n"
"    image: url(:/ToolBar/Resources/tb_clear.png);\n"
"	background-color: transparent;\n"
"}\n"
" \n"
"QCheckBox#clearCheckBox::indicator:unchecked:hover {\n"
"    image: url(:/ToolBar/Resources/tb_clear.png);\n"
"	background-color: rgb(245,240,240);\n"
"	border-style:solid;\n"
"	border-width:1px;\n"
"	border-color: rgb(192,187,187);\n"
"}\n"
" \n"
"QCheckBox#clearCheckBox::indicator:checked {\n"
"    image: url(:/ToolBar/Resources/tb_clear_selected.png);\n"
"	background-color: rgb(205,200,200);\n"
"	border-style:solid;\n"
"	border-width:1px;\n"
"	border-color: rgb(192,187,187);\n"
"}"));

        gridLayout->addWidget(clearCheckBox, 0, 7, 1, 1);

        retractButton = new QToolButton(ToolBarClass);
        retractButton->setObjectName(QStringLiteral("retractButton"));
        retractButton->setMinimumSize(QSize(0, 40));
        retractButton->setStyleSheet(QLatin1String("QToolButton#retractButton {\n"
"    background-repeat: no-repeat;\n"
"    background-color: rgb(245,240,240);\n"
"	border-style: none;\n"
"	margin-right:1px;\n"
"}\n"
"\n"
"QToolButton#retractButton:hover {\n"
"    background-repeat: no-repeat;\n"
"    background-color: rgb(234,224,224);\n"
"	border-style: none;\n"
"	margin-right:1px;\n"
"}\n"
"\n"
"QToolButton#retractButton:pressed {\n"
"    background-repeat: no-repeat;\n"
"    background-color: rgb(205,200,200);\n"
"	border-style: none;\n"
"	margin-right:1px;\n"
"}"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/ToolBar/Resources/tb_retract.png"), QSize(), QIcon::Normal, QIcon::Off);
        retractButton->setIcon(icon);

        gridLayout->addWidget(retractButton, 0, 8, 1, 1);


        retranslateUi(ToolBarClass);

        QMetaObject::connectSlotsByName(ToolBarClass);
    } // setupUi

    void retranslateUi(QWidget *ToolBarClass)
    {
        ToolBarClass->setWindowTitle(QApplication::translate("ToolBarClass", "ToolBar", 0));
        laserPen->setText(QString());
        moveCheckBox->setText(QString());
        penCheckBox->setText(QString());
        textCheckBox->setText(QString());
        arrowCheckBox->setText(QString());
        rectCheckBox->setText(QString());
        eraseCheckBox->setText(QString());
        clearCheckBox->setText(QString());
        retractButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ToolBarClass: public Ui_ToolBarClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOOLBAR_H
