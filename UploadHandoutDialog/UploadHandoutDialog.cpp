#include "UploadHandoutDialog.h"

UploadHandoutDialog::UploadHandoutDialog(QWidget *parent)
	: QWidget(parent)
{
	qDebug("UploadHandoutDialog::UploadHandoutDialog.");
	ui.setupUi(this);
	setWindowFlags(Qt::FramelessWindowHint);
	pptIcon.load(":/UploadHandoutDialog/Resources/upd_ppt.png");
	pdfIcon.load(":/UploadHandoutDialog/Resources/upd_pdf.png");
	ui.presentationButton2->hide();
	//ui.progressBarCancleButton->hide();
	connect(this, &UploadHandoutDialog::deleteItemEvent, this, &UploadHandoutDialog::deleteItem);
	connect(ui.listWidget, &QListWidget::itemClicked, this, &UploadHandoutDialog::onItemClicked);
	connect(ui.closeButton, &QPushButton::clicked, this, &UploadHandoutDialog::close);
	connect(ui.minButton, &QPushButton::clicked, this, &UploadHandoutDialog::showMinimized);
	connect(ui.presentationButton2, &QPushButton::clicked, this, &UploadHandoutDialog::onPresentationButtonClicked);

	//debug code
	addItem(PPT, "asdf");
	for (int i = 0; i < 5; ++i){
		addItem(PDF, "ffasdf");
	}
	addItem(PPT, "asdf");
	showImage("C:/Users/nemo/Pictures/Saved Pictures/b8ce878cf1f7c2f5db3da241cdbda9fe.jpg");
}

UploadHandoutDialog::~UploadHandoutDialog(){
	clearListWidget();
}

void UploadHandoutDialog::addItem(FileType type, const QString & filename){
	QListWidgetItem *listItem = new QListWidgetItem;
	ui.listWidget->insertItem(0, listItem);
	
	HandoutItem * item = new HandoutItem;
	switch (type)
	{
	case UploadHandoutDialog::INVALID_TYPE:
		break;
	case UploadHandoutDialog::PPT:
		item->setItem(pptIcon, filename, this, listItem);
		break;
	case UploadHandoutDialog::PDF:
		item->setItem(pdfIcon, filename, this, listItem);
		break;
	default:
		break;
	}
	ui.listWidget->setItemWidget(listItem, item);
	listItem->setSizeHint(QSize(ui.listWidget->rect().width() - 5, 45));
}

void UploadHandoutDialog::deleteItem(QListWidgetItem * item){
	if (item){
		delete item;
	}
	if (ui.listWidget->count() == 0){
		ui.presentationButton1->show();
		ui.presentationButton2->hide();
	}
	
	resetSelectedItem();
}

void UploadHandoutDialog::clearListWidget(){
	while (ui.listWidget->count()){
		auto temp = ui.listWidget->takeItem(0);
		if (temp){
			delete temp;
		}
	}
}

void UploadHandoutDialog::resetSelectedItem(){
	ui.listWidget->setCurrentRow(-1);
	ui.presentationButton1->show();
	ui.presentationButton2->hide();
}

void UploadHandoutDialog::onItemClicked(QListWidgetItem * item){
	ui.presentationButton1->hide();
	ui.presentationButton2->show();
}

void UploadHandoutDialog::mouseMoveEvent(QMouseEvent * event){
	QPoint pt = event->pos();
	if (isPressed && pt.y() < 450){
		QPoint a = event->globalPos();
		int x1 = a.x();
		int y1 = a.y();
		move(event->globalPos() - mousePosition);
	}
}

void UploadHandoutDialog::mousePressEvent(QMouseEvent * event){
	mousePosition = event->pos();
	isPressed = true;
}

void UploadHandoutDialog::mouseReleaseEvent(QMouseEvent * event){
	isPressed = false;
}

void UploadHandoutDialog::closeEvent(QCloseEvent *event){
	qDebug("UploadHandoutDialog::closeEvent.");
}

void UploadHandoutDialog::showImage(const QString & path){
	qDebug("UploadHandoutDialog::showImage, path:%s.", path.toUtf8().data());
	QPixmap pixmap;
	pixmap.load(path);

	if ((pixmap.height() / 2 > ui.previewLabel->height()) || (pixmap.width() / 2 > ui.previewLabel->width())){
		pixmap = pixmap.scaled(QSize(pixmap.height() / 2, pixmap.height() / 2), Qt::KeepAspectRatio);
	}

	pixmap = pixmap.scaled(
		QSize(ui.previewLabel->width(), ui.previewLabel->height()), 
		Qt::KeepAspectRatio, 
		Qt::SmoothTransformation);

	ui.previewLabel->setPixmap(pixmap);
	ui.previewLabel->setAlignment(Qt::AlignCenter);
}

void UploadHandoutDialog::onPresentationButtonClicked(){
	auto curItem = ui.listWidget->currentItem();
	if (curItem){
		auto item = (HandoutItem*)ui.listWidget->itemWidget(curItem);
		QString path = item->ui.filenameLabel->text();
		qDebug("UploadHandoutDialog::onPresentationButtonClicked, path:%s.", path.toUtf8().data());
		//emit signal
		//close();
	}
	
}

void UploadHandoutDialog::onProgressBarLeftButtonClicked(){

}