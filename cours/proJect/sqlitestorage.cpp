#include "sqlitestorage.h"


SqliteStorage::SqliteStorage(const string & dir_name) : dir_name_(dir_name)
{
     db_ = QSqlDatabase::addDatabase("QSQLITE");
}

bool SqliteStorage::load()
{
    QString path = QString::fromStdString(this->dir_name_);
    db_.setDatabaseName(path);    // set sqlite database file path
    bool connected = db_.open();  // open db connection
    if (!connected) { return false; }
    return true;
}
bool SqliteStorage::save()
{
    return false;
}

QString hashPassword(QString const & pass) {
   QByteArray pass_ba = pass.toUtf8();
   QByteArray hash_ba = QCryptographicHash::hash(pass_ba, QCryptographicHash::Md5);
   QString pass_hash = QString(hash_ba.toHex());
   return pass_hash;
}

User SqliteStorage::getUserAuth(QString const & username, QString const & password)
{
   QSqlQuery query;
   const char * sql = "SELECT * FROM users "
       "WHERE username = :username AND password_hash = :password_hash;";
   if (!query.prepare(sql))
   {
       QSqlError error = query.lastError();
       throw error;
   }
   query.bindValue(":username", username);
   query.bindValue(":password_hash", hashPassword(password));
   if (!query.exec())
   {
       QSqlError error = query.lastError();
       throw error;
   }
   if (query.next())
   {
       User user;
       user.id = query.value("id").toInt();
       user.username = username;
       //user.fullname = query.value("fullname").toString();
       return user;
   }
   User uu ;
   uu.id = -1;
   return uu;
}

int SqliteStorage::adduser(User newuser)
{
    QSqlQuery query;
    query.prepare("INSERT INTO users ( username, password_hash) VALUES (:username, :password_hash)");

    query.bindValue(":username", newuser.username);
    query.bindValue(":password_hash", hashPassword(newuser.fullname));
    if(!query.exec())
    {
        qDebug() << "addPerson error" << query.lastError();

    }
    QVariant var = query.lastInsertId();
    return var.toInt();
}

vector<ProgLanguage> SqliteStorage::getAllUserProgLanguages(int user_id)
{
    vector<ProgLanguage> ProgLanguages;
    return ProgLanguages;
}

vector<ProgLanguage> SqliteStorage::getAllProgLanguages(void)
{
    vector <ProgLanguage> ProgLanguages;
    QSqlQuery query("SELECT * FROM ProgLanguages");
    ProgLanguage ProgLanguag;
    while (query.next())
    {
        int id = query.value("id").toInt();
        string fullname = query.value("fullname").toString().toStdString();
        int year = query.value("gr").toInt();
        int sec_id = query.value("user_id").toInt();
        ProgLanguag.user_id=sec_id;
        ProgLanguag.id = id;
        ProgLanguag.fullname = fullname;
        ProgLanguag.year = year;
        ProgLanguages.push_back(ProgLanguag);
    }
    query.finish();
    return ProgLanguages;
}
ProgLanguage SqliteStorage::getProgLanguageById(int ProgLanguage_id)
{
    ProgLanguage ProgLanguag;
    ProgLanguage st = {0,"0",0};
    QSqlQuery query;
    query.prepare("SELECT * FROM ProgLanguages WHERE id = :id");
    query.bindValue(":id", ProgLanguage_id);
    if (!query.exec()) {  // do exec if query is prepared SELECT query
       qDebug() << "get person query exec error:" << query.lastError();

       return st ;
    }
    if (query.next()) {
       qDebug() << " found ";
       int id = query.value("id").toInt();
       string fullname = query.value("fullname").toString().toStdString();
       int year = query.value("gr").toInt();
       ProgLanguag.id = id;
       ProgLanguag.fullname = fullname;
       ProgLanguag.year = year;
       return ProgLanguag;
    } else {
       qDebug() << " not found ";
    }
    return st;
}
bool SqliteStorage::updateProgLanguage(const ProgLanguage &ProgLanguag)
{
    QSqlQuery query;
    query.prepare("UPDATE ProgLanguages SET fullname = :fullname, gr = :gr WHERE id = :id");
    query.bindValue(":fullname",QString::fromStdString(ProgLanguag.fullname));
    query.bindValue(":gr",QString::number(ProgLanguag.year));
    query.bindValue(":id", ProgLanguag.id);
    if (!query.exec()){
        qDebug() << "update ProgLanguage query exec error:" << query.lastError();
        return false;
    }
    if (query.numRowsAffected()==0)
    {
        return false;
    }
    return true;
}
bool SqliteStorage::removeProgLanguage(int ProgLanguage_id)
{
    QSqlQuery query;
    if (!query.prepare("DELETE FROM ProgLanguages WHERE id = :id")){
        qDebug() << "deletePerson query prepare error:" << query.lastError();
        // return or throw or do smth else
    }
    query.bindValue(":id", ProgLanguage_id);
    if (!query.exec()){
        return false;
    }
    if (query.numRowsAffected()==0)
    {
        return false;
    }
    return true;
}
int SqliteStorage::insertProgLanguage(const ProgLanguage &ProgLanguag)
{

    QSqlQuery query;
    query.prepare("INSERT INTO ProgLanguages (fullname, gr, user_id) VALUES (:fullname, :gr, :user_id)");
    query.bindValue(":fullname", QString::fromStdString(ProgLanguag.fullname));
    query.bindValue(":gr", ProgLanguag.year);
    query.bindValue(":user_id", ProgLanguag.user_id);
    if(!query.exec())
    {
        qDebug() << "addPerson error" << query.lastError();

    }
    QVariant var = query.lastInsertId();
    return var.toInt();
}

