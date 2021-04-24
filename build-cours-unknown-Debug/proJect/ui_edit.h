/********************************************************************************
** Form generated from reading UI file 'edit.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_H
#define UI_EDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_edit
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLineEdit *Newname;
    QLabel *label_8;
    QListWidget *listWidgetLanguage;
    QLabel *label_2;
    QLineEdit *NewYear;
    QPushButton *addproj;
    QPushButton *removeproj;
    QPushButton *editproj;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *ids;
    QLabel *names;
    QLabel *starts;
    QLabel *label_7;
    QListWidget *listWidget;
    QLabel *label_11;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *ids_2;
    QLabel *names_2;
    QLabel *starts_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_12;

    void setupUi(QDialog *edit)
    {
        if (edit->objectName().isEmpty())
            edit->setObjectName(QStringLiteral("edit"));
        edit->resize(875, 530);
        buttonBox = new QDialogButtonBox(edit);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(40, 260, 191, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(edit);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 190, 111, 17));
        Newname = new QLineEdit(edit);
        Newname->setObjectName(QStringLiteral("Newname"));
        Newname->setGeometry(QRect(100, 190, 181, 25));
        label_8 = new QLabel(edit);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(330, 10, 161, 17));
        listWidgetLanguage = new QListWidget(edit);
        listWidgetLanguage->setObjectName(QStringLiteral("listWidgetLanguage"));
        listWidgetLanguage->setGeometry(QRect(300, 40, 221, 211));
        label_2 = new QLabel(edit);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 220, 81, 17));
        NewYear = new QLineEdit(edit);
        NewYear->setObjectName(QStringLiteral("NewYear"));
        NewYear->setGeometry(QRect(100, 220, 181, 25));
        addproj = new QPushButton(edit);
        addproj->setObjectName(QStringLiteral("addproj"));
        addproj->setGeometry(QRect(530, 140, 89, 25));
        removeproj = new QPushButton(edit);
        removeproj->setObjectName(QStringLiteral("removeproj"));
        removeproj->setGeometry(QRect(530, 220, 89, 25));
        editproj = new QPushButton(edit);
        editproj->setObjectName(QStringLiteral("editproj"));
        editproj->setGeometry(QRect(530, 180, 89, 25));
        label_3 = new QLabel(edit);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(540, 10, 151, 17));
        label_4 = new QLabel(edit);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(540, 40, 67, 17));
        label_5 = new QLabel(edit);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(540, 60, 67, 17));
        label_6 = new QLabel(edit);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(540, 80, 121, 17));
        ids = new QLabel(edit);
        ids->setObjectName(QStringLiteral("ids"));
        ids->setGeometry(QRect(690, 40, 101, 17));
        names = new QLabel(edit);
        names->setObjectName(QStringLiteral("names"));
        names->setGeometry(QRect(690, 60, 181, 17));
        starts = new QLabel(edit);
        starts->setObjectName(QStringLiteral("starts"));
        starts->setGeometry(QRect(690, 80, 101, 17));
        label_7 = new QLabel(edit);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(270, 280, 321, 17));
        listWidget = new QListWidget(edit);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(300, 310, 221, 201));
        label_11 = new QLabel(edit);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(540, 320, 67, 17));
        label_9 = new QLabel(edit);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(540, 350, 67, 17));
        label_10 = new QLabel(edit);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(540, 380, 121, 17));
        ids_2 = new QLabel(edit);
        ids_2->setObjectName(QStringLiteral("ids_2"));
        ids_2->setGeometry(QRect(690, 320, 67, 17));
        names_2 = new QLabel(edit);
        names_2->setObjectName(QStringLiteral("names_2"));
        names_2->setGeometry(QRect(690, 350, 171, 17));
        starts_2 = new QLabel(edit);
        starts_2->setObjectName(QStringLiteral("starts_2"));
        starts_2->setGeometry(QRect(690, 380, 67, 17));
        pushButton = new QPushButton(edit);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(540, 480, 89, 25));
        pushButton_2 = new QPushButton(edit);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(110, 90, 89, 25));
        label_12 = new QLabel(edit);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(40, 70, 261, 17));

        retranslateUi(edit);
        QObject::connect(buttonBox, SIGNAL(accepted()), edit, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), edit, SLOT(reject()));

        QMetaObject::connectSlotsByName(edit);
    } // setupUi

    void retranslateUi(QDialog *edit)
    {
        edit->setWindowTitle(QApplication::translate("edit", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("edit", "New name", Q_NULLPTR));
        label_8->setText(QApplication::translate("edit", "Language`s  IT projects", Q_NULLPTR));
        label_2->setText(QApplication::translate("edit", "New year", Q_NULLPTR));
        addproj->setText(QApplication::translate("edit", "add", Q_NULLPTR));
        removeproj->setText(QApplication::translate("edit", "remove", Q_NULLPTR));
        editproj->setText(QApplication::translate("edit", "edit", Q_NULLPTR));
        label_3->setText(QApplication::translate("edit", "Selected project info:", Q_NULLPTR));
        label_4->setText(QApplication::translate("edit", "id:", Q_NULLPTR));
        label_5->setText(QApplication::translate("edit", "Name:", Q_NULLPTR));
        label_6->setText(QApplication::translate("edit", "Start_data(year):", Q_NULLPTR));
        ids->setText(QString());
        names->setText(QString());
        starts->setText(QString());
        label_7->setText(QApplication::translate("edit", "IT projects that u can add to this language", Q_NULLPTR));
        label_11->setText(QApplication::translate("edit", "id:", Q_NULLPTR));
        label_9->setText(QApplication::translate("edit", "Name:", Q_NULLPTR));
        label_10->setText(QApplication::translate("edit", "Start_data(year):", Q_NULLPTR));
        ids_2->setText(QString());
        names_2->setText(QString());
        starts_2->setText(QString());
        pushButton->setText(QApplication::translate("edit", "add", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("edit", "get back", Q_NULLPTR));
        label_12->setText(QApplication::translate("edit", "If u don`t want to change language", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class edit: public Ui_edit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_H
