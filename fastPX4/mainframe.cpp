#include "mainframe.h"
#include <QFileDialog>
#include <QProcess>
#include <QDesktopServices>
#include <QDir>
#include <QProcess>
#include <QTextStream>

#include "dlg_develop.h"

#define PATH_RCS_FOLDER					"/ROMFS/px4fmu_common/init.d"	

#define PATH_MIXERS_FOLDER				"/ROMFS/px4fmu_common/mixers"

#define PATH_CMAKE_FOLDER				"/cmake/configs"

#define PATH_NUTTX_STM32_SUPPORT		"/NuttX/nuttx/arch/arm/src/stm32"

#define PATH_NUTTX_DEF_FOLDER_PX4V1		"/nuttx-configs/px4fmu-v1/nsh"
#define PATH_NUTTX_DEF_FOLDER_PX4V2		"/nuttx-configs/px4fmu-v2/nsh"
#define PATH_NUTTX_DEF_FOLDER_PX4V3		"/nuttx-configs/px4fmu-v3/nsh"
#define PATH_NUTTX_DEF_FOLDER_PX4V4		"/nuttx-configs/px4fmu-v4/nsh"

#define PATH_SRC_MODULES_FOLDER			"/src/modules"
#define PATH_SRC_EXAMPLES_FOLDER		"/src/examples"
#define PATH_SRC_SYSTEMCMDS_FOLDER		"/src/systemcmds"
#define PATH_SRC_DRIVERS_FOLDER			"/src/drivers"

#define PATH_SRC_DRIVERS_BOARDS_SUPPORT_FOLDER	"/src/drivers/boards"

#define PATH_UORB_MESSAGE_FOLDER				"/msg"

#define PATH_MAVLINK_STANDARD_MSG_DEF_FOLDER	"/mavlink/include/mavlink/v1.0/message_definitions"
#define PATH_MAVLINK_MSG_GENERATE				"/mavlink/include/mavlink/v1.0/common"

#define PATH_CMAKE								"/cmake"

mainframe::mainframe(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	QFile file("init");
	if (!file.open(QIODevice::ReadOnly))
	{
		m_strWorkPath = "";
		
		return;
	}
	
	//setWindowIcon(QIcon(":/mainframe/images/px4logo.png"));
	setIconSize(QSize(50, 50));

	QString temp = file.readAll();
	QTextStream in1(&temp);
	QString workpath = in1.readLine();
	file.close();

	m_strWorkPath = workpath;
	ui.comboBoxPX4Version->setCurrentIndex(1);
	ui.lineEditPath->setText(m_strWorkPath);
}

mainframe::~mainframe()
{
	QFile file("init");
	if (!file.open(QIODevice::WriteOnly))
	{
		return;
	}

	QTextStream out(&file);

	out << m_strWorkPath << endl;
	out.flush();
	file.close();
}

void mainframe::LoadWorkPath()
{
	QString path = QFileDialog::getExistingDirectory(this);
	if (path.length() <= 0)
		return;

	m_strWorkPath = path;

	ui.lineEditPath->setText(m_strWorkPath);
}

