#pragma once

#include <QtWidgets/QWidget>
#include <QDialog>
#include <QMouseEvent>
#include <QFileDialog>
#include "ui_UploadHandoutDialog.h"
#include "HandoutItem.h"

class UploadHandoutDialog : public QWidget
{
    Q_OBJECT

public:
	enum FileType { INVALID_TYPE, PPT, PDF };
    UploadHandoutDialog(QWidget *parent = Q_NULLPTR);
	virtual ~UploadHandoutDialog();
	
signals:
	void deleteItemEvent(QListWidgetItem * item);

private:
    Ui::UploadHandoutDialogClass ui;
	QPoint mousePosition;
	bool isPressed;
	QPixmap pptIcon;
	QPixmap pdfIcon;
	
public slots:

	void addItem(FileType type, const QString & filename);
	void deleteItem(QListWidgetItem * item);
	void clearListWidget();
	void onItemClicked(QListWidgetItem * item);
	void resetSelectedItem();
	void showImage(const QString & path);
	void onPresentationButtonClicked();
	void onProgressBarLeftButtonClicked();
	void setProgressBarValue(int num);

	void mouseMoveEvent(QMouseEvent *event);
	void mousePressEvent(QMouseEvent *event);
	void mouseReleaseEvent(QMouseEvent *event);
	void closeEvent(QCloseEvent *event);
};