//Links
vector<Links> SqliteStorage::getAllLinks(void)
{
    vector<Links> links;
    QSqlQuery query("SELECT * FROM links");
    Links link;
    while(query.next())
    {
        link.id = query.value("id").toInt();
        link.ProgLanguage_id = query.value("ProgLanguages_id").toInt();
        link.It_project_id = query.value("It_project_id").toInt();
        links.push_back(link);
    }
    query.finish();
    return links;
}
vector <User> SqliteStorage::getallusers(void)
{
    vector <User> ProgLanguages;
    QSqlQuery query("SELECT * FROM users");
    User ProgLanguage;
    while (query.next())
    {
        int id = query.value("id").toInt();
        QString fullname = query.value("username").toString();
        QString year = "0";

        ProgLanguage.id = id;
        ProgLanguage.fullname = year;
        ProgLanguage.username = fullname;
        ProgLanguages.push_back(ProgLanguage);
    }
    qDebug() << "123";
    query.finish();
    return ProgLanguages;
}
// It_projects
vector<It_project> SqliteStorage::getAllIt_projects(void)
{
    vector <It_project> ProgLanguages;
    QSqlQuery query("SELECT * FROM It_projects");
    It_project ProgLanguage;
    while (query.next())
    {
        int id = query.value("id").toInt();
        string fullname = query.value("name").toString().toStdString();
        int year = query.value("yea").toInt();

        ProgLanguage.id = id;
        ProgLanguage.name = fullname;
        ProgLanguage.start_data = year;
        ProgLanguages.push_back(ProgLanguage);
    }
    query.finish();
    return ProgLanguages;
}

vector<Image> SqliteStorage::getAllImages(void)
{
    vector<Image> images;
    QSqlQuery query("SELECT * FROM images");
    Image ProgLanguage;
    while (query.next())
    {
        int id = query.value("user_id").toInt();
        string path = query.value("path_").toString().toStdString();
        string name = query.value("name").toString().toStdString();

        ProgLanguage.user_id = id;
        ProgLanguage.name = name;
        ProgLanguage.path = path;
        images.push_back(ProgLanguage);
    }
    query.finish();
    return images;
}

bool SqliteStorage::removeImage(Image image)
{
    QSqlQuery query;
    if (!query.prepare("DELETE FROM images WHERE user_id = :id and name = :name")){
        qDebug() << "deletePerson query prepare error:" << query.lastError();
        // return or throw or do smth else
    }
    query.bindValue(":id", image.user_id);
    query.bindValue(":name", QString::fromStdString(image.name));
    if (!query.exec()){
        return false;
    }
    if (query.numRowsAffected()==0)
    {
        return false;
    }
    return true;

}
int SqliteStorage::addImage(Image image)
{
    QSqlQuery query;
    query.prepare("INSERT INTO images (user_id, path_, name) VALUES (:id, :path_, :name)");
    query.bindValue(":id", image.user_id);
    query.bindValue(":path_", QString::fromStdString(image.path));
    query.bindValue(":name", QString::fromStdString(image.name));
    if(!query.exec())
    {
        qDebug() << "addPerson error" << query.lastError();

    }
    QVariant var = query.lastInsertId();
    return var.toInt();
}

