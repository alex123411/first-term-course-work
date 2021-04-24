/********************************************************************************
** Form generated from reading UI file 'import.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPORT_H
#define UI_IMPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Import
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;

    void setupUi(QDialog *Import)
    {
        if (Import->objectName().isEmpty())
            Import->setObjectName(QStringLiteral("Import"));
        Import->resize(400, 300);
        pushButton = new QPushButton(Import);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 130, 141, 25));
        pushButton_2 = new QPushButton(Import);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(230, 130, 141, 25));
        pushButton_3 = new QPushButton(Import);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(160, 210, 89, 25));
        label = new QLabel(Import);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 100, 141, 17));

        retranslateUi(Import);

        QMetaObject::connectSlotsByName(Import);
    } // setupUi

    void retranslateUi(QDialog *Import)
    {
        Import->setWindowTitle(QApplication::translate("Import", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Import", "prog_languages", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Import", "it_projects", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Import", "get back", Q_NULLPTR));
        label->setText(QApplication::translate("Import", "import some data", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Import: public Ui_Import {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPORT_H
