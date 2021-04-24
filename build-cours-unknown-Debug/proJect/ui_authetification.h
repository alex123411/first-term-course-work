/********************************************************************************
** Form generated from reading UI file 'authetification.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHETIFICATION_H
#define UI_AUTHETIFICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_authetification
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *login;
    QLineEdit *password;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;

    void setupUi(QDialog *authetification)
    {
        if (authetification->objectName().isEmpty())
            authetification->setObjectName(QStringLiteral("authetification"));
        authetification->resize(400, 300);
        buttonBox = new QDialogButtonBox(authetification);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(110, 130, 181, 21));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        login = new QLineEdit(authetification);
        login->setObjectName(QStringLiteral("login"));
        login->setGeometry(QRect(200, 60, 113, 25));
        password = new QLineEdit(authetification);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(200, 100, 113, 25));
        password->setEchoMode(QLineEdit::Password);
        label = new QLabel(authetification);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 60, 67, 17));
        label_2 = new QLabel(authetification);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 100, 67, 17));
        label_3 = new QLabel(authetification);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(170, 30, 67, 17));
        label_4 = new QLabel(authetification);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(120, 230, 181, 17));
        pushButton = new QPushButton(authetification);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(130, 250, 141, 25));

        retranslateUi(authetification);
        QObject::connect(buttonBox, SIGNAL(accepted()), authetification, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), authetification, SLOT(reject()));

        QMetaObject::connectSlotsByName(authetification);
    } // setupUi

    void retranslateUi(QDialog *authetification)
    {
        authetification->setWindowTitle(QApplication::translate("authetification", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("authetification", "Login", Q_NULLPTR));
        label_2->setText(QApplication::translate("authetification", "Password", Q_NULLPTR));
        label_3->setText(QApplication::translate("authetification", "Sign in", Q_NULLPTR));
        label_4->setText(QApplication::translate("authetification", "Don`t have an account?", Q_NULLPTR));
        pushButton->setText(QApplication::translate("authetification", "REGESTRATION", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class authetification: public Ui_authetification {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHETIFICATION_H
