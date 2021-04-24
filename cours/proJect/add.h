#ifndef ADD_H
#define ADD_H

#include <QDialog>
#include <csvlib.h>
namespace Ui {
class add;
}

class add : public QDialog
{
    Q_OBJECT

public:
    explicit add(QWidget *parent = 0);
    ~add();
    ProgLanguage data();
private:
    Ui::add *ui;
};

#endif // ADD_H
