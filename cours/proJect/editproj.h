#ifndef EDITPROJ_H
#define EDITPROJ_H
#include <csvlib.h>
#include <QDialog>

namespace Ui {
class editproj;
}

class editproj : public QDialog
{
    Q_OBJECT

public:
    explicit editproj(QWidget *parent = 0);
    ~editproj();
    It_project dat();
private slots:


    int on_pushButton_clicked();



    int on_pushButton_2_clicked();

private:
    Ui::editproj *ui;
};

#endif // EDITPROJ_H
