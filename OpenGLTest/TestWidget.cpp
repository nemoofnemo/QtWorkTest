#include "TestWidget.h"

TestWidget::TestWidget(QWidget *parent)
	: QOpenGLWidget(parent)
{
	fullscreen = false;
}

void TestWidget::initializeGL(){
	setGeometry(300, 200, 640, 480);//设置窗口初始位置和大小  
	glShadeModel(GL_FLAT);//设置阴影平滑模式  
	glClearColor(0.0, 0.0, 0.0, 0);//改变窗口的背景颜色  
	glClearDepth(1.0);//设置深度缓存  
	glEnable(GL_DEPTH_TEST);//允许深度测试  
	glDepthFunc(GL_LEQUAL);//设置深度测试类型  
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);//进行透视校正  
}

void TestWidget::paintGL(){
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();

	//renderText(10,20,"Hello,My Dear");  
	// glColor3f(1.0, 0.0, 0.0);  
	/*
	glBegin(GL_TRIANGLES);
	glVertex3f(0.0, 1.0, 0.0);
	glVertex3f(-1.0, -1.0, 0.0);
	glVertex3f(1.0, -1.0, 0.0);
	glEnd();
	*/
	glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(0.0f, 1.0f, 0.0f);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(-1.0f, -1.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3f(1.0f, -1.0f, 0.0f);
	glEnd();
	//renderText(20, 100, "Hello Jcy, My first OpenGL app.");
}

void TestWidget::resizeGL(int width, int height){
	if (0 == height)
		height = 1;//防止一条边为0  
	glViewport(0, 0, (GLint)width, (GLint)height);//重置当前视口，本身不是重置窗口的，只不过是这里被Qt给封装好了  
	glMatrixMode(GL_PROJECTION);//选择投影矩阵  
	glLoadIdentity();//重置选择好的投影矩阵  
}

void TestWidget::keyPressEvent(QKeyEvent *e){
	switch (e->key())
	{
		//F1键为全屏和普通屏显示切换键  
	case Qt::Key_F1:
		fullscreen = !fullscreen;
		if (fullscreen)
			showFullScreen();
		else
		{
			setGeometry(300, 150, 640, 480);
			showNormal();
		}
		//updateGL();
		break;
		//Ese为退出程序键  
	case Qt::Key_Escape:
		close();
	}
}