void mainframe::OpenFolder()
{
	QModelIndex index = ui.listWidgetItem->currentIndex();
	
	QString strItemText = index.data().toString();
	if (strItemText.length() <= 0)
		return;

	if (m_strWorkPath.length() <= 0)
		return;

	QString temp = "file:///";
	temp += m_strWorkPath;

	if (strItemText == "rcS")
	{
		temp += PATH_RCS_FOLDER;
	}
	else if (strItemText == "px4_cmake")
	{
		temp += PATH_CMAKE_FOLDER;
	}
	else if (strItemText == "px4_base_cmake_config")
	{
		temp += PATH_CMAKE;
		temp += "/common";
	}
	else if ((strItemText == "nuttx_stm32_support") 
			||(strItemText == "nuttx_stm32_start")
			||(strItemText == "nuttx_stm32_serial_init"))
	{
		temp += PATH_NUTTX_STM32_SUPPORT;
	}
	else if (strItemText == "mixers")
	{
		temp += PATH_MIXERS_FOLDER;
	}
	else if ((strItemText == "uorb_message")
			||(strItemText == "uorb_makefile"))
	{
		temp += PATH_UORB_MESSAGE_FOLDER;
	}
	else if (strItemText == "mavlink_msg_define")
	{
		temp += PATH_MAVLINK_STANDARD_MSG_DEF_FOLDER;
	}
	else if (strItemText == "mavlink_msg_generate")
	{
		temp += PATH_MAVLINK_MSG_GENERATE;
	}
	else if ((strItemText == "mavlink_msg_send_realization")
			||(strItemText == "mavlink_msg_send_config")
			||(strItemText == "mavlink_msg_receive_def")
			||(strItemText == "mavlink_msg_receive_realization"))
	{
		temp += PATH_SRC_MODULES_FOLDER;
		temp += "/mavlink";
	}
	else if (strItemText == "src_drivers_boards_support")
	{
		temp += PATH_SRC_DRIVERS_BOARDS_SUPPORT_FOLDER;
		if (ui.comboBoxPX4Version->currentText() == "px4fmu-v1")
		{
			temp += "/px4fmu-v1";
		}
		else if (ui.comboBoxPX4Version->currentText() == "px4fmu-v2")
		{
			temp += "/px4fmu-v2";
		}
		else if (ui.comboBoxPX4Version->currentText() == "px4fmu-v3")
		{
			temp += "/px4fmu-v3";
		}
		else if (ui.comboBoxPX4Version->currentText() == "px4fmu-v4")
		{
			temp += "/px4fmu-v4";
		}
	}
	else if (strItemText == "nuttx_define")
	{
		if (ui.comboBoxPX4Version->currentText() == "px4fmu-v1")
		{
			temp += PATH_NUTTX_DEF_FOLDER_PX4V1;
		}
		else if (ui.comboBoxPX4Version->currentText() == "px4fmu-v2")
		{
			temp += PATH_NUTTX_DEF_FOLDER_PX4V2;
		}
		else if (ui.comboBoxPX4Version->currentText() == "px4fmu-v3")
		{
			temp += PATH_NUTTX_DEF_FOLDER_PX4V3;
		}
		else if (ui.comboBoxPX4Version->currentText() == "px4fmu-v4")
		{
			temp += PATH_NUTTX_DEF_FOLDER_PX4V4;
		}
	}
	else if(strItemText == "src_modules")
	{
		temp += PATH_SRC_MODULES_FOLDER;
	}
	else if (strItemText == "src_examples")
	{
		temp += PATH_SRC_EXAMPLES_FOLDER;
	}
	else if (strItemText == "src_systemcmds")
	{
		temp += PATH_SRC_SYSTEMCMDS_FOLDER;
	}
	else if (strItemText == "src_drivers")
	{
		temp += PATH_SRC_DRIVERS_FOLDER;
	}

	QDesktopServices::openUrl(QUrl(temp, QUrl::TolerantMode));
}

