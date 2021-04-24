/********************************************************************************
** Form generated from reading UI file 'registrarion.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRARION_H
#define UI_REGISTRARION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_registrarion
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *username;
    QLineEdit *password;
    QLabel *label_3;

    void setupUi(QDialog *registrarion)
    {
        if (registrarion->objectName().isEmpty())
            registrarion->setObjectName(QStringLiteral("registrarion"));
        registrarion->resize(400, 300);
        buttonBox = new QDialogButtonBox(registrarion);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(100, 200, 191, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(registrarion);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 100, 171, 17));
        label_2 = new QLabel(registrarion);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 140, 151, 17));
        username = new QLineEdit(registrarion);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(250, 100, 113, 25));
        password = new QLineEdit(registrarion);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(250, 140, 113, 25));
        password->setEchoMode(QLineEdit::Password);
        label_3 = new QLabel(registrarion);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(160, 40, 111, 17));

        retranslateUi(registrarion);
        QObject::connect(buttonBox, SIGNAL(accepted()), registrarion, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), registrarion, SLOT(reject()));

        QMetaObject::connectSlotsByName(registrarion);
    } // setupUi

    void retranslateUi(QDialog *registrarion)
    {
        registrarion->setWindowTitle(QApplication::translate("registrarion", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("registrarion", "Create your uniqe name", Q_NULLPTR));
        label_2->setText(QApplication::translate("registrarion", "Create you password", Q_NULLPTR));
        label_3->setText(QApplication::translate("registrarion", "Ragistration", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class registrarion: public Ui_registrarion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRARION_H
