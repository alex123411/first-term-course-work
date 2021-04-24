/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_storage;
    QAction *newst;
    QAction *openst;
    QAction *logout;
    QAction *import_2;
    QAction *export_2;
    QAction *actionExit;
    QWidget *centralWidget;
    QListWidget *listWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *editbut;
    QPushButton *remove;
    QPushButton *add;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *names;
    QLabel *groups;
    QLabel *label_5;
    QLabel *ids;
    QPushButton *auth;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *usr_id;
    QLabel *username;
    QLabel *storage__;
    QLabel *current_st;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *prev;
    QPushButton *next;
    QLineEdit *lineEdit;
    QPushButton *search;
    QLabel *label_10;
    QListWidget *images;
    QPushButton *add_image;
    QPushButton *remove_image;
    QLabel *label_11;
    QLabel *label_12;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuimport;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(921, 435);
        actionOpen_storage = new QAction(MainWindow);
        actionOpen_storage->setObjectName(QStringLiteral("actionOpen_storage"));
        newst = new QAction(MainWindow);
        newst->setObjectName(QStringLiteral("newst"));
        QFont font;
        newst->setFont(font);
        openst = new QAction(MainWindow);
        openst->setObjectName(QStringLiteral("openst"));
        logout = new QAction(MainWindow);
        logout->setObjectName(QStringLiteral("logout"));
        import_2 = new QAction(MainWindow);
        import_2->setObjectName(QStringLiteral("import_2"));
        export_2 = new QAction(MainWindow);
        export_2->setObjectName(QStringLiteral("export_2"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(20, 200, 221, 171));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(250, 260, 161, 120));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        editbut = new QPushButton(gridLayoutWidget);
        editbut->setObjectName(QStringLiteral("editbut"));

        gridLayout->addWidget(editbut, 2, 0, 1, 1);

        remove = new QPushButton(gridLayoutWidget);
        remove->setObjectName(QStringLiteral("remove"));

        gridLayout->addWidget(remove, 3, 0, 1, 1);

        add = new QPushButton(gridLayoutWidget);
        add->setObjectName(QStringLiteral("add"));

        gridLayout->addWidget(add, 1, 0, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 140, 67, 17));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(270, 170, 121, 17));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(250, 200, 67, 17));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(250, 220, 121, 17));
        names = new QLabel(centralWidget);
        names->setObjectName(QStringLiteral("names"));
        names->setGeometry(QRect(380, 160, 111, 17));
        groups = new QLabel(centralWidget);
        groups->setObjectName(QStringLiteral("groups"));
        groups->setGeometry(QRect(380, 180, 67, 17));
        groups->setFrameShadow(QFrame::Plain);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(250, 240, 31, 17));
        ids = new QLabel(centralWidget);
        ids->setObjectName(QStringLiteral("ids"));
        ids->setGeometry(QRect(380, 200, 67, 17));
        auth = new QPushButton(centralWidget);
        auth->setObjectName(QStringLiteral("auth"));
        auth->setEnabled(true);
        auth->setGeometry(QRect(20, 30, 121, 25));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(210, 10, 67, 17));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(210, 30, 111, 17));
        usr_id = new QLabel(centralWidget);
        usr_id->setObjectName(QStringLiteral("usr_id"));
        usr_id->setGeometry(QRect(360, 10, 67, 17));
        username = new QLabel(centralWidget);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(360, 30, 67, 17));
        storage__ = new QLabel(centralWidget);
        storage__->setObjectName(QStringLiteral("storage__"));
        storage__->setGeometry(QRect(30, 10, 141, 17));
        current_st = new QLabel(centralWidget);
        current_st->setObjectName(QStringLiteral("current_st"));
        current_st->setGeometry(QRect(100, 170, 16, 17));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(130, 170, 16, 17));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(150, 170, 16, 17));
        prev = new QPushButton(centralWidget);
        prev->setObjectName(QStringLiteral("prev"));
        prev->setGeometry(QRect(20, 170, 51, 25));
        next = new QPushButton(centralWidget);
        next->setObjectName(QStringLiteral("next"));
        next->setGeometry(QRect(190, 170, 51, 25));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(20, 100, 221, 25));
        search = new QPushButton(centralWidget);
        search->setObjectName(QStringLiteral("search"));
        search->setGeometry(QRect(250, 100, 89, 25));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 80, 291, 17));
        images = new QListWidget(centralWidget);
        images->setObjectName(QStringLiteral("images"));
        images->setGeometry(QRect(500, 20, 256, 192));
        add_image = new QPushButton(centralWidget);
        add_image->setObjectName(QStringLiteral("add_image"));
        add_image->setGeometry(QRect(770, 80, 101, 25));
        remove_image = new QPushButton(centralWidget);
        remove_image->setObjectName(QStringLiteral("remove_image"));
        remove_image->setGeometry(QRect(770, 130, 101, 25));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(510, 0, 101, 17));
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(500, 220, 281, 151));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 921, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuimport = new QMenu(menuBar);
        menuimport->setObjectName(QStringLiteral("menuimport"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuimport->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(openst);
        menuFile->addSeparator();
        menuFile->addAction(logout);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuimport->addSeparator();
        menuimport->addAction(import_2);
        menuimport->addSeparator();
        menuimport->addAction(export_2);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionOpen_storage->setText(QApplication::translate("MainWindow", "Open storage", Q_NULLPTR));
        newst->setText(QApplication::translate("MainWindow", "New Storage", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        newst->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        openst->setText(QApplication::translate("MainWindow", "Open Storage", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        openst->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        logout->setText(QApplication::translate("MainWindow", "Logout", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        logout->setShortcut(QApplication::translate("MainWindow", "Ctrl+L", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        import_2->setText(QApplication::translate("MainWindow", "Import", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        import_2->setShortcut(QApplication::translate("MainWindow", "Ctrl+I", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        export_2->setText(QApplication::translate("MainWindow", "Export", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        export_2->setShortcut(QApplication::translate("MainWindow", "Ctrl+E", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionExit->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionExit->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        editbut->setText(QApplication::translate("MainWindow", "edit", Q_NULLPTR));
        remove->setText(QApplication::translate("MainWindow", "remove", Q_NULLPTR));
        add->setText(QApplication::translate("MainWindow", "add", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Entities:", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Selected entity:", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Name:", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Foundation year:", Q_NULLPTR));
        names->setText(QString());
        groups->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "Id:", Q_NULLPTR));
        ids->setText(QString());
        auth->setText(QApplication::translate("MainWindow", "log in", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Your id:", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Your user name:", Q_NULLPTR));
        usr_id->setText(QString());
        username->setText(QString());
        storage__->setText(QApplication::translate("MainWindow", "Storage closed", Q_NULLPTR));
        current_st->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "/", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "10", Q_NULLPTR));
        prev->setText(QApplication::translate("MainWindow", "prev", Q_NULLPTR));
        next->setText(QApplication::translate("MainWindow", "next", Q_NULLPTR));
        search->setText(QApplication::translate("MainWindow", "search", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Input smthing to see language/languages", Q_NULLPTR));
        add_image->setText(QApplication::translate("MainWindow", "add image", Q_NULLPTR));
        remove_image->setText(QApplication::translate("MainWindow", "remove image", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "user`s images", Q_NULLPTR));
        label_12->setText(QString());
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
        menuimport->setTitle(QApplication::translate("MainWindow", "Format", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
