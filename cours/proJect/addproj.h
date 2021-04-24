#ifndef ADDPROJ_H
#define ADDPROJ_H

#include <QDialog>
#include <csvlib.h>

namespace Ui {
class addproj;
}

class addproj : public QDialog
{
    Q_OBJECT

public:
    explicit addproj(QWidget *parent = 0);
    ~addproj();
    It_project data();
private:
    Ui::addproj *ui;
};

#endif // ADDPROJ_H
