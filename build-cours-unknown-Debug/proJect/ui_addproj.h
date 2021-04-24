/********************************************************************************
** Form generated from reading UI file 'addproj.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPROJ_H
#define UI_ADDPROJ_H

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

class Ui_addproj
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *projname;
    QLineEdit *projdata;

    void setupUi(QDialog *addproj)
    {
        if (addproj->objectName().isEmpty())
            addproj->setObjectName(QStringLiteral("addproj"));
        addproj->resize(391, 253);
        buttonBox = new QDialogButtonBox(addproj);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(90, 190, 191, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(addproj);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 60, 101, 17));
        label_2 = new QLabel(addproj);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 90, 91, 17));
        projname = new QLineEdit(addproj);
        projname->setObjectName(QStringLiteral("projname"));
        projname->setGeometry(QRect(150, 60, 151, 25));
        projdata = new QLineEdit(addproj);
        projdata->setObjectName(QStringLiteral("projdata"));
        projdata->setGeometry(QRect(150, 90, 151, 25));

        retranslateUi(addproj);
        QObject::connect(buttonBox, SIGNAL(accepted()), addproj, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), addproj, SLOT(reject()));

        QMetaObject::connectSlotsByName(addproj);
    } // setupUi

    void retranslateUi(QDialog *addproj)
    {
        addproj->setWindowTitle(QApplication::translate("addproj", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("addproj", "project Name", Q_NULLPTR));
        label_2->setText(QApplication::translate("addproj", "start data", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class addproj: public Ui_addproj {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPROJ_H
