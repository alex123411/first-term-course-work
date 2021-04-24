#include "csvlib.h"
#include <QDebug>

using namespace std;
Csvlib::Csvlib()
{
}

vector<ProgLanguage>  retlanguages(QString path)
{
    ifstream check;
    check.open(path.toStdString());
    string s;
    getline(check,s,'\n');
    int i,dots = 0;
    qDebug() << "123";
    while(s[i]!='\n')
    {
        if(s[i]==',')
        {
            dots++;
        }
        i++;
    }
    qDebug() << i;
    check.close();
    if(dots%3==0)
    {
        vector<ProgLanguage> languages;
        ProgLanguage language;
        string str;
        ifstream input;
        QString transfor;
        string path_ = path.toStdString();
        input.open(path_);
        while (input.good())
        {
            getline(input,str,',');
            transfor = QString::fromStdString(str);
            language.id = transfor.toInt();
            getline(input,str,',');
            language.fullname = str;
            getline(input,str,',');
            transfor = QString::fromStdString(str);
            language.year = transfor.toInt();
            getline(input,str,'\n');
            transfor = QString::fromStdString(str);
            language.user_id = transfor.toInt();
            languages.push_back(language);
        }
        input.close();
        return languages;
    }
    else
    {
        ProgLanguage lang ;
        lang.fullname = "iKpuck";
        vector<ProgLanguage> languages1;
        languages1.push_back(lang);
        return languages1;
    }
}

vector<It_project> retprojects(QString path)
{
    ifstream check;
    check.open(path.toStdString());
    string s;
    getline(check,s,'\n');
    int i,dots = 0;
    qDebug() << "123";
    while(s[i]!='\n')
    {
        if(s[i]==',')
        {
            dots++;
        }
        i++;
    }
    qDebug() << i;
    check.close();
    if(dots%2==0)
    {
        vector<It_project> projects;
        It_project project;
        string str;
        ifstream input;
        QString transfor;
        string path_ = path.toStdString();
        input.open(path_);
        while (input.good())
        {
            getline(input,str,',');
            transfor = QString::fromStdString(str);
            project.id = transfor.toInt();
            getline(input,str,',');
            project.name = str;
            getline(input,str,'\n');
            transfor = QString::fromStdString(str);
            project.start_data = transfor.toInt();
            projects.push_back(project);
        }
        input.close();
        return projects;
    }
    else
    {
        It_project lang ;
        lang.name = "iKpuck";
        vector<It_project> languages1;
        languages1.push_back(lang);
        return languages1;
    }
}

void explanguages(vector<ProgLanguage> languages, QString path, int usr_id)
{
    ofstream out;
    string input;
    QString inn;
    string fileName_ = path.toStdString();
    out.open(fileName_);
    for(ProgLanguage language: languages)
    {
        if(language.user_id == usr_id)
        {
            inn = QString::number(language.id) +","+ QString::fromStdString(language.fullname) +","+ QString::number(language.year) +","+ QString::number(language.user_id) + "\n";
            input = inn.toStdString();
            out << input;
        }
    }
    out.close();
}

void expprojects(vector<It_project> projects, QString path, int usr_id, vector<Links> links)
{
    ofstream out;
    string input;
    QString inn;
    string fileName_ = path.toStdString();
    out.open(fileName_);
    vector<string> strs;
    for(Links link: links)
    {
        for(It_project project: projects)
        {
            if(link.id == usr_id && project.id == link.It_project_id)
            {
                inn = QString::number(project.id) +","+ QString::fromStdString(project.name) +","+ QString::number(project.start_data) + "\n";
                input = inn.toStdString();
                strs.push_back(input);

            }
        }
    }
        set<string> statistics;
        for (size_t u = 0u; u < strs.size(); ++u)
            {
                if (!statistics.count(strs[u]))
                {
                    statistics.insert(strs[u]);
                }
                else
                {
                    strs.erase(strs.begin() + u--);
                }
            }
        for (const auto &word : strs)
            {
                out << word;
            }
    out.close();
}


