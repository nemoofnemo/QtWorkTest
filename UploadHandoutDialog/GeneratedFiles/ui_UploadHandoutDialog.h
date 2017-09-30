/********************************************************************************
** Form generated from reading UI file 'UploadHandoutDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPLOADHANDOUTDIALOG_H
#define UI_UPLOADHANDOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UploadHandoutDialogClass
{
public:
    QGridLayout *gridLayout_2;
    QWidget *tittleWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *iconButton;
    QLabel *tittleLabel;
    QSpacerItem *horizontalSpacer;
    QPushButton *minButton;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *closeButton;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *listLabel;
    QListWidget *listWidget;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget_2;
    QProgressBar *progressBar;
    QPushButton *progressBarLeftButton;
    QPushButton *progressBarMiddleButton;
    QPushButton *progressBarRightButton;
    QPushButton *progressBarCancleButton;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout;
    QWidget *previewWidget;
    QPushButton *prevButton;
    QPushButton *nextButton;
    QLabel *previewLabel;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *pageLabel;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *presentationButton2;
    QPushButton *presentationButton1;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *UploadHandoutDialogClass)
    {
        if (UploadHandoutDialogClass->objectName().isEmpty())
            UploadHandoutDialogClass->setObjectName(QStringLiteral("UploadHandoutDialogClass"));
        UploadHandoutDialogClass->resize(800, 450);
        UploadHandoutDialogClass->setStyleSheet(QLatin1String("QWidget{	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton#iconButton {\n"
"	background-color: transparent;  \n"
"}\n"
"\n"
"QWidget#tittleWidget{	\n"
"	background-color: #FA5D5C;\n"
"}\n"
"\n"
"QLabel#tittleLabel {\n"
"	padding-left: 4px;\n"
"	margin-bottom: 2px;\n"
"	color: #ffffff;\n"
"	font-size: 14px;\n"
"	font-family:\"Microsoft YaHei\"; \n"
"	background: #FA5D5C;\n"
"}\n"
"\n"
"QPushButton#iconButton {  \n"
"	background-image: url(:/UploadHandoutDialog/Resources/upd_icon.png);\n"
"	background-repeat: no-repeat;\n"
"    background-color: transparent;  \n"
"	background-position: center;\n"
"}\n"
"\n"
"QPushButton#minButton {    \n"
"	background-image: url(:/UploadHandoutDialog/Resources/upd_min_normal.png);\n"
"    background-repeat: no-repeat;\n"
"    background-color: transparent;\n"
"    background-position:center;\n"
"}\n"
"\n"
"QPushButton#minButton:hover {   \n"
"	background-image: url(:/UploadHandoutDialog/Resources/upd_mini_hover.png);\n"
"    background-repeat: no-repeat;\n"
""
                        "    background-color: transparent;\n"
"    background-position:center;\n"
"}\n"
"\n"
"QPushButton#closeButton {    \n"
"	background-image: url(:/UploadHandoutDialog/Resources/upd_close_normal.png);\n"
"    background-repeat: no-repeat;\n"
"    background-color: transparent;\n"
"    background-position:center;\n"
"}\n"
"\n"
"QPushButton#closeButton:hover {   \n"
"	background-image: url(:/UploadHandoutDialog/Resources/upd_close_hover.png);\n"
"    background-repeat: no-repeat;\n"
"    background-color: transparent;\n"
"    background-position:center;\n"
"}\n"
"\n"
"QLabel#listLabel {\n"
"	border: 1px solid #EAEAEA;\n"
"	padding-left: 5px;\n"
"	padding-bottom: 2px;\n"
"	font-size: 14px;\n"
"	color: #4A4A4A;\n"
"	font-family:\"Microsoft YaHei\"; \n"
"}\n"
"\n"
"QListWidget#listWidget {\n"
"	border-style: none solid solid solid;\n"
"	border-width:1px;\n"
"	border-color: #EAEAEA;\n"
"	outline:0px;\n"
"}\n"
"QListView#listWidget::item:selected {\n"
"	border-width: 0px ;\n"
"	background: #e6d6d6;\n"
"}\n"
"QListView#l"
                        "istWidget::item:selected:!active {\n"
"	border-style: solid none solid none;\n"
"	border-width: 1px;\n"
"	border-color: #EAEAEA;\n"
"}\n"
"QListView#listWidget::item:selected:active {\n"
"	border-style: solid none solid none;\n"
"	border-width: 1px;\n"
"	border-color: #EAEAEA;\n"
"	background-color: #e6d6d6;\n"
"}\n"
"QListView#listWidget::item:hover{\n"
"	border-style: solid none solid none;\n"
"	border-width: 1px;\n"
"	border-color: #EAEAEA;\n"
"	background: #f4ecec;\n"
"}\n"
"\n"
"QScrollBar{\n"
"    width:8px;\n"
"    border-radius:2px;\n"
"}\n"
"QScrollBar::handle{\n"
"	background:lightgray; \n"
"	border-radius:2px;\n"
"}\n"
"QScrollBar::handle:hover{\n"
"	background:gray;\n"
"	border-radius:2px;\n"
"}\n"
"QScrollBar::handle:pressed{\n"
"    background:rgb(83,82,82);\n"
"	border-radius:2px;\n"
"}\n"
"\n"
"QWidget#previewWidget {\n"
"	border: 1px solid #EAEAEA;\n"
"	background-color: #EAEAEA;\n"
"}\n"
"\n"
"QLabel#previewLabel {\n"
"	background-color: transparent;\n"
"}\n"
"\n"
"QPushButton#prevButton{\n"
""
                        "	background-color: transparent;\n"
"}\n"
"\n"
"QPushButton#nextButton{\n"
"	background-color: transparent;\n"
"}\n"
"\n"
"QPushButton#presentationButton1{\n"
"	background-image: url(:/UploadHandoutDialog/Resources/upd_presentation_disable.png);\n"
"    background-color: transparent;\n"
"	background-repeat: no-repeat;\n"
"    background-position:center;\n"
"}\n"
"\n"
"QPushButton#presentationButton2{\n"
"	background-image: url(:/UploadHandoutDialog/Resources/upd_presentation_normal.png);\n"
"    background-color: transparent;\n"
"	background-repeat: no-repeat;\n"
"    background-position:center;\n"
"}\n"
"\n"
"QPushButton#presentationButton2:hover{\n"
"	background-image: url(:/UploadHandoutDialog/Resources/upd_presentation_hover.png);\n"
"    background-color: transparent;\n"
"	background-repeat: no-repeat;\n"
"    background-position:center;\n"
"}\n"
"\n"
"QPushButton#presentationButton2:pressed{\n"
"	background-image: url(:/UploadHandoutDialog/Resources/upd_presentation_clicked.png);\n"
"    background-color:"
                        " transparent;\n"
"	background-repeat: no-repeat;\n"
"    background-position:center;\n"
"}\n"
"\n"
"QLabel#pageLabel {\n"
"	font-family:\"Microsoft YaHei\"; \n"
"	font-size: 14px;\n"
"	color: #4A4A4A;\n"
"}\n"
"\n"
"QProgressBar {\n"
"	background: rgb(230,230,230);\n"
"	text-align: top;\n"
"	border-radius: 2px;\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"	background: rgb(222,200,200);\n"
"	border-radius: 2px;\n"
"}\n"
"\n"
"QPushButton#progressBarLeftButton {\n"
"	text-align:left;\n"
"	background-color: transparent;\n"
"	font-size: 14px;\n"
"	font-family:\"Microsoft YaHei\";\n"
"	color: #FA5D5C;\n"
"}\n"
"\n"
"QPushButton#progressBarLeftButton:hover {\n"
"	text-align:left;\n"
"	background-color: transparent;\n"
"	font-size: 14px;\n"
"	font-family:\"Microsoft YaHei\";\n"
"	color: rgb(255,2,0);\n"
"}\n"
"\n"
"QPushButton#progressBarLeftButton:pressed {\n"
"	text-align:left;\n"
"	background-color: transparent;\n"
"	font-size: 14px;\n"
"	font-family:\"Microsoft YaHei\";\n"
"	color: rgb(201,32,32);\n"
"}\n"
"\n"
"QPus"
                        "hButton#progressBarMiddleButton {\n"
"	background-color: transparent;\n"
"	font-family:\"Microsoft YaHei\";\n"
"	font-size: 12px;\n"
"	color: rgb(74,149,241);\n"
"}\n"
"\n"
"QPushButton#progressBarRightButton {\n"
"	background-color: transparent;\n"
"	font-family:\"Microsoft YaHei\";\n"
"	font-size: 12px;\n"
"	color: rgb(168,168,168);\n"
"}\n"
"\n"
"QPushButton#progressBarCancleButton {\n"
"	background-color: transparent;\n"
"	font-family:\"Microsoft YaHei\";\n"
"	font-size: 12px;\n"
"	color: rgb(74,149,241);\n"
"}\n"
"\n"
"QPushButton#progressBarCancleButton:hover {\n"
"	background-color: transparent;\n"
"	font-family:\"Microsoft YaHei\";\n"
"	color: #81BBFF;\n"
"}\n"
"\n"
"QPushButton#progressBarCancleButton:pressed {\n"
"	background-color: transparent;\n"
"	font-family:\"Microsoft YaHei\";\n"
"	font-size: 12px;\n"
"	color: rgb(78,132,195);\n"
"}\n"
"\n"
""));
        gridLayout_2 = new QGridLayout(UploadHandoutDialogClass);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        tittleWidget = new QWidget(UploadHandoutDialogClass);
        tittleWidget->setObjectName(QStringLiteral("tittleWidget"));
        horizontalLayout = new QHBoxLayout(tittleWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(10, 0, 10, 0);
        iconButton = new QPushButton(tittleWidget);
        iconButton->setObjectName(QStringLiteral("iconButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(iconButton->sizePolicy().hasHeightForWidth());
        iconButton->setSizePolicy(sizePolicy);
        iconButton->setMinimumSize(QSize(21, 21));
        iconButton->setMaximumSize(QSize(21, 21));
        iconButton->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(iconButton);

        tittleLabel = new QLabel(tittleWidget);
        tittleLabel->setObjectName(QStringLiteral("tittleLabel"));
        tittleLabel->setMinimumSize(QSize(0, 30));
        tittleLabel->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(tittleLabel);

        horizontalSpacer = new QSpacerItem(661, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        minButton = new QPushButton(tittleWidget);
        minButton->setObjectName(QStringLiteral("minButton"));
        sizePolicy.setHeightForWidth(minButton->sizePolicy().hasHeightForWidth());
        minButton->setSizePolicy(sizePolicy);
        minButton->setMinimumSize(QSize(20, 20));
        minButton->setMaximumSize(QSize(20, 20));

        horizontalLayout->addWidget(minButton);

        horizontalSpacer_5 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        closeButton = new QPushButton(tittleWidget);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        sizePolicy.setHeightForWidth(closeButton->sizePolicy().hasHeightForWidth());
        closeButton->setSizePolicy(sizePolicy);
        closeButton->setMinimumSize(QSize(20, 20));
        closeButton->setMaximumSize(QSize(20, 20));

        horizontalLayout->addWidget(closeButton);


        gridLayout_2->addWidget(tittleWidget, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer = new QSpacerItem(108, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        listLabel = new QLabel(UploadHandoutDialogClass);
        listLabel->setObjectName(QStringLiteral("listLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(listLabel->sizePolicy().hasHeightForWidth());
        listLabel->setSizePolicy(sizePolicy1);
        listLabel->setMinimumSize(QSize(0, 30));
        listLabel->setMaximumSize(QSize(16777215, 30));

        verticalLayout_2->addWidget(listLabel);

        listWidget = new QListWidget(UploadHandoutDialogClass);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setMinimumSize(QSize(370, 295));
        listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout_2->addWidget(listWidget);

        verticalSpacer_3 = new QSpacerItem(367, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_3);

        widget_2 = new QWidget(UploadHandoutDialogClass);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        widget_2->setMinimumSize(QSize(370, 35));
        widget_2->setMaximumSize(QSize(370, 35));
        progressBar = new QProgressBar(widget_2);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(0, 0, 370, 35));
        sizePolicy.setHeightForWidth(progressBar->sizePolicy().hasHeightForWidth());
        progressBar->setSizePolicy(sizePolicy);
        progressBar->setMinimumSize(QSize(370, 35));
        progressBar->setMaximumSize(QSize(370, 35));
        progressBar->setValue(50);
        progressBar->setTextVisible(false);
        progressBarLeftButton = new QPushButton(widget_2);
        progressBarLeftButton->setObjectName(QStringLiteral("progressBarLeftButton"));
        progressBarLeftButton->setEnabled(true);
        progressBarLeftButton->setGeometry(QRect(10, 5, 71, 23));
        progressBarMiddleButton = new QPushButton(widget_2);
        progressBarMiddleButton->setObjectName(QStringLiteral("progressBarMiddleButton"));
        progressBarMiddleButton->setGeometry(QRect(160, 7, 54, 23));
        progressBarRightButton = new QPushButton(widget_2);
        progressBarRightButton->setObjectName(QStringLiteral("progressBarRightButton"));
        progressBarRightButton->setGeometry(QRect(224, 7, 131, 23));
        progressBarCancleButton = new QPushButton(widget_2);
        progressBarCancleButton->setObjectName(QStringLiteral("progressBarCancleButton"));
        progressBarCancleButton->setGeometry(QRect(318, 8, 48, 23));
        progressBar->raise();
        progressBarMiddleButton->raise();
        progressBarRightButton->raise();
        progressBarCancleButton->raise();
        progressBarLeftButton->raise();

        verticalLayout_2->addWidget(widget_2);


        horizontalLayout_2->addLayout(verticalLayout_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        previewWidget = new QWidget(UploadHandoutDialogClass);
        previewWidget->setObjectName(QStringLiteral("previewWidget"));
        sizePolicy.setHeightForWidth(previewWidget->sizePolicy().hasHeightForWidth());
        previewWidget->setSizePolicy(sizePolicy);
        previewWidget->setMinimumSize(QSize(370, 325));
        prevButton = new QPushButton(previewWidget);
        prevButton->setObjectName(QStringLiteral("prevButton"));
        prevButton->setEnabled(true);
        prevButton->setGeometry(QRect(10, 140, 45, 45));
        sizePolicy.setHeightForWidth(prevButton->sizePolicy().hasHeightForWidth());
        prevButton->setSizePolicy(sizePolicy);
        prevButton->setMinimumSize(QSize(45, 45));
        prevButton->setMaximumSize(QSize(45, 45));
        QIcon icon;
        icon.addFile(QStringLiteral(":/UploadHandoutDialog/Resources/upd_prev.png"), QSize(), QIcon::Normal, QIcon::Off);
        prevButton->setIcon(icon);
        prevButton->setIconSize(QSize(45, 45));
        nextButton = new QPushButton(previewWidget);
        nextButton->setObjectName(QStringLiteral("nextButton"));
        nextButton->setEnabled(true);
        nextButton->setGeometry(QRect(316, 140, 45, 45));
        sizePolicy.setHeightForWidth(nextButton->sizePolicy().hasHeightForWidth());
        nextButton->setSizePolicy(sizePolicy);
        nextButton->setMinimumSize(QSize(45, 45));
        nextButton->setMaximumSize(QSize(45, 45));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/UploadHandoutDialog/Resources/upd_next.png"), QSize(), QIcon::Normal, QIcon::Off);
        nextButton->setIcon(icon1);
        nextButton->setIconSize(QSize(45, 45));
        previewLabel = new QLabel(previewWidget);
        previewLabel->setObjectName(QStringLiteral("previewLabel"));
        previewLabel->setGeometry(QRect(1, 30, 368, 255));
        sizePolicy.setHeightForWidth(previewLabel->sizePolicy().hasHeightForWidth());
        previewLabel->setSizePolicy(sizePolicy);
        previewLabel->setMinimumSize(QSize(368, 255));
        previewLabel->setMaximumSize(QSize(368, 255));
        previewLabel->setScaledContents(false);
        previewLabel->raise();
        nextButton->raise();
        prevButton->raise();

        verticalLayout->addWidget(previewWidget);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pageLabel = new QLabel(UploadHandoutDialogClass);
        pageLabel->setObjectName(QStringLiteral("pageLabel"));

        horizontalLayout_3->addWidget(pageLabel);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        presentationButton2 = new QPushButton(UploadHandoutDialogClass);
        presentationButton2->setObjectName(QStringLiteral("presentationButton2"));
        presentationButton2->setEnabled(true);
        presentationButton2->setMinimumSize(QSize(141, 35));
        presentationButton2->setMaximumSize(QSize(141, 35));

        horizontalLayout_3->addWidget(presentationButton2);

        presentationButton1 = new QPushButton(UploadHandoutDialogClass);
        presentationButton1->setObjectName(QStringLiteral("presentationButton1"));
        sizePolicy.setHeightForWidth(presentationButton1->sizePolicy().hasHeightForWidth());
        presentationButton1->setSizePolicy(sizePolicy);
        presentationButton1->setMinimumSize(QSize(141, 35));
        presentationButton1->setMaximumSize(QSize(141, 35));
        presentationButton1->setIconSize(QSize(110, 35));

        horizontalLayout_3->addWidget(presentationButton1);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_2->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout_2, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 2, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 2, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);


        retranslateUi(UploadHandoutDialogClass);

        QMetaObject::connectSlotsByName(UploadHandoutDialogClass);
    } // setupUi

    void retranslateUi(QWidget *UploadHandoutDialogClass)
    {
        UploadHandoutDialogClass->setWindowTitle(QApplication::translate("UploadHandoutDialogClass", "UploadHandoutDialog", 0));
        iconButton->setText(QString());
        tittleLabel->setText(QApplication::translate("UploadHandoutDialogClass", "\344\270\212\344\274\240\350\257\276\344\273\266", 0));
        minButton->setText(QString());
        closeButton->setText(QString());
        listLabel->setText(QApplication::translate("UploadHandoutDialogClass", "\350\277\230\346\234\252\346\267\273\345\212\240\350\277\207\350\257\276\344\273\266", 0));
        progressBarLeftButton->setText(QApplication::translate("UploadHandoutDialogClass", "\344\270\212\344\274\240\350\257\276\344\273\266", 0));
        progressBarMiddleButton->setText(QApplication::translate("UploadHandoutDialogClass", "45%", 0));
        progressBarRightButton->setText(QApplication::translate("UploadHandoutDialogClass", "\350\257\276\344\273\266\345\217\257\344\270\272PPT\346\210\226PDF\346\240\274\345\274\217", 0));
        progressBarCancleButton->setText(QApplication::translate("UploadHandoutDialogClass", "\345\217\226\346\266\210", 0));
        prevButton->setText(QString());
        nextButton->setText(QString());
        previewLabel->setText(QString());
        pageLabel->setText(QApplication::translate("UploadHandoutDialogClass", "pages", 0));
        presentationButton2->setText(QString());
        presentationButton1->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class UploadHandoutDialogClass: public Ui_UploadHandoutDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPLOADHANDOUTDIALOG_H
