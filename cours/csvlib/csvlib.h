#ifndef CSVLIB_H
#define CSVLIB_H

#include <iostream>
#include <string>
#include <QString>
#include <algorithm>
#include <vector>
#include <set>
#include <iterator>
#include <fstream>

using namespace std;

struct ProgLanguage{
    int id;
    string fullname;
    int year;
    int user_id;
};

struct It_project{
    int id;
    string name;
    int start_data;
};

struct Data
{
   int id;
   int user_id;
   QString data;
};

struct User
{
   int id;
   QString username;
   QString fullname;
};

struct Links
{
    int id;
    int ProgLanguage_id;
    int It_project_id;
};

struct Image
{
    int user_id;
    string path;
    string name;
};
class Csvlib
{

public:
    Csvlib();
    void print();
};

vector<ProgLanguage> retlanguages(QString path);
void explanguages(vector<ProgLanguage> languages, QString path, int usr_id);

vector<It_project> retprojects(QString path);
void expprojects(vector<It_project> projects, QString path, int usr_id, vector<Links> links);

#endif // CSVLIB_H
