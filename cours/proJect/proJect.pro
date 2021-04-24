#-------------------------------------------------
#
# Project created by QtCreator 2020-05-24T18:28:59
#
#-------------------------------------------------

QT       += core gui
QT += sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = proJect
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    add.cpp \
    authetification.cpp \
    edit.cpp \
    sqlitestorage.cpp \
    registrarion.cpp \
    addproj.cpp \
    editproj.cpp \
    export.cpp \
    import.cpp \
    nameforimage.cpp

HEADERS += \
        mainwindow.h \
    storage.h \
    add.h \
    authetification.h \
    edit.h \
    sqlitestorage.h \
    registrarion.h \
    addproj.h \
    editproj.h \
    export.h \
    import.h \
    nameforimage.h

FORMS += \
        mainwindow.ui \
    add.ui \
    authetification.ui \
    edit.ui \
    registrarion.ui \
    addproj.ui \
    editproj.ui \
    export.ui \
    import.ui \
    nameforimage.ui

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../csvlib/release/ -lcsvlib
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../csvlib/debug/ -lcsvlib
else:unix: LIBS += -L$$OUT_PWD/../csvlib/ -lcsvlib

INCLUDEPATH += $$PWD/../csvlib
DEPENDPATH += $$PWD/../csvlib

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../csvlib/release/libcsvlib.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../csvlib/debug/libcsvlib.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../csvlib/release/csvlib.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../csvlib/debug/csvlib.lib
else:unix: PRE_TARGETDEPS += $$OUT_PWD/../csvlib/libcsvlib.a
