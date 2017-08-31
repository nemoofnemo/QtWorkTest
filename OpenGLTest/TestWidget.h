#pragma once

#include <QtWidgets/QMainWindow>
#include <QOpenGLWidget>
#include <QKeyEvent>

class TestWidget : public QOpenGLWidget
{
    Q_OBJECT

private:
	bool fullscreen;

public:
    explicit TestWidget(QWidget *parent = Q_NULLPTR);

private:
	void initializeGL();
	void paintGL();
	void resizeGL(int width, int height);
	void keyPressEvent(QKeyEvent *e);
};
