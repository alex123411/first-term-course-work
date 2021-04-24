#include "editproj.h"
#include "ui_editproj.h"
#include <QMessageBox>

editproj::editproj(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editproj)
{
    ui->setupUi(this);
}

editproj::~editproj()
{
    delete ui;
}


int editproj::on_pushButton_clicked()
{
    QString name = ui->lineEdit->text();
    QString start_data = ui->lineEdit_2->text();
    It_project project;
        if(name!="" && start_data!="")
        {

            this->close();
        }
        else
        {
            QMessageBox msgWarning;
            msgWarning.setText("Input can`t be empty!");
            msgWarning.setIcon(QMessageBox::Warning);
            msgWarning.setWindowTitle("Caution");
            msgWarning.exec();
        }
}

int editproj::on_pushButton_2_clicked()
{

    this->close()  ;
}

It_project editproj::dat()
{
    QString name = ui->lineEdit->text();
    QString start_data = ui->lineEdit_2->text();
    It_project project;
    project.id = 0;
    project.name = name.toStdString();
    project.start_data = start_data.toInt();
    return project;
}

















