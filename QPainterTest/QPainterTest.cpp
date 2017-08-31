#include "QPainterTest.h"

QPainterTest::QPainterTest(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton,&QPushButton::clicked, this, &QPainterTest::onButtonClicked);
}

void QPainterTest::paintEvent(QPaintEvent * e){
	QPainter painter(this);
	auto it = rectList.begin();
	auto end = rectList.end();
	while (it != end){
		painter.fillRect(QRect(it->x,it->y,it->len,it->len),QColor(45,45,48));
		it++;
	}
}

void QPainterTest::initRectList(int maxLevel, int firstLength, int sectionCount, int posX, int posY){
	list<RectNode> stack;
	stack.push_back({ posX, posY, firstLength });
	int curLen = 0;
	int tarLen = 0;
	unsigned long long cnt = 0;
	unsigned long long maxCnt = (cusPow(4, maxLevel) - 1) / 3;

	while (cnt < maxCnt){
		RectNode temp = stack.front();
		rectList.push_back(temp);
		stack.pop_front();
		curLen = temp.len;
		tarLen = curLen / sectionCount;
		stack.push_back({temp.x + tarLen, temp.y - tarLen, tarLen});
		stack.push_back({temp.x + curLen, temp.y + tarLen, tarLen});
		stack.push_back({temp.x + tarLen, temp.y + curLen, tarLen});
		stack.push_back({temp.x - tarLen, temp.y + tarLen, tarLen});
		cnt++;
	}
	return;
}

unsigned long long QPainterTest::cusPow(unsigned int arg, unsigned int pow){
	unsigned long long ret = 1;
	for (int i = 0; i < pow; ++i){
		ret *= arg;
	}
	return ret;
}

void QPainterTest::writeImage(){
	QImage image(12000, 12000, QImage::Format_RGB32);
	QPainter painter(&image);
	painter.setCompositionMode(QPainter::CompositionMode_Source);
	painter.fillRect(image.rect(), Qt::GlobalColor::white);
	auto it = rectList.begin();
	auto end = rectList.end();
	while (it != end){
		painter.fillRect(QRect(it->x, it->y, it->len, it->len), QColor(45, 45, 48));
		it++;
	}
	image.save("C:/Users/nemo/Desktop/test.png");
}

void QPainterTest::onButtonClicked(){
	initRectList(9, 1000, 3, 4500, 4500);
	writeImage();
}