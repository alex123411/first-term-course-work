#ifndef NAMEFORIMAGE_H
#define NAMEFORIMAGE_H

#include <QDialog>
#include <string>
#include <iostream>
using namespace std;

namespace Ui {
class nameforimage;
}

class nameforimage : public QDialog
{
    Q_OBJECT

public:
    explicit nameforimage(QWidget *parent = 0);
    ~nameforimage();
    string data();

private:
    Ui::nameforimage *ui;

};

#endif // NAMEFORIMAGE_H
