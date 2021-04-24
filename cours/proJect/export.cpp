#include "export.h"
#include "ui_export.h"


using namespace std;

Export::Export(QWidget *parent, Storage * storage, int user_id, QString lang_id) :
    QDialog(parent),
    ui(new Ui::Export)
{
    this->storage_ = storage;
    ui->setupUi(this);
    this->usr_id = user_id;
    this->lang_id_ = lang_id;
}

Export::~Export()
{
    delete ui;
}

void Export::on_pushButton_clicked()
{
    qDebug() << "openfile";
    QString fileName = QFileDialog::getOpenFileName(
                  this,              // parent
                  "Dialog Caption",  // caption
                  "",                // directory to start with
                  "CSV (*.csv);;All Files (*)");  // file name filter
    if(fileName != "")
    {
        vector<ProgLanguage> languages = storage_->getAllProgLanguages();
        explanguages(languages,fileName,usr_id);
    }
}

void Export::on_pushButton_2_clicked()
{
    qDebug() << "openfile";
    QString fileName = QFileDialog::getOpenFileName(
                  this,              // parent
                  "Dialog Caption",  // caption
                  "",                // directory to start with
                  "CSV (*.csv);;All Files (*)");  // file name filter
    if(fileName != "")
    {
        vector<It_project> projects = storage_->getAllIt_projects();
        vector<Links> links = storage_->getAllLinks();
        expprojects(projects,fileName,usr_id,links);
    }

}

void Export::on_pushButton_3_clicked()
{
    this->close();
}


