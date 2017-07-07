#ifndef MAINFRAME_H
#define MAINFRAME_H

#include <QtWidgets/QMainWindow>
#include "ui_mainframe.h"

class mainframe : public QMainWindow
{
	Q_OBJECT

public:
	mainframe(QWidget *parent = 0);
	~mainframe();

private:
	Ui::mainframeClass ui;

private slots:
	void LoadWorkPath();
	void OpenFolder();
	void DoubleClickedList(QModelIndex index);
	void Develop();

private:
	QString CreateCmdLine(QString path);
	QString m_strWorkPath;
};

#endif // MAINFRAME_H