void mainframe::DoubleClickedList(QModelIndex index)
{
	QString strItemText = index.data().toString();
	if (strItemText.length() <= 0)
		return;

	if (m_strWorkPath.length() <= 0)
		return;

	QString temp = "";
	temp += m_strWorkPath;
	if (strItemText == "rcS")
	{	
		temp += PATH_RCS_FOLDER;
		temp += "/rcS";
		//QProcess::execute("E:\\zhaoyeni\\project\\vs2015\\fastPX4\\fastPX4\\Notepad++\\notepad++.exe D:\\px4\\Firmware\\ROMFS\\px4fmu_common\\init.d\\rcS");
		//aaa.start("E:\\zhaoyeni\\project\\vs2015\\fastPX4\\fastPX4\\Notepad++");	
		//QDesktopServices::openUrl(QUrl(temp, QUrl::TolerantMode));
	}
	else if (strItemText == "px4_base_cmake_config")
	{
		temp += PATH_CMAKE;
		temp += "/common";
		temp += "/px4_base.cmake";
	}
	else if (strItemText == "uorb_makefile")
	{
		temp += PATH_UORB_MESSAGE_FOLDER;
		temp += "/CMakeLists.txt";
	}
	else if (strItemText == "mavlink_msg_define")
	{
		temp += PATH_MAVLINK_STANDARD_MSG_DEF_FOLDER;
		temp += "/common.xml";
	}
	else if (strItemText == "mavlink_msg_send_realization")
	{
		temp += PATH_SRC_MODULES_FOLDER;
		temp += "/mavlink";
		temp += "/mavlink_messages.cpp";
	}
	else if (strItemText == "mavlink_msg_send_config")
	{
		temp += PATH_SRC_MODULES_FOLDER;
		temp += "/mavlink";
		temp += "/mavlink_main.cpp";
	}
	else if (strItemText == "mavlink_msg_receive_def")
	{
		temp += PATH_SRC_MODULES_FOLDER;
		temp += "/mavlink";
		temp += "/mavlink_receive.h";
	}
	else if (strItemText == "mavlink_msg_receive_realization")
	{
		temp += PATH_SRC_MODULES_FOLDER;
		temp += "/mavlink";
		temp += "/mavlink_receiver.cpp";
	}
	else if (strItemText == "px4_cmake")
	{
		temp += PATH_CMAKE_FOLDER;
		if (ui.comboBoxPX4Version->currentText() == "px4fmu-v1")
		{
			temp += "/nuttx_px4fmu-v1_default.cmake";
		}
		else if (ui.comboBoxPX4Version->currentText() == "px4fmu-v2")
		{
			temp += "/nuttx_px4fmu-v2_default.cmake";
		}
		else if (ui.comboBoxPX4Version->currentText() == "px4fmu-v3")
		{
			temp += "/nuttx_px4fmu-v3_default.cmake";
		}
		else if (ui.comboBoxPX4Version->currentText() == "px4fmu-v4")
		{
			temp += "/nuttx_px4fmu-v4_default.cmake";
		}
	}
	else if (strItemText == "nuttx_stm32_start")
	{
		temp += PATH_NUTTX_STM32_SUPPORT;
		temp += "/stm32_start.c";
	}
	else if (strItemText == "nuttx_stm32_serial_init")
	{
		temp += PATH_NUTTX_STM32_SUPPORT;
		temp += "/stm32_serial.c";
	}
	else if (strItemText == "nuttx_define")
	{
		if (ui.comboBoxPX4Version->currentText() == "px4fmu-v1")
		{
			temp += PATH_NUTTX_DEF_FOLDER_PX4V1;
		}
		else if (ui.comboBoxPX4Version->currentText() == "px4fmu-v2")
		{
			temp += PATH_NUTTX_DEF_FOLDER_PX4V2;
		}
		else if (ui.comboBoxPX4Version->currentText() == "px4fmu-v3")
		{
			temp += PATH_NUTTX_DEF_FOLDER_PX4V3;
		}
		else if (ui.comboBoxPX4Version->currentText() == "px4fmu-v4")
		{
			temp += PATH_NUTTX_DEF_FOLDER_PX4V4;
		}

		temp += "/defconfig";
	}
	else
	{
		OpenFolder();
		return;
	}

	QString cmd = CreateCmdLine(temp);
	QProcess::startDetached(cmd);
}

QString mainframe::CreateCmdLine(QString path)
{
	QDir dir;

	QString strCmd = dir.absolutePath();
	strCmd += "/Notepad++/notepad++.exe ";

	strCmd += path;

	return strCmd;
}

void mainframe::Develop()
{
	CDlgDevelop dlg(m_strWorkPath);
	dlg.exec();
}
