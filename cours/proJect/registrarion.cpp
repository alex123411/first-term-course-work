#include "registrarion.h"
#include "ui_registrarion.h"

registrarion::registrarion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrarion)
{
    ui->setupUi(this);
}

registrarion::~registrarion()
{
    delete ui;
}

User registrarion::data()
{
    User newuser;
    QString fullname = ui->username->text();
    QString password = ui->password->text();
    newuser.fullname=password;
    newuser.username=fullname;
    newuser.id = -1;
    return newuser;
}