It_project SqliteStorage::getIt_projectById(int It_project_id)
{
    It_project ProgLanguage;
    It_project st = {0,"0",0};
    QSqlQuery query;
    query.prepare("SELECT * FROM It_projects WHERE id = :id");
    query.bindValue(":id", It_project_id);
    if (!query.exec()) {  // do exec if query is prepared SELECT query
       qDebug() << "get person query exec error:" << query.lastError();

       return st ;
    }
    if (query.next()) {
       qDebug() << " found ";
       int id = query.value("id").toInt();
       string fullname = query.value("name").toString().toStdString();
       int year = query.value("yea").toInt();
       ProgLanguage.id = id;
       ProgLanguage.name = fullname;
       ProgLanguage.start_data = year;
       return ProgLanguage;
    } else {
       qDebug() << " not found ";
    }
    return st;
}

bool SqliteStorage::updateIt_project(const It_project &It_project)
{
    QSqlQuery query;
    query.prepare("UPDATE It_projects SET name = :name, yea = :yea WHERE id = :id");
    query.bindValue(":name",QString::fromStdString(It_project.name));
    query.bindValue(":yea",QString::number(It_project.start_data));
    query.bindValue(":id", It_project.id);
    if (!query.exec()){
        qDebug() << "update ProgLanguage query exec error:" << query.lastError();
        return false;
    }
    if (query.numRowsAffected()==0)
    {
        return false;
    }
    return true;
}
bool SqliteStorage::removeIt_project(int It_project_id)
{
    QSqlQuery query;
    if (!query.prepare("DELETE FROM It_projects WHERE id = :id")){
        qDebug() << "deletePerson query prepare error:" << query.lastError();
        // return or throw or do smth else
    }
    query.bindValue(":id", It_project_id);
    if (!query.exec()){
        return false;
    }
    if (query.numRowsAffected()==0)
    {
        return false;
    }
    return true;

}
int SqliteStorage::insertIt_project(const It_project &It_project)
{
    QSqlQuery query;
    query.prepare("INSERT INTO It_projects (name, yea) VALUES (:fullname, :gr)");
    query.bindValue(":fullname", QString::fromStdString(It_project.name));
    query.bindValue(":gr", It_project.start_data);
    if(!query.exec())
    {
        qDebug() << "addPerson error" << query.lastError();

    }
    QVariant var = query.lastInsertId();
    return var.toInt();
}

int SqliteStorage::addLink(Links link)
{
    QSqlQuery query;
    query.prepare("INSERT INTO links (id, ProgLanguages_id, It_project_id) VALUES (:id, :plid, :ipid)");
    query.bindValue(":id", link.id);
    query.bindValue(":plid", link.ProgLanguage_id);
    query.bindValue(":ipid", link.It_project_id);
    if(!query.exec())
    {
        qDebug() << "addPerson error" << query.lastError();

    }
    QVariant var = query.lastInsertId();
    return var.toInt();
}

bool SqliteStorage::deleteLink(int Language_id)
{
    QSqlQuery query;
    if (!query.prepare("DELETE FROM links WHERE ProgLanguages_id = :id")){
        qDebug() << "deletePerson query prepare error:" << query.lastError();
        // return or throw or do smth else
    }
    query.bindValue(":id", Language_id);
    if (!query.exec()){
        return false;
    }
    if (query.numRowsAffected()==0)
    {
        return false;
    }
    return true;
}

bool SqliteStorage::deleteLinkforsecondentity(int user_id,int Language_id, int project_id)
{
    QSqlQuery query;
    if (!query.prepare("DELETE FROM links WHERE id = :usr_id and ProgLanguages_id = :id and It_project_id = :pr_id ")){
        qDebug() << "deletePerson query prepare error:" << query.lastError();
        // return or throw or do smth else
    }
    query.bindValue(":usr_id", user_id);
    query.bindValue(":id", Language_id);
    query.bindValue(":pr_id", project_id);
    if (!query.exec()){
        return false;
    }
    if (query.numRowsAffected()==0)
    {
        return false;
    }
    return true;
}







