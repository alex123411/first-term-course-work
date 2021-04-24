#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidgetItem>
#include "storage.h"
#include <QDebug>
#include <QMessageBox>
#include "add.h"
#include "edit.h"
#include "authetification.h"
#include <QFileDialog>
#include "storage.h"
#include "sqlitestorage.h"
#include "export.h"
#include "import.h"
#include <QPixmap>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_add_clicked();


    void onOpen();

    void onImport();

    void onExport();

    void onExit();

    void onLogout();

    void on_editbut_clicked();

    void on_remove_clicked();

    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_auth_clicked();

    void re();

    Storage *retStorag();

    void on_next_clicked();

    void on_prev_clicked();

    void pagination();


    void on_search_clicked();

    void image(QString fileName);


    void on_add_image_clicked();

    void on_remove_image_clicked();

    void on_images_itemClicked(QListWidgetItem *item);

private:
    Ui::MainWindow *ui;
    Storage * storage_ = nullptr;
};

#endif // MAINWINDOW_H
