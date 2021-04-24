#ifndef EXPORT_H
#define EXPORT_H

#include <QDialog>
#include "storage.h"
#include <QFileDialog>

namespace Ui {
class Export;
}

class Export : public QDialog
{
    Q_OBJECT

public:
    explicit Export(QWidget *parent = 0, Storage* storage_ = nullptr, int user_id = 0, QString lang_id = 0);
    ~Export();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Export *ui;
    Storage * storage_ = nullptr;
    int usr_id;
    QString lang_id_;
};

#endif // EXPORT_H
