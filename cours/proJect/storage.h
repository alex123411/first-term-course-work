#pragma once

#include <string>
#include <vector>
#include <QtSql>
#include <csvlib.h>

using namespace std;

class Storage
{
    public:

    virtual bool load() = 0;
    virtual bool save() = 0;

    // ProgLanguages
    virtual vector<ProgLanguage> getAllProgLanguages(void) = 0;
    virtual ProgLanguage getProgLanguageById(int ProgLanguage_id) = 0;
    virtual bool updateProgLanguage(const ProgLanguage &ProgLanguage) = 0;
    virtual bool removeProgLanguage(int ProgLanguage_id) = 0;
    virtual int insertProgLanguage(const ProgLanguage &ProgLanguage) = 0;

    // It_projects
    virtual vector<It_project> getAllIt_projects(void) = 0;
    virtual It_project getIt_projectById(int It_project_id) = 0;
    virtual bool updateIt_project(const It_project &It_project) = 0;
    virtual bool removeIt_project(int It_project_id) = 0;
    virtual int insertIt_project(const It_project &It_project) = 0;

    // users
    virtual User getUserAuth(QString const & username, QString const & password) = 0;
    virtual vector<ProgLanguage> getAllUserProgLanguages(int user_id) = 0;
    virtual vector <User> getallusers(void) = 0 ;
    //links
    virtual vector<Links> getAllLinks(void) = 0;
    virtual int addLink(Links link) = 0;
    virtual bool deleteLink(int Language_id) = 0;
    virtual int adduser(User newuser) = 0;
    virtual bool deleteLinkforsecondentity(int user_id,int Language_id, int project_id) = 0;

    //images
    virtual vector<Image> getAllImages(void) = 0;
    virtual bool removeImage(Image image) = 0;
    virtual int addImage(Image image) = 0;
};
