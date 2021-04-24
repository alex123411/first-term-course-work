#pragma once


#include <QSqlDatabase>
#include <QtSql>
#include <QSqlQuery>
#include "storage.h"
#include <QCryptographicHash>

using namespace std;

class SqliteStorage : public Storage
{
    const string dir_name_;
    QSqlDatabase db_;
 public:
   SqliteStorage(const string & dir_name);

    bool load();
    bool save();

   // languags
    vector<ProgLanguage> getAllProgLanguages(void) ;
    ProgLanguage getProgLanguageById(int ProgLanguage_id) ;
    bool updateProgLanguage(const ProgLanguage &ProgLanguage) ;
    bool removeProgLanguage(int ProgLanguage_id) ;
    int insertProgLanguage(const ProgLanguage &ProgLanguage) ;

   // It_projects
    vector<It_project> getAllIt_projects(void) ;
    It_project getIt_projectById(int It_project_id) ;
    bool updateIt_project(const It_project &It_project) ;
    bool removeIt_project(int It_project_id) ;
    int insertIt_project(const It_project &It_project) ;

    User getUserAuth(QString const & username, QString const & password);
    vector<ProgLanguage> getAllUserProgLanguages(int user_id);

    vector<Links> getAllLinks(void) ;

    int addLink(Links link);
    bool deleteLink(int Language_id);
    vector <User> getallusers(void);
    int adduser(User newuser);
    bool deleteLinkforsecondentity(int user_id,int Language_id, int project_id);

     vector<Image> getAllImages(void);
      bool removeImage(Image image);
      int addImage(Image image);

};
