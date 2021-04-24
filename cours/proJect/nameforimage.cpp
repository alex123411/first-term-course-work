#include "nameforimage.h"
#include "ui_nameforimage.h"

nameforimage::nameforimage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nameforimage)
{
    ui->setupUi(this);
}

nameforimage::~nameforimage()
{
    delete ui;
}

string nameforimage::data()
{
    string str = ui->lineEdit->text().toStdString();
    return str;
}
