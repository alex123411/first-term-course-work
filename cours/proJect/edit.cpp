#include "edit.h"
#include "ui_edit.h"


edit::edit(QWidget *parent, Storage * storage, int user_id,QString lang_id) :
    QDialog(parent),
    ui(new Ui::edit)
{
    this->storage_ = storage;
    ui->setupUi(this);
    this->usr_id = user_id;
    this->lang_id_ = lang_id;

    vector<It_project> projects =  storage_->getAllIt_projects();
    for(It_project project: projects)
    {
        QString itm = QString::fromStdString(project.name);
        ui->listWidget->addItem(itm);
    }
}

edit::~edit()
{
    delete ui;
}

ProgLanguage edit::dat()
{

    ProgLanguage ProgLanguag;
    QString fullname = ui->Newname->text();
    QString year = ui->NewYear->text();

    ProgLanguag.fullname = fullname.toStdString();
    ProgLanguag.id = -1;
    ProgLanguag.year = year.toInt();
    return ProgLanguag;
}

void edit::pl(vector<QString>strings)
{
    ui->listWidgetLanguage->clear();
    for(QString str: strings)
    {
        ui->listWidgetLanguage->addItem(str);
    }
}

void edit::on_addproj_clicked()
{
    addproj addDialog(this);
    Links lin;
    int lan_id = lang_id_.toInt();
    lin.ProgLanguage_id = lan_id;
    lin.id = usr_id;
    int status = addDialog.exec();
    if (status == 1)
    {
        It_project ProgLanguag = addDialog.data();
        lin.It_project_id = storage_->insertIt_project(ProgLanguag);
        QString str =  QString::fromStdString(ProgLanguag.name);
        ui->listWidgetLanguage->addItem(str);
        ui->listWidget->addItem(str);
        storage_->addLink(lin);
    }
}
void edit::updatewidget()
{
    ui->listWidgetLanguage->clear();


}
void edit::on_editproj_clicked()
{
    QString num = ui->ids->text();
    int id = num.toInt();
    QList<QListWidgetItem * >items = ui->listWidgetLanguage->selectedItems();
    It_project editedproject;
    if(items.count() ==0)
    {
        qDebug() << "nothing selected";
    }
    else
    {
        editproj addDialog(this);
        addDialog.exec();
        editedproject = addDialog.dat();
        if(editedproject.name!="")
        {
            editedproject.id = id;
            storage_->updateIt_project(editedproject);
            QList<QListWidgetItem * >items = ui->listWidgetLanguage->selectedItems();
            QListWidgetItem * selectedItem = items.at(0);
            QString full = QString::fromStdString(editedproject.name);
            vector<It_project> projecs = storage_->getAllIt_projects();
            ui->listWidget->clear();
            ui->ids_2->clear();
            ui->names_2->clear();
            ui->starts_2->clear();
            for(It_project pl:projecs)
            {

                ui->listWidget->addItem(QString::fromStdString(pl.name));
            }
            selectedItem->setText(full);
            ui->names->setText(full);
            ui->starts->setText(QString::number(editedproject.start_data));
        }
    }
}

void edit::on_removeproj_clicked()
{
    QList<QListWidgetItem * >items = ui->listWidgetLanguage->selectedItems();
    if(items.count() ==0)
    {
        qDebug() << "nothing selected";
    }
    else{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Remove?", "Are u sure");
    if(reply == QMessageBox::StandardButton::Yes)
    {
        QString ids = ui->ids->text();
        int it_proj_id = ids.toInt();
        int id = usr_id;
        int proglang_id = lang_id_.toInt();
        qDebug() << proglang_id;
        storage_->deleteLinkforsecondentity(id,proglang_id,it_proj_id);
        QList<QListWidgetItem * >items = ui->listWidgetLanguage->selectedItems();

            QListWidgetItem * selectedItem = items.at(0);
            int i = ui->listWidgetLanguage->row(selectedItem);
            ui->listWidgetLanguage->takeItem(i);
            delete selectedItem;

        ui->starts->clear();
        ui->ids->clear();
        ui->names->clear();
    }
    }

}

void edit::on_listWidgetLanguage_itemClicked(QListWidgetItem *item)
{
    vector<It_project>projects = storage_->getAllIt_projects();
     QString seltext = item->text();
     string str = seltext.toStdString();
    for(It_project proj:projects)
    {
        if(proj.name == str)
        {
            ui->ids->setText(QString::number(proj.id));
            ui->names->setText(QString::fromStdString(proj.name));
            ui->starts->setText(QString::number(proj.start_data));

        }
    }
}

void edit::on_listWidget_itemClicked(QListWidgetItem *item)
{
    vector<It_project>projects = storage_->getAllIt_projects();
     QString seltext = item->text();
     string str = seltext.toStdString();
    for(It_project proj:projects)
    {
        if(proj.name == str)
        {
            ui->ids_2->setText(QString::number(proj.id));
            ui->names_2->setText(QString::fromStdString(proj.name));
            ui->starts_2->setText(QString::number(proj.start_data));

        }
    }
}

void edit::on_pushButton_clicked()
{
    if(ui->ids_2->text()!= "")
    {
        int lang_id = lang_id_.toInt();
        QString id = ui->ids_2->text();
        vector<Links> links = storage_->getAllLinks();
        Links link;
        link.id = usr_id;
        link.It_project_id = id.toInt();
        link.ProgLanguage_id = lang_id;
        int prove = 0;
        for(Links ll: links)
        {
            if(ll.id==link.id && ll.It_project_id == link.It_project_id && ll.ProgLanguage_id == link.ProgLanguage_id)
            {
                prove =1;
            }
        }
        if(prove != 1){
            storage_->addLink(link);
            ui->listWidgetLanguage->addItem(ui->names_2->text());
        }
    }
    else{QMessageBox::warning(this,"caution!","nothing selected!");}
}







void edit::on_pushButton_2_clicked()
{
    this->close();
}
