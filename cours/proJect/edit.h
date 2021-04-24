#ifndef EDIT_H
#define EDIT_H

#include <QDialog>
#include "storage.h"
#include "mainwindow.h"
#include "addproj.h"
#include "editproj.h"
#include <QMessageBox>

namespace Ui {
class edit;
}

class edit : public QDialog
{
    Q_OBJECT

public:
    explicit edit(QWidget *parent = 0, Storage* storage_ = nullptr, int user_id = 0, QString lang_id = 0);
    ~edit();
    ProgLanguage dat();
    void pl(vector<QString>strings);
private slots:
    void on_addproj_clicked();

    void on_editproj_clicked();

    void on_removeproj_clicked();

    void on_listWidgetLanguage_itemClicked(QListWidgetItem *item);

    void updatewidget();
    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::edit *ui;
    Storage * storage_ = nullptr;
    int usr_id;
    QString lang_id_;
};

#endif // EDIT_H
