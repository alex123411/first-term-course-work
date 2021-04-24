/********************************************************************************
** Form generated from reading UI file 'add.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_H
#define UI_ADD_H

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

class Ui_add
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *fullnameadd;
    QLineEdit *groupadd;

    void setupUi(QDialog *add)
    {
        if (add->objectName().isEmpty())
            add->setObjectName(QStringLiteral("add"));
        add->resize(382, 198);
        buttonBox = new QDialogButtonBox(add);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(20, 150, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(add);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 191, 17));
        label_2 = new QLabel(add);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 70, 71, 17));
        label_3 = new QLabel(add);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 100, 121, 17));
        fullnameadd = new QLineEdit(add);
        fullnameadd->setObjectName(QStringLiteral("fullnameadd"));
        fullnameadd->setGeometry(QRect(150, 60, 113, 25));
        groupadd = new QLineEdit(add);
        groupadd->setObjectName(QStringLiteral("groupadd"));
        groupadd->setGeometry(QRect(150, 90, 113, 25));

        retranslateUi(add);
        QObject::connect(buttonBox, SIGNAL(accepted()), add, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), add, SLOT(reject()));

        QMetaObject::connectSlotsByName(add);
    } // setupUi

    void retranslateUi(QDialog *add)
    {
        add->setWindowTitle(QApplication::translate("add", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("add", "Add new language", Q_NULLPTR));
        label_2->setText(QApplication::translate("add", "Fullname:", Q_NULLPTR));
        label_3->setText(QApplication::translate("add", "Foundation year:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class add: public Ui_add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_H
