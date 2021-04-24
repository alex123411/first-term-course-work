#include "add.h"
#include "ui_add.h"

add::add(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add)
{
    ui->setupUi(this);
}

add::~add()
{
    delete ui;
}

ProgLanguage add::data()
{
    ProgLanguage ProgLanguage;
    QString fullname = ui->fullnameadd->text();
    QString grroup = ui->groupadd->text();
    ProgLanguage.year = grroup.toInt();
    ProgLanguage.fullname = fullname.toStdString();
    ProgLanguage.id = -1;
    return ProgLanguage;
}
