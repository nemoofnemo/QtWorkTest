#include "CommentDialog.h"
#include <qsize.h>
#include <QTextLayout>
#include <QTextBlock>
#include <qpixmap.h>
#include <qpainter.h>
#include <Windows.h>

//typedef void(*PropertiesUpdateCallback)(void *obj);
//typedef void(*PropertiesUpdateCallback)(void *obj,int *settings);

CommentDialog::CommentDialog(QWidget *parent)
	: QDialog(parent)
{
	//initialize ui
	ui.setupUi(this);
	setWindowFlags(Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);
	setSizeGripEnabled(true);
	ui.line_2->hide();
	ui.expressionButton->hide();
	ui.sendButton->hide();
	ui.textEdit->hide();
	
	//debug
	debugShow();
}

CommentDialog::~CommentDialog(){

}

void CommentDialog::mouseMoveEvent(QMouseEvent * event)
{
	QPoint pt = event->pos();
	if (isPressed && pt.y() < 120)
	{
		QPoint a = event->globalPos();
		int x1 = a.x();
		int y1 = a.y();
		qDebug("pos %d %d %d %d", x1,y1,mousePosition.x(),mousePosition.y());
		move(event->globalPos() - mousePosition);
	}
}

void CommentDialog::mousePressEvent(QMouseEvent * event)
{
	mousePosition = event->pos();
	isPressed = true;
}

void CommentDialog::mouseReleaseEvent(QMouseEvent * event)
{
	isPressed = false;
}

void CommentDialog::paintEvent(QPaintEvent * e){
	QPainter painter(this);
	//paint border
	painter.fillRect(QRect(0,0,2, rect().height()),QColor(229,229,229));
	//painter.fillRect(QRect(0, ui.listWidget->pos().y() - 4, rect().width(), 2), QColor(229, 229, 229));
}

QImage getRoundQImage(QImage & src, QImage & mask, QSize size)
{
	QImage resultImage(size, QImage::Format_ARGB32_Premultiplied);
	src = src.scaled(size);
	QPainter painter(&resultImage);
	painter.setCompositionMode(QPainter::CompositionMode_Source);
	painter.fillRect(resultImage.rect(), Qt::transparent);
	painter.setCompositionMode(QPainter::CompositionMode_SourceOver);
	painter.drawImage(0, 0, mask);
	painter.setCompositionMode(QPainter::CompositionMode_SourceOut);
	painter.drawImage(0, 0, src);
	painter.setCompositionMode(QPainter::CompositionMode_DestinationOver);
	painter.end();
	return resultImage;
}

void getRoundQPixmap(QPixmap & src, QPixmap & mask, QSize size)
{
	QImage resultImage(size, QImage::Format_ARGB32_Premultiplied);
	QPainter painter(&resultImage);
	painter.setCompositionMode(QPainter::CompositionMode_Source);
	painter.fillRect(resultImage.rect(), Qt::transparent);
	painter.setCompositionMode(QPainter::CompositionMode_SourceOver);
	painter.drawPixmap(0, 0, mask);
	painter.setCompositionMode(QPainter::CompositionMode_SourceOut);
	painter.drawPixmap(0, 0, src.scaled(size));
	//painter.setCompositionMode(QPainter::CompositionMode_DestinationOver);
	//painter.end();
	src = QPixmap::fromImage(resultImage);
}

void CommentDialog::debugShow()
{
	ui.listWidget->setFocusPolicy(Qt::FocusPolicy::NoFocus);
	//first
	QListWidgetItem *item = new QListWidgetItem;
	ui.listWidget->addItem(item);
	CommentListItem * temp = new CommentListItem(ui.listWidget);
	
	QPixmap src;
	src.load("Resources/test.png");
	QPixmap mask;
	mask.load(R"(C:\Users\nemo\Documents\Visual Studio 2013\Projects\QtWorkTest\QtWorkTest\Resources\mask1.png)");
	mask = mask.scaled(QSize(28,28));
	getRoundQPixmap(src, mask, QSize(28, 28));
	temp->ui.picLabel->setPixmap(src);
	temp->ui.textEdit->setText(QString::fromLocal8Bit("kkkkkksssssscsssssssA我们ssssggggggggggsddggDADADADADgggggggggggssssssssssssssssssffffffffffffffsssssssssssssssssssssssssgggg"));
	QFont font("Microsoft Yahei", 10);
	QFontMetrics fm(font);
	int h1 = fm.height();
	int w = fm.width(temp->ui.textEdit->toPlainText());
	int line = w / (width() - 55) + (w % (width() - 55) == 0 ? 0:1);
	int target = 52 + h1 * line;
	ui.listWidget->setItemWidget(item, temp);
	item->setSizeHint(QSize(ui.listWidget->rect().width(), target));
	

	//second
	//item = new QListWidgetItem;
	//ui.listWidget->addItem(item);
	//temp = new CommentListItem(ui.listWidget);
	////temp->ui.contentLabel->setText("kkkkkksssssssssssssssssgggggggggggggggghhhhhhhhhh ");
	//temp->ui.typeLabel->hide();
	//temp->ui.nameLabel->setText(temp->ui.nameLabel->text());
	//temp->ui.picLabel->setPixmap(src);
	//temp->ui.textEdit->setText(QString::fromLocal8Bit("我们我们sssgggs;我们坐在高高的阿斯蒂芬阿斯蒂芬我们ddgggggg；gggggg我们gssssssssss我们ssgggg"));
	////temp->ui.nameLabel->rect().setX(temp->ui.textEdit->rect().x());
	//int targetWidth = fm.width(temp->ui.textEdit->toPlainText());
	//int fontHeight = fm.height();
	//int lineCount = targetWidth / (width() - 55) + (targetWidth % (width() - 55) == 0 ? 0 : 1);
	//int targetHeight = 52 + fontHeight * lineCount;
	//ui.listWidget->setItemWidget(item, temp);
	////temp->show();
	//item->setSizeHint(QSize(10, targetHeight));
	//int sss = ui.listWidget->rect().width();

	//item = new QListWidgetItem;
	//ui.listWidget->addItem(item);
	//CommentPurchaseItem1 * temp1 = new CommentPurchaseItem1;
	//temp1->ui.contentLabel->setText("uihwqufhshiajhfds");
	//ui.listWidget->setItemWidget(item, temp1);
	//item->setSizeHint(QSize(10, 36)); //fixed width

	//item = new QListWidgetItem;
	//ui.listWidget->addItem(item);
	//temp1 = new CommentPurchaseItem1;
	//temp1->ui.contentLabel->setText("uihwqufhshiajhfds");
	//ui.listWidget->setItemWidget(item, temp1);
	//item->setSizeHint(QSize(10, 36)); //fixed width

	ui.listWidget->removeItemWidget(item);
	//delete item;
	/*auto kk = ui.listWidget->takeItem(0);
	auto kk2 = ui.listWidget->itemWidget(kk);
	delete kk2;
	delete kk;*/
	
	//ui.listWidget->clear();
	
	
}