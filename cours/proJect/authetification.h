#ifndef AUTHETIFICATION_H
#define AUTHETIFICATION_H

#include <QDialog>
#include "storage.h"
#include "registrarion.h"
#include <QMessageBox>

namespace Ui {
class authetification;
}

class authetification : public QDialog
{
    Q_OBJECT

public:
    explicit authetification(QWidget *parent = 0,Storage * storage=0);
    ~authetification();
    User data();
private slots:
    void on_pushButton_clicked();

private:
    Ui::authetification *ui;
    Storage * storage_;
};

#endif // AUTHETIFICATION_H
