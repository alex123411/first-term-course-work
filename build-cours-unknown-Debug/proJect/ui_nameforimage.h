/********************************************************************************
** Form generated from reading UI file 'nameforimage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAMEFORIMAGE_H
#define UI_NAMEFORIMAGE_H

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

class Ui_nameforimage
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *nameforimage)
    {
        if (nameforimage->objectName().isEmpty())
            nameforimage->setObjectName(QStringLiteral("nameforimage"));
        nameforimage->resize(400, 300);
        buttonBox = new QDialogButtonBox(nameforimage);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(100, 160, 191, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(nameforimage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 120, 161, 17));
        lineEdit = new QLineEdit(nameforimage);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(190, 120, 191, 25));

        retranslateUi(nameforimage);
        QObject::connect(buttonBox, SIGNAL(accepted()), nameforimage, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), nameforimage, SLOT(reject()));

        QMetaObject::connectSlotsByName(nameforimage);
    } // setupUi

    void retranslateUi(QDialog *nameforimage)
    {
        nameforimage->setWindowTitle(QApplication::translate("nameforimage", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("nameforimage", "create name for image", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class nameforimage: public Ui_nameforimage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAMEFORIMAGE_H
