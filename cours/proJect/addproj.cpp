#include "addproj.h"
#include "ui_addproj.h"

addproj::addproj(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addproj)
{
    ui->setupUi(this);
}

addproj::~addproj()
{
    delete ui;
}

It_project addproj::data()
{
    It_project ProgLanguage;
    QString fullname = ui->projname->text();
    QString grroup = ui->projdata->text();
    ProgLanguage.start_data = grroup.toInt();
    ProgLanguage.name = fullname.toStdString();
    ProgLanguage.id = -1;
    return ProgLanguage;
}

