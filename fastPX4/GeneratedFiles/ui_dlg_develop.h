/********************************************************************************
** Form generated from reading UI file 'dlg_develop.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_DEVELOP_H
#define UI_DLG_DEVELOP_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dlg_develop
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditAppName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEditStackSize;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *comboBoxFolder;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;

    void setupUi(QWidget *dlg_develop)
    {
        if (dlg_develop->objectName().isEmpty())
            dlg_develop->setObjectName(QStringLiteral("dlg_develop"));
        dlg_develop->resize(229, 209);
        gridLayout = new QGridLayout(dlg_develop);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(dlg_develop);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEditAppName = new QLineEdit(dlg_develop);
        lineEditAppName->setObjectName(QStringLiteral("lineEditAppName"));

        horizontalLayout->addWidget(lineEditAppName);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(dlg_develop);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEditStackSize = new QLineEdit(dlg_develop);
        lineEditStackSize->setObjectName(QStringLiteral("lineEditStackSize"));
        lineEditStackSize->setDragEnabled(false);

        horizontalLayout_2->addWidget(lineEditStackSize);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(dlg_develop);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        comboBoxFolder = new QComboBox(dlg_develop);
        comboBoxFolder->setObjectName(QStringLiteral("comboBoxFolder"));

        horizontalLayout_3->addWidget(comboBoxFolder);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton = new QPushButton(dlg_develop);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(dlg_develop);
        QObject::connect(pushButton, SIGNAL(clicked()), dlg_develop, SLOT(test()));

        QMetaObject::connectSlotsByName(dlg_develop);
    } // setupUi

    void retranslateUi(QWidget *dlg_develop)
    {
        dlg_develop->setWindowTitle(QApplication::translate("dlg_develop", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("dlg_develop", "app name:", Q_NULLPTR));
        lineEditAppName->setText(QApplication::translate("dlg_develop", "myapp", Q_NULLPTR));
        lineEditAppName->setPlaceholderText(QString());
        label_2->setText(QApplication::translate("dlg_develop", "stack size:", Q_NULLPTR));
        lineEditStackSize->setText(QApplication::translate("dlg_develop", "2000", Q_NULLPTR));
        label_3->setText(QApplication::translate("dlg_develop", "folder:", Q_NULLPTR));
        comboBoxFolder->clear();
        comboBoxFolder->insertItems(0, QStringList()
         << QApplication::translate("dlg_develop", "examples", Q_NULLPTR)
        );
        pushButton->setText(QApplication::translate("dlg_develop", "Create", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class dlg_develop: public Ui_dlg_develop {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_DEVELOP_H
