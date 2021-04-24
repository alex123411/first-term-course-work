#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "nameforimage.h"

Storage* createstorage(const QString &qpath);

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);

    connect(ui->openst, &QAction::triggered, this , &MainWindow::onOpen);
    connect(ui->logout, &QAction::triggered, this , &MainWindow::onLogout);
    connect(ui->import_2, &QAction::triggered, this , &MainWindow::onImport);
    connect(ui->export_2, &QAction::triggered, this , &MainWindow::onExport);
    connect(ui->actionExit, &QAction::triggered, this , &MainWindow::onExit);

}
void MainWindow::onExit()
{
    this->close();
}

void MainWindow::onImport()
{
    qDebug() << "import";
    QString usr_id__ = ui->usr_id->text();
    int usr = usr_id__.toInt();
    if(storage_==nullptr)
    {
    QMessageBox::warning(this, "Caution","Open Storage First!");
    }
    else if(usr == 0)
    {
    QMessageBox::warning(this, "Caution","Log IN First!");
    }
    else
    {
        Import addDialog(this,storage_,usr,"1");
        int status = addDialog.exec();
        if(status == 1)
        {
              qDebug() << "imported";
        }
    }
    re();
}
void MainWindow::onExport()
{
    qDebug() << "export";
    QString usr_id__ = ui->usr_id->text();
    int usr = usr_id__.toInt();
    if(storage_==nullptr)
    {
    QMessageBox::warning(this, "Caution","Open Storage First!");
    }
    else if(usr == 0)
    {
    QMessageBox::warning(this, "Caution","Log IN First!");
    }
    else
    {
        Export addDialog(this,storage_,usr,"1");
        int status = addDialog.exec();
        if(status == 1)
        {
            qDebug() << "exported";
        }
    }
}

void MainWindow::onLogout()
{
    QString und = ui->storage__->text();
    ui->usr_id->clear();

    if(und!="Storage closed")
    {

    qDebug() << "logged out";
    this->on_auth_clicked();
    }
    else{QMessageBox::warning(this, "Caution","Open Storage First!");}
}

Storage * MainWindow::retStorag()
{
    return storage_;
}

MainWindow::~MainWindow()
{
    delete ui;
}


Storage* createstorage(const QString &qpath)
{
 if(qpath.endsWith("xml/"))
 {

 }
 else if(qpath.endsWith("csv/"))
 {
     //CsvStorage * storage = new CsvStorage(qpath.toLocal8Bit().constData());
     //return storage;
 }
 else if(qpath.endsWith("sqlite"))
 {
    SqliteStorage * storage = new SqliteStorage(qpath.toLocal8Bit().constData());
    return storage;
 }
 else
 {
     qDebug() << "not supported data type " << qpath;
 }
}


void MainWindow::on_add_clicked()
{
    QString empty = ui->usr_id->text();
    QString please = "";
    if(empty != please)
    {
        add addDialog(this);
        int status = addDialog.exec();
        if (status == 1)
        {
            ProgLanguage ProgLanguag = addDialog.data();
            ProgLanguag.user_id = ui->usr_id->text().toInt();
            storage_->insertProgLanguage(ProgLanguag);
            pagination();
        }
    }
    else{qDebug()<<"cant add";
    QMessageBox::warning(this,"caution","PLEASE LOG IN FIRST");
    }
}


void MainWindow::on_auth_clicked()
{
    QString und1 = ui->usr_id->text();
    if(und1=="")
    {
        QString und = ui->storage__->text();
        ui->listWidget->clear();
        ui->username->clear();
        ui->usr_id->clear();
        ui->ids->clear();
        ui->names->clear();
        ui->groups->clear();
        if(und!="Storage closed")
        {

            qDebug() << "authent" ;
            authetification addDialog(this,storage_);
            int status = addDialog.exec();
            if (status == 1)
            {
                User user = addDialog.data();
                QString password = user.fullname;
                QString login = user.username;
                User userq = storage_->getUserAuth(login, password);
                if(userq.id != -1)
                {
                     ui->username->setText(userq.username);
                     QString id = QString::number(userq.id);
                     ui->usr_id->setText(id);
                     int idd = ui->usr_id->text().toInt();
                     pagination();
                     vector<Image> images = storage_->getAllImages();
                     for(Image im : images)
                     {
                        if(im.user_id == idd)
                        {
                            ui->images->addItem(QString::fromStdString(im.name));
                        }
                     }
                }
                else
                {
                    QMessageBox msgWarning;
                    msgWarning.setText("there is no such user!!");
                    msgWarning.setIcon(QMessageBox::Warning);
                    msgWarning.setWindowTitle("Caution");
                    msgWarning.exec();
                    this->on_auth_clicked();
                }
            }
        }
        else{QMessageBox::warning(this, "Caution","Authorize only after u open a storage!");}
    }
    else{QMessageBox::warning(this, "Caution","Log out first!");}
}

