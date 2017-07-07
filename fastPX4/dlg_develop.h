#pragma once

#include <QDialog>
#include "ui_dlg_develop.h"

class CDlgDevelop : public QDialog, public Ui::dlg_develop
{
	Q_OBJECT
public:
	CDlgDevelop(QString strWorkPath);

private slots:
	void test();

private:
	QString m_strWorkPath;
};