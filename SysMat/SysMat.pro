#-------------------------------------------------
#
# Project created by QtCreator 2017-05-03T21:39:05
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SysMat
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    consultar.cpp \
    addrem.cpp \
    client.cpp \
    usuario.cpp \
    admin.cpp \
    professor.cpp \
    aluno.cpp \
    horarioaulas.cpp \
    disciplinas.cpp \
    ofertada.cpp \
    inscricao.cpp

HEADERS  += mainwindow.h \
    consultar.h \
    addrem.h \
    globaldefines.h \
    client.h \
    usuario.h \
    admin.h \
    professor.h \
    aluno.h \
    horarioaulas.h \
    disciplinas.h \
    ofertada.h \
    inscricao.h

FORMS    += mainwindow.ui \
    client.ui
