#include "authetification.h"
#include "ui_authetification.h"

authetification::authetification(QWidget *parent, Storage * storage) :
    QDialog(parent),
    ui(new Ui::authetification)
{
    ui->setupUi(this);
    this->storage_ = storage;
}

authetification::~authetification()
{
    delete ui;
}

User authetification::data()
{
    User user;
    //QString fullname = ui->fullname->text();
    QString login = ui->login->text();
    QString password = ui->password->text();
    user.fullname=password;
    user.username=login;
    return user;
}

void authetification::on_pushButton_clicked()
{
    registrarion addDialog(this);
    int status = addDialog.exec();
    User newuser = addDialog.data();

    if(status == 1)
    {
        vector<User> users = storage_->getallusers();
        if(newuser.username.size() < 3  || newuser.fullname.size() < 3)
        {
            QMessageBox msgWarning;
            msgWarning.setText("Please create longer username/password(>3 elements)!");
            msgWarning.setIcon(QMessageBox::Warning);
            msgWarning.setWindowTitle("Caution");
            msgWarning.exec();
            this->on_pushButton_clicked();

        }
        for(User us:users)
        {
            qDebug() <<us.username;
            if(us.username == newuser.username)
            {
                QMessageBox msgWarning;
                msgWarning.setText("This username already exists!");
                msgWarning.setIcon(QMessageBox::Warning);
                msgWarning.setWindowTitle("Caution");
                msgWarning.exec();
                this->on_pushButton_clicked();
            }
        }
        storage_->adduser(newuser);
    }
}