void MainWindow::on_editbut_clicked()
{
    QString ss = ui->usr_id->text();
    QString lm = ui->ids->text();
    int user_id = ss.toInt();
    QList<QListWidgetItem * >items = ui->listWidget->selectedItems();
    if(items.count() ==0)
    {
        QMessageBox::warning(this, "Caution","nothing selected");
    }
    else
    {
        edit addDialog(this,storage_,user_id,lm);
        vector <QString> string;
        User userq;
        userq.id = ui->usr_id->text().toInt();
        vector<It_project> It_projects = storage_->getAllIt_projects();
        vector<Links> links = storage_->getAllLinks();
        Links linkq;
        int ID = ui->ids->text().toInt();
        int usr_id = ui->usr_id->text().toInt();
        for(Links link: links)
        {
            if(ID == link.ProgLanguage_id)
            {
                linkq = link;
                for( It_project It_projec: It_projects)
                {
                    if(It_projec.id == linkq.It_project_id && linkq.id == usr_id)
                    {
                        QString str = QString::fromStdString(It_projec.name);
                        string.push_back(str);
                        addDialog.pl(string);
                    }
                }
            }
        }
        int status = addDialog.exec();
        if (status == 1)
        {
            ProgLanguage ProgLanguag = addDialog.dat();
            QString full = QString::fromStdString(ProgLanguag.fullname);
            QString im = ui->ids->text();
            ui->groups->setText(QString::number(ProgLanguag.year));
            ProgLanguag.id = im.toInt();
            storage_->updateProgLanguage(ProgLanguag);
            QList<QListWidgetItem * >items = ui->listWidget->selectedItems();
            QListWidgetItem * selectedItem = items.at(0);
            selectedItem->setText(full);
            ui->names->setText(full);

        }
    }
}

void MainWindow::re()
{
    ui->listWidget->clear();
    vector<ProgLanguage> vec = storage_->getAllProgLanguages();
    int id = ui->usr_id->text().toInt();
    for(ProgLanguage lang : vec)
    {
        if(lang.user_id = id)
        {
            QString ll = QString::fromStdString(lang.fullname);
            ui->listWidget->addItem(ll);
        }
    }
}

void MainWindow::onOpen()
{
    ui->names->clear();
    ui->groups->clear();
    ui->ids->clear();
    if(storage_ != nullptr){
        storage_ = nullptr;
    }
    ui->listWidget->clear();
    qDebug() << "openfile";
    QString fileName = QFileDialog::getOpenFileName(
                  this,              // parent
                  "Dialog Caption",  // caption
                  "",                // directory to start with
                  "SQLITE (*.sqlite);;All Files (*)");  // file name filter
    string fileName_ = fileName.toStdString();


    if(fileName != "")
    {
        ui->storage__->setText("Storage opened");
        storage_ =   createstorage(fileName);
        storage_->load();
    }
    this->on_auth_clicked();
}

void MainWindow::on_remove_clicked()
{
    QString idk = ui->ids->text();
    int pp = idk.toInt();
    storage_->deleteLink(pp);
    QList<QListWidgetItem * >items = ui->listWidget->selectedItems();
    if(items.count() ==0)
    {
        QMessageBox::warning(this, "Caution","nothing selected");
    }
    else{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Remove?", "Are u sure");
    if(reply == QMessageBox::StandardButton::Yes)
    {
        QString ids = ui->ids->text();
        int idq = ids.toInt();
        storage_->removeProgLanguage(idq);
        pagination();

        ui->groups->clear();
        ui->ids->clear();
        ui->names->clear();
    }
    }
}

void MainWindow::on_listWidget_itemClicked(QListWidgetItem *item)
{
    QString seltext = item->text();
    ui->names->setText(seltext);
    vector<ProgLanguage> ProgLanguages = storage_->getAllProgLanguages();
    for (ProgLanguage & ProgLanguag: ProgLanguages)
    {
        QString kl = QString::fromStdString(ProgLanguag.fullname);
        if(seltext ==  kl)
        {
            ui->groups->setText(QString::number(ProgLanguag.year));
            ui->ids->setText(QString::number(ProgLanguag.id));
        }
    }

}


