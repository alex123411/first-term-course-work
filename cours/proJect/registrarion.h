#ifndef REGISTRARION_H
#define REGISTRARION_H

#include <QDialog>
#include <csvlib.h>
namespace Ui {
class registrarion;
}

class registrarion : public QDialog
{
    Q_OBJECT

public:
    explicit registrarion(QWidget *parent = 0);
    ~registrarion();
    User data();
private:
    Ui::registrarion *ui;
};
#endif // REGISTRARION_H
