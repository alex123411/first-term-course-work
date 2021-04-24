#include "import.h"
#include "ui_import.h"


using namespace std;

Import::Import(QWidget *parent, Storage * storage, int user_id,QString lang_id) :
    QDialog(parent),
    ui(new Ui::Import)
{
    this->storage_ = storage;
    ui->setupUi(this);
    this->usr_id = user_id;
    this->lang_id_ = lang_id;
}

Import::~Import()
{
    delete ui;
}

void Import::on_pushButton_clicked()
{
    qDebug() << "openfile";
    QString fileName = QFileDialog::getOpenFileName(
                  this,              // parent
                  "Dialog Caption",  // caption
                  "",                // directory to start with
                  "CSV (*.csv);;All Files (*)");  // file name filter
    if(fileName != "")
    {
        vector<ProgLanguage> languages;
        vector<ProgLanguage> languages_ = storage_->getAllProgLanguages();
        languages = retlanguages(fileName);
        int dont = 0;
        for(ProgLanguage language:languages)
        {
            if(language.fullname == "iKpuck"){dont = 1;};
        }
        if(dont != 1)
        {
            int prove = 0;
            for(ProgLanguage lang: languages)
            {
                for(ProgLanguage lang_: languages_)
                {
                    if(lang.fullname==lang_.fullname && lang.user_id==lang_.user_id && lang.year==lang_.year )
                    {
                        prove = 1;
                    }
                }
                if(prove == 0 && lang.user_id!=0){storage_->insertProgLanguage(lang);}
                prove = 0;
            }
        }
        else{
            QMessageBox msgWarning;
            msgWarning.setText("File format is wrong!");
            msgWarning.setIcon(QMessageBox::Warning);
            msgWarning.setWindowTitle("Caution");
            msgWarning.exec();
        }
    }
}

void Import::on_pushButton_2_clicked()
{
    qDebug() << "openfile";
    QString fileName = QFileDialog::getOpenFileName(
                  this,              // parent
                  "Dialog Caption",  // caption
                  "",                // directory to start with
                  "CSV (*.csv);;All Files (*)");  // file name filter
    if(fileName != "")
    {
        vector<It_project> projects;
        vector<It_project> projects_ = storage_->getAllIt_projects();
        projects = retprojects(fileName);
        int dont = 0;
        for(It_project language:projects)
        {
            if(language.name == "iKpuck"){dont = 1;};
        }
        if(dont != 1)
        {
            int prove = 0;
            for(It_project lang: projects)
            {
                for(It_project lang_: projects_)
                {
                    if( lang.name==lang_.name && lang.start_data==lang_.start_data)
                    {
                        prove = 1;
                    }
                }
                if(prove == 0 && lang.start_data!=0){storage_->insertIt_project(lang);}
                prove = 0;
            }
        }
        else{
            QMessageBox msgWarning;
            msgWarning.setText("File format is wrong!");
            msgWarning.setIcon(QMessageBox::Warning);
            msgWarning.setWindowTitle("Caution");
            msgWarning.exec();
        }
    }
}



void Import::on_pushButton_3_clicked()
{
    this->close();
}
