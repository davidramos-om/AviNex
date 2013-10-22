#-------------------------------------------------
#
# Project created by QtCreator 2012-08-30T23:18:24
#
#-------------------------------------------------

QT       += core gui


TARGET = AviNex
TEMPLATE = app

SOURCES += \
        main.cpp \
        graphwidget.cpp \
    principal.cpp \
    arista.cpp \
    nodo.cpp \
    util.cpp \
    dialogubicaciones.cpp \
    algdijkstra.cpp


HEADERS += \
        graphwidget.h \
    principal.h \
    arista.h \
    nodo.h \
    util.h \
    dialogubicaciones.h \
    Grafo.h \
    algdijkstra.h

FORMS += \
    principal.ui \
    dialogubicaciones.ui

RESOURCES += \
    recursos.qrc
