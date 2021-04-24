#ifndef IMPORT_H
#define IMPORT_H

#include <QDialog>
#include "storage.h"
#include <QFileDialog>
#include <QMessageBox>
namespace Ui {
class Import;
}

class Import : public QDialog
{
    Q_OBJECT

public:
    explicit Import(QWidget *parent = 0, Storage* storage_ = nullptr, int user_id = 0, QString lang_id = 0);
    ~Import();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Import *ui;
    Storage * storage_ = nullptr;
    int usr_id;
    QString lang_id_;
};

#endif // IMPORT_H
