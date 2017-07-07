/********************************************************************************
** Form generated from reading UI file 'mainframe.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINFRAME_H
#define UI_MAINFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainframeClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditPath;
    QPushButton *pushButtonLoadPath;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QComboBox *comboBoxPX4Version;
    QHBoxLayout *horizontalLayout_2;
    QListWidget *listWidgetItem;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButtonOpenPath;
    QSpacerItem *verticalSpacer_2;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *mainframeClass)
    {
        if (mainframeClass->objectName().isEmpty())
            mainframeClass->setObjectName(QStringLiteral("mainframeClass"));
        mainframeClass->resize(557, 419);
        mainframeClass->setIconSize(QSize(50, 24));
        centralWidget = new QWidget(mainframeClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEditPath = new QLineEdit(centralWidget);
        lineEditPath->setObjectName(QStringLiteral("lineEditPath"));

        horizontalLayout->addWidget(lineEditPath);

        pushButtonLoadPath = new QPushButton(centralWidget);
        pushButtonLoadPath->setObjectName(QStringLiteral("pushButtonLoadPath"));

        horizontalLayout->addWidget(pushButtonLoadPath);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_3->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        comboBoxPX4Version = new QComboBox(centralWidget);
        comboBoxPX4Version->setObjectName(QStringLiteral("comboBoxPX4Version"));

        horizontalLayout_3->addWidget(comboBoxPX4Version);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        listWidgetItem = new QListWidget(centralWidget);
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidgetItem);
        __qlistwidgetitem->setFont(font);
        new QListWidgetItem(listWidgetItem);
        new QListWidgetItem(listWidgetItem);
        new QListWidgetItem(listWidgetItem);
        new QListWidgetItem(listWidgetItem);
        new QListWidgetItem(listWidgetItem);
        new QListWidgetItem(listWidgetItem);
        new QListWidgetItem(listWidgetItem);
        new QListWidgetItem(listWidgetItem);
        new QListWidgetItem(listWidgetItem);
        new QListWidgetItem(listWidgetItem);
        new QListWidgetItem(listWidgetItem);
        new QListWidgetItem(listWidgetItem);
        new QListWidgetItem(listWidgetItem);
        new QListWidgetItem(listWidgetItem);
        new QListWidgetItem(listWidgetItem);
        new QListWidgetItem(listWidgetItem);
        new QListWidgetItem(listWidgetItem);
        new QListWidgetItem(listWidgetItem);
        new QListWidgetItem(listWidgetItem);
        new QListWidgetItem(listWidgetItem);
        listWidgetItem->setObjectName(QStringLiteral("listWidgetItem"));
        listWidgetItem->setMinimumSize(QSize(454, 235));

        horizontalLayout_2->addWidget(listWidgetItem);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButtonOpenPath = new QPushButton(centralWidget);
        pushButtonOpenPath->setObjectName(QStringLiteral("pushButtonOpenPath"));

        verticalLayout->addWidget(pushButtonOpenPath);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout_2->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        mainframeClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(mainframeClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 557, 23));
        mainframeClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(mainframeClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        mainframeClass->setStatusBar(statusBar);

        retranslateUi(mainframeClass);
        QObject::connect(pushButtonLoadPath, SIGNAL(clicked()), mainframeClass, SLOT(LoadWorkPath()));
        QObject::connect(pushButtonOpenPath, SIGNAL(clicked()), mainframeClass, SLOT(OpenFolder()));
        QObject::connect(listWidgetItem, SIGNAL(doubleClicked(QModelIndex)), mainframeClass, SLOT(DoubleClickedList(QModelIndex)));
        QObject::connect(pushButton, SIGNAL(clicked()), mainframeClass, SLOT(Develop()));

        QMetaObject::connectSlotsByName(mainframeClass);
    } // setupUi

    void retranslateUi(QMainWindow *mainframeClass)
    {
        mainframeClass->setWindowTitle(QApplication::translate("mainframeClass", "fastPX4 @ zhaoyeni", Q_NULLPTR));
        label->setText(QApplication::translate("mainframeClass", "work path:", Q_NULLPTR));
        pushButtonLoadPath->setText(QApplication::translate("mainframeClass", "folder", Q_NULLPTR));
        pushButton->setText(QApplication::translate("mainframeClass", "develop", Q_NULLPTR));
        label_2->setText(QApplication::translate("mainframeClass", "px4 Version:", Q_NULLPTR));
        comboBoxPX4Version->clear();
        comboBoxPX4Version->insertItems(0, QStringList()
         << QApplication::translate("mainframeClass", "px4fmu-v1", Q_NULLPTR)
         << QApplication::translate("mainframeClass", "px4fmu-v2", Q_NULLPTR)
         << QApplication::translate("mainframeClass", "px4fmu-v3", Q_NULLPTR)
         << QApplication::translate("mainframeClass", "px4fmu-v4", Q_NULLPTR)
        );

        const bool __sortingEnabled = listWidgetItem->isSortingEnabled();
        listWidgetItem->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidgetItem->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("mainframeClass", "px4_cmake", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem->setToolTip(QApplication::translate("mainframeClass", "\346\250\241\345\235\227\347\274\226\350\257\221\347\256\241\346\216\247\357\274\214\351\234\200\350\246\201\347\274\226\350\257\221\344\273\200\344\271\210\346\250\241\345\235\227\345\234\250\350\257\245\346\226\207\344\273\266\344\270\255\350\277\233\350\241\214\350\260\203\346\225\264", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem1 = listWidgetItem->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("mainframeClass", "px4_base_cmake_config", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem2 = listWidgetItem->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("mainframeClass", "rcS", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem2->setToolTip(QApplication::translate("mainframeClass", "\345\220\257\345\212\250\350\204\232\346\234\254", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem3 = listWidgetItem->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("mainframeClass", "mixers", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem3->setToolTip(QApplication::translate("mainframeClass", "\345\235\207\350\241\241\345\231\250\351\205\215\347\275\256\346\226\207\344\273\266\357\274\214\346\266\211\345\217\212pwm\347\232\204\345\261\236\346\200\247\351\205\215\347\275\256", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem4 = listWidgetItem->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("mainframeClass", "nuttx_define", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem4->setToolTip(QApplication::translate("mainframeClass", "nuttx\347\274\226\350\257\221\347\232\204\345\256\217\345\256\232\344\271\211\346\216\247\345\210\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem5 = listWidgetItem->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("mainframeClass", "nuttx_stm32_support", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem5->setToolTip(QApplication::translate("mainframeClass", "nuttx\344\270\213stm32\350\212\257\347\211\207\347\232\204\351\251\261\345\212\250\346\250\241\345\235\227\346\224\257\346\222\221\357\274\214\345\214\205\346\213\254\351\251\261\345\212\250\346\212\275\350\261\241\357\274\214\346\263\250\345\206\214\347\261\273\345\236\213\347\255\211", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem6 = listWidgetItem->item(6);
        ___qlistwidgetitem6->setText(QApplication::translate("mainframeClass", "nuttx_stm32_start", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem6->setToolTip(QApplication::translate("mainframeClass", "nuttx\344\270\213stm32\347\232\204\345\220\257\345\212\250\345\205\245\345\217\243", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem7 = listWidgetItem->item(7);
        ___qlistwidgetitem7->setText(QApplication::translate("mainframeClass", "nuttx_stm32_serial_init", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem7->setToolTip(QApplication::translate("mainframeClass", "nuttx\344\270\213stm32\344\270\262\345\217\243\347\232\204\346\212\275\350\261\241", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem8 = listWidgetItem->item(8);
        ___qlistwidgetitem8->setText(QApplication::translate("mainframeClass", "src_modules", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem8->setToolTip(QApplication::translate("mainframeClass", "px4\347\232\204\346\250\241\345\235\227_\346\250\241\347\273\204", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem9 = listWidgetItem->item(9);
        ___qlistwidgetitem9->setText(QApplication::translate("mainframeClass", "src_examples", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem9->setToolTip(QApplication::translate("mainframeClass", "px4\347\232\204\346\250\241\345\235\227_\346\240\267\344\276\213", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem10 = listWidgetItem->item(10);
        ___qlistwidgetitem10->setText(QApplication::translate("mainframeClass", "src_systemcmds", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem10->setToolTip(QApplication::translate("mainframeClass", "px4\347\232\204\346\250\241\345\235\227_\347\263\273\347\273\237\346\214\207\344\273\244", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem11 = listWidgetItem->item(11);
        ___qlistwidgetitem11->setText(QApplication::translate("mainframeClass", "src_drivers", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem11->setToolTip(QApplication::translate("mainframeClass", "px4\347\232\204\346\250\241\345\235\227_\351\251\261\345\212\250\357\274\210\347\211\271\346\214\207\351\222\210\345\257\271\350\256\276\345\244\207\347\232\204\351\251\261\345\212\250\357\274\211", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem12 = listWidgetItem->item(12);
        ___qlistwidgetitem12->setText(QApplication::translate("mainframeClass", "src_drivers_boards_support", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem12->setToolTip(QApplication::translate("mainframeClass", "stm32\345\257\271\344\272\216nuttx\344\270\213\347\232\204\351\251\261\345\212\250GPIO\351\205\215\347\275\256\345\256\236\347\216\260", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem13 = listWidgetItem->item(13);
        ___qlistwidgetitem13->setText(QApplication::translate("mainframeClass", "uorb_message", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem13->setToolTip(QApplication::translate("mainframeClass", "uORB\346\266\210\346\201\257\345\256\232\344\271\211", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem14 = listWidgetItem->item(14);
        ___qlistwidgetitem14->setText(QApplication::translate("mainframeClass", "uorb_makefile", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem15 = listWidgetItem->item(15);
        ___qlistwidgetitem15->setText(QApplication::translate("mainframeClass", "mavlink_msg_define", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem15->setToolTip(QApplication::translate("mainframeClass", "mavlink\346\240\207\345\207\206\346\266\210\346\201\257\345\256\232\344\271\211xml", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem16 = listWidgetItem->item(16);
        ___qlistwidgetitem16->setText(QApplication::translate("mainframeClass", "mavlink_msg_generate", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem16->setToolTip(QApplication::translate("mainframeClass", "\344\276\235\346\215\256mavlink\346\266\210\346\201\257\347\224\237\346\210\220\347\232\204\345\256\232\344\271\211\345\244\264\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem17 = listWidgetItem->item(17);
        ___qlistwidgetitem17->setText(QApplication::translate("mainframeClass", "mavlink_msg_send_realization", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem17->setToolTip(QApplication::translate("mainframeClass", "<html><head/><body><p>mavlink\346\266\210\346\201\257\345\256\236\347\216\260\357\274\214\351\234\200\350\246\201\346\226\260\345\273\272\344\270\200\344\270\252<span style=\" font-weight:600;\">MavlinkStream</span>\347\232\204\345\255\220\347\261\273\357\274\214\347\204\266\345\220\216\345\256\214\346\210\220\347\233\270\345\205\263\346\226\271\346\263\225\357\274\233\345\220\214\346\227\266\357\274\214\345\234\250<span style=\" font-weight:600;\">streams_list[]</span>\344\270\255\346\267\273\345\212\240\350\207\252\345\267\261\346\226\260\345\273\272\347\232\204\350\277\231\344\270\252\347\261\273\357\274\201</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem18 = listWidgetItem->item(18);
        ___qlistwidgetitem18->setText(QApplication::translate("mainframeClass", "mavlink_msg_send_config", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem18->setToolTip(QApplication::translate("mainframeClass", "<html><head/><body><p>\345\257\271\346\266\210\346\201\257\350\277\233\350\241\214\345\217\221\351\200\201\351\205\215\347\275\256\357\274\214\345\234\250<span style=\" font-weight:600;\">task_main()</span>\345\207\275\346\225\260\344\270\255\357\274\214\350\260\203\347\224\250<span style=\" font-weight:600;\">configure_stream(\346\266\210\346\201\257\345\220\215\347\247\260,\351\242\221\347\216\207)</span>\350\277\233\350\241\214\351\205\215\347\275\256\357\274\214\345\246\202\346\236\234\346\262\241\346\234\211\350\260\203\347\224\250\350\257\245\345\207\275\346\225\260\357\274\214mavlink\346\230\257\344\270\215\344\274\232\345\217\221\345\207\272\346\266\210\346\201\257\347\232\204\343\200\202</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem19 = listWidgetItem->item(19);
        ___qlistwidgetitem19->setText(QApplication::translate("mainframeClass", "mavlink_msg_receive_def", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem19->setToolTip(QApplication::translate("mainframeClass", "<html><head/><body><p>mavlink\346\266\210\346\201\257\347\232\204\346\216\245\346\224\266\345\217\252\347\224\261<span style=\" font-weight:600;\">MavlinkReceiver</span>\350\277\233\350\241\214\345\244\204\347\220\206\357\274\214\350\277\231\351\207\214\346\230\257\345\234\250MavlinkReceiver\347\261\273\344\270\255\345\242\236\345\212\240\346\226\271\346\263\225\345\256\232\344\271\211\357\274\214\345\234\250.cpp\346\226\207\344\273\266\344\270\255\350\277\233\350\241\214\345\256\236\347\216\260</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem20 = listWidgetItem->item(20);
        ___qlistwidgetitem20->setText(QApplication::translate("mainframeClass", "mavlink_msg_receive_realization", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem20->setToolTip(QApplication::translate("mainframeClass", "<html><head/><body><p>\345\256\236\347\216\260MavlinkReceiver\344\270\255\347\232\204\346\226\271\346\263\225\357\274\214\345\271\266\345\234\250<span style=\" font-weight:600;\">::handle_message</span>\344\270\255\350\277\233\350\241\214\350\257\245\346\226\271\346\263\225\350\260\203\347\224\250</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        listWidgetItem->setSortingEnabled(__sortingEnabled);

        pushButtonOpenPath->setText(QApplication::translate("mainframeClass", "Open Folder", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class mainframeClass: public Ui_mainframeClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINFRAME_H