void MainWindow::pagination()
{
    ui->listWidget->clear();

    int user__id = ui->usr_id->text().toInt();

    if(user__id != 0)
    {
        vector<ProgLanguage> toshow;
        vector<ProgLanguage> languages = storage_->getAllProgLanguages();
        int num = ui->current_st->text().toInt();
        int i = 0;
        int page_size = 9;
        for(ProgLanguage language :languages)
        {
            if (language.user_id == user__id)
            {
                toshow.push_back(language);
            }
        }
        for(ProgLanguage lang : toshow)
        {
            i++;
            if(i>(num-1)*page_size && i<=num*page_size)
            {
                ui->listWidget->addItem(QString::fromStdString(lang.fullname));
            }
        }
    }
}
void MainWindow::on_next_clicked()
{
    int num = ui->current_st->text().toInt();
    if(num!=10)
    {
        num++;
        ui->current_st->setText(QString::number(num));
        pagination();
    }

}

void MainWindow::on_prev_clicked()
{
    int num = ui->current_st->text().toInt();
    if(num!=1)
    {
        num--;
        ui->current_st->setText(QString::number(num));
        pagination();
    }

}

bool search(string s, string p)
{

       size_t pos = s.find(p);
       if (pos != std::string::npos)
           return true;
       else
            return false;
}

void MainWindow::on_search_clicked()
{

    if(ui->usr_id->text()!= "")
    {
        if(ui->lineEdit->text().toStdString().size() > 0)
        {
            string s = ui->lineEdit->text().toStdString();

            vector<ProgLanguage> toshow;
            vector<ProgLanguage> languages = storage_->getAllProgLanguages();
            int user__id = ui->usr_id->text().toInt();
            for(ProgLanguage language :languages)
            {
                if (language.user_id == user__id)
                {
                    toshow.push_back(language);
                }
            }
            string ss;
            for(ProgLanguage language :toshow)
            {
                int i = search(language.fullname,s);
                if(i==1)
                {
                    ss = ss + language.fullname + "\n";
                }
            }
            QMessageBox msgBox;
            if(ss!=""){
            msgBox.setText("Languages to your request");
            msgBox.setInformativeText(QString::fromStdString(ss));
             msgBox.exec();
            }
            else{
                msgBox.setText("Languages to your request");

                msgBox.setInformativeText("Nothing found!");
                msgBox.exec();
            }
        }
        else{
            QMessageBox msgBox;
            msgBox.setText("Input smthing!");
            msgBox.exec();
        }
    }

}

void MainWindow::image(QString fileName)
{


    QPixmap pm(fileName); // <- path to image file
    ui->label_12->setPixmap(pm);
    ui->label_12->setScaledContents(true);
}




void MainWindow::on_add_image_clicked()
{

    int usrid = ui->usr_id->text().toInt();
    if(usrid!=0)
    {
        Image image;
        image.user_id = usrid;
        QString fileName = QFileDialog::getOpenFileName(
                      this,              // parent
                      "Dialog Caption",  // caption
                      "",                // directory to start with
                      "PNG (*.png);;All Files (*)");  // file name filter
        image.path = fileName.toStdString();

        nameforimage addDialog(this);
        int status = addDialog.exec();
        if(status ==1 ){


        image.name = addDialog.data();
        ui->images->addItem(QString::fromStdString(image.name));
        storage_->addImage(image);
        }
    }

}

void MainWindow::on_remove_image_clicked()
{
    QList<QListWidgetItem * >items = ui->images->selectedItems();
    if(items.count() ==0)
    {
        QMessageBox::warning(this, "Caution","nothing selected");
    }
    else{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Remove?", "Are u sure");
        if(reply == QMessageBox::StandardButton::Yes)
        {
            Image image;
            int usrid = ui->usr_id->text().toInt();
            image.user_id = usrid;
            QListWidgetItem *item = ui->images->currentItem();
            image.name = item->text().toStdString();

            storage_->removeImage(image);
            ui->label_12->clear();
            qDeleteAll(ui->images->selectedItems());

        }
    }
}

void MainWindow::on_images_itemClicked(QListWidgetItem *item)
{
    string it = item->text().toStdString();
    vector<Image> images = storage_->getAllImages();
    for(Image im :images)
    {
        if(im.name == it){
            image(QString::fromStdString(im.path));
        }
    }
}






