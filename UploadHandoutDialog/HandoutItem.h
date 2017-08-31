#pragma once
#include "ui_HandoutItem.h"
#include "UploadHandoutDialog.h"

class UploadHandoutDialog;

class HandoutItem : public QWidget {
	Q_OBJECT

public:
	enum FileType { INVALID_TYPE, PPT, PDF };
	Ui::HandoutItem ui;
	UploadHandoutDialog * context;
	QListWidgetItem * item;

	HandoutItem(QWidget * parent = nullptr);
	virtual ~HandoutItem();
	void setItem(QPixmap & icon, const QString & filename, UploadHandoutDialog * context, QListWidgetItem * item);
	void onRemoveButtonClicked();
};