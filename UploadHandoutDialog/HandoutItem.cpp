#include "HandoutItem.h"

HandoutItem::HandoutItem(QWidget * parent) : QWidget(parent){
	ui.setupUi(this);
	context = nullptr;
	item = nullptr;
	connect(ui.removeButton, &QPushButton::clicked, this, &HandoutItem::onRemoveButtonClicked);
}

HandoutItem::~HandoutItem(){
	qDebug("HandoutItem destructor.");
}

void HandoutItem::setItem( QPixmap & icon, const QString & filename, UploadHandoutDialog * context, QListWidgetItem * item){
	this->item = item;
	this->context = context;
	ui.filenameLabel->setText(filename);
	ui.iconButton->setIcon(QIcon(icon));
	ui.iconButton->setIconSize(QSize(20,20));	
}

void HandoutItem::onRemoveButtonClicked(){
	emit context->deleteItemEvent(this->item);
}