/********************************************************************************
** Form generated from reading UI file 'export.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORT_H
#define UI_EXPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Export
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QPushButton *pushButton_3;

    void setupUi(QDialog *Export)
    {
        if (Export->objectName().isEmpty())
            Export->setObjectName(QStringLiteral("Export"));
        Export->resize(400, 300);
        pushButton = new QPushButton(Export);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 130, 131, 25));
        pushButton_2 = new QPushButton(Export);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(230, 130, 131, 25));
        label = new QLabel(Export);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 100, 211, 17));
        pushButton_3 = new QPushButton(Export);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(160, 190, 89, 25));

        retranslateUi(Export);

        QMetaObject::connectSlotsByName(Export);
    } // setupUi

    void retranslateUi(QDialog *Export)
    {
        Export->setWindowTitle(QApplication::translate("Export", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Export", "prog_languages", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Export", "it_projects", Q_NULLPTR));
        label->setText(QApplication::translate("Export", "export smthing(for this user)", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Export", "get back", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Export: public Ui_Export {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORT_H
