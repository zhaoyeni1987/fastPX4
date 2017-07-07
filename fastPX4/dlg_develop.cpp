#include "dlg_develop.h"

#include <QFile>
#include <QDir>
#include <QMessageBox>
#include <QTextStream>

#define REPLACE_PROJECT_FOLER			"ZZZZZZZZ"
#define REPLACE_PROJECT_NAME			"XXXXXXXX"
#define REPLACE_PROJECT_STACK_SIZE		"YYYYYYYY"

CDlgDevelop::CDlgDevelop(QString strWorkPath)
{
	setupUi(this);

	m_strWorkPath = strWorkPath;
}

void CDlgDevelop::test()
{
	QFile file(":/mainframe/templete/temp_cmakelists");
	if (!file.open(QIODevice::ReadOnly))
		return;
	
	QString temp = file.readAll();

	QString strAppName = lineEditAppName->text();
	if (strAppName.length() <= 0)
		return;

	int find = strAppName.indexOf(" ");
	if (find != -1)
	{
		QMessageBox::warning(this, "Error", "Illegal character");
		return;
	}

	temp.replace(QString(REPLACE_PROJECT_NAME), strAppName);

	QString strStackSize = lineEditStackSize->text();
	if (strStackSize.length() <= 0)
	{
		QMessageBox::warning(this, "Error", "Stack size error");
		return;
	}

	temp.replace(QString(REPLACE_PROJECT_STACK_SIZE), strStackSize);

	QString strFolder = comboBoxFolder->currentText();

	QString path = "";
	path += m_strWorkPath;
	path += "/src/";
	path += strFolder;

	QDir dir(path);
	if (!dir.exists())
	{
		QMessageBox::warning(this, "Error", "The folder not exist");
		return;
	}

	path += "/";
	path += strAppName;

	QDir dir1(path);
	if (dir1.exists())
	{
		QMessageBox::warning(this, "Error", "The app have been existed");
		return;
	}

	temp.replace(QString(REPLACE_PROJECT_FOLER), strFolder);

	dir1.cdUp();
	dir1.mkdir(strAppName);

	dir1.cd(strAppName);
	QString strCmakeFileLists = dir1.absolutePath() + "/CMakeLists.txt";
	QString strMainC = dir1.absolutePath() + "/";
	strMainC += strAppName;
	strMainC += ".c";

	QFile fileCmakeFileLists(strCmakeFileLists);
	fileCmakeFileLists.open(QIODevice::WriteOnly);

	QTextStream out(&fileCmakeFileLists);

	out << temp << endl;
	out.flush();
	fileCmakeFileLists.close();

	QFile file2(":/mainframe/templete/temp_main_c");
	if (!file2.open(QIODevice::ReadOnly))
		return;

	temp = file2.readAll();

	temp.replace(QString(REPLACE_PROJECT_NAME), strAppName);
	QFile fileMainC(strMainC);
	fileMainC.open(QIODevice::WriteOnly);

	QTextStream out2(&fileMainC);

	out2 << temp << endl;
	out2.flush();
	fileMainC.close();
}