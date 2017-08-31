#include "TestWidget.h"

TestWidget::TestWidget(QWidget *parent)
	: QOpenGLWidget(parent)
{
	fullscreen = false;
}

void TestWidget::initializeGL(){
	setGeometry(300, 200, 640, 480);//���ô��ڳ�ʼλ�úʹ�С  
	glShadeModel(GL_FLAT);//������Ӱƽ��ģʽ  
	glClearColor(0.0, 0.0, 0.0, 0);//�ı䴰�ڵı�����ɫ  
	glClearDepth(1.0);//������Ȼ���  
	glEnable(GL_DEPTH_TEST);//������Ȳ���  
	glDepthFunc(GL_LEQUAL);//������Ȳ�������  
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);//����͸��У��  
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
		height = 1;//��ֹһ����Ϊ0  
	glViewport(0, 0, (GLint)width, (GLint)height);//���õ�ǰ�ӿڣ����������ô��ڵģ�ֻ���������ﱻQt����װ����  
	glMatrixMode(GL_PROJECTION);//ѡ��ͶӰ����  
	glLoadIdentity();//����ѡ��õ�ͶӰ����  
}

void TestWidget::keyPressEvent(QKeyEvent *e){
	switch (e->key())
	{
		//F1��Ϊȫ������ͨ����ʾ�л���  
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
		//EseΪ�˳������  
	case Qt::Key_Escape:
		close();
	}
}