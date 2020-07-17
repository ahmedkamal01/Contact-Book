#-------------------------------------------------
#
# Project created by QtCreator 2015-12-29T22:59:43
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Contact_Book
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    globalvar.cpp \
    dialog.cpp \
    searchcon.cpp

HEADERS  += mainwindow.h \
    globalvar.h \
    dialog.h \
    searchcon.h

FORMS    += mainwindow.ui \
    dialog.ui \
    searchcon.ui
