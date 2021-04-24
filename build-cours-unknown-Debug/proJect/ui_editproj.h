/********************************************************************************
** Form generated from reading UI file 'editproj.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPROJ_H
#define UI_EDITPROJ_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_editproj
{
public:
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *editproj)
    {
        if (editproj->objectName().isEmpty())
            editproj->setObjectName(QStringLiteral("editproj"));
        editproj->resize(314, 219);
        lineEdit = new QLineEdit(editproj);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(140, 60, 113, 25));
        lineEdit_2 = new QLineEdit(editproj);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(140, 90, 113, 25));
        label = new QLabel(editproj);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(16, 60, 141, 20));
        label_2 = new QLabel(editproj);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(16, 90, 141, 20));
        label_3 = new QLabel(editproj);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(100, 20, 151, 17));
        pushButton = new QPushButton(editproj);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(170, 130, 89, 25));
        pushButton_2 = new QPushButton(editproj);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(60, 130, 89, 25));

        retranslateUi(editproj);

        QMetaObject::connectSlotsByName(editproj);
    } // setupUi

    void retranslateUi(QDialog *editproj)
    {
        editproj->setWindowTitle(QApplication::translate("editproj", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("editproj", "New name", Q_NULLPTR));
        label_2->setText(QApplication::translate("editproj", "New start data", Q_NULLPTR));
        label_3->setText(QApplication::translate("editproj", "Edit choosen project", Q_NULLPTR));
        pushButton->setText(QApplication::translate("editproj", "OK", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("editproj", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class editproj: public Ui_editproj {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPROJ_H
