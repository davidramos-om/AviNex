/********************************************************************************
** Form generated from reading UI file 'principal.ui'
**
** Created: Mon Sep 17 00:26:59 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINCIPAL_H
#define UI_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>
#include "graphwidget.h"

QT_BEGIN_NAMESPACE

class Ui_Principal
{
public:
    QWidget *centralwidget;
    GraphWidget *GraphWidget1;
    QPushButton *btnSetLadron;
    QTextEdit *txtReference;
    QLabel *teinfo;
    QPushButton *btnRestar;
    QLabel *label;
    QLabel *teinfo_2;
    QLCDNumber *lcdControles;
    QLabel *teinfo_3;
    QLabel *teinfo_4;
    QLCDNumber *lcdCosto;
    QPushButton *btnEjecutar;
    QLabel *teRutaCorta;
    QLabel *teinfo_5;
    QLabel *label_2;
    QLabel *teinfo_6;
    QLabel *label_3;
    QLabel *teinfo_7;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *teinfo_8;
    QLabel *label_6;
    QLabel *teinfo_9;
    QPushButton *btnRestar_2;
    QFrame *line;

    void setupUi(QMainWindow *Principal)
    {
        if (Principal->objectName().isEmpty())
            Principal->setObjectName(QString::fromUtf8("Principal"));
        Principal->resize(758, 674);
        Principal->setMinimumSize(QSize(758, 674));
        Principal->setMaximumSize(QSize(758, 674));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/recursos/question-type-multiple-correct.png"), QSize(), QIcon::Normal, QIcon::Off);
        Principal->setWindowIcon(icon);
        Principal->setStyleSheet(QString::fromUtf8("border-image: url(:/recursos/fondonexus.png);"));
        centralwidget = new QWidget(Principal);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        GraphWidget1 = new GraphWidget(centralwidget);
        GraphWidget1->setObjectName(QString::fromUtf8("GraphWidget1"));
        GraphWidget1->setGeometry(QRect(0, 128, 758, 491));
        GraphWidget1->setAutoFillBackground(false);
        GraphWidget1->setStyleSheet(QString::fromUtf8("border-image: url(:/recursos/marcografos.png);"));
        btnSetLadron = new QPushButton(centralwidget);
        btnSetLadron->setObjectName(QString::fromUtf8("btnSetLadron"));
        btnSetLadron->setGeometry(QRect(1, 97, 261, 31));
        btnSetLadron->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.0, cy:0.0, radius:0.0, fx:0.0, fy:0.0, stop:0 rgba(0, 0, 0, 0), stop:0.35 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:0.425 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));\n"
"\n"
"\n"
"border-image: url(:/imagenes/negro4.gif);\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        btnSetLadron->setAutoDefault(false);
        btnSetLadron->setDefault(false);
        btnSetLadron->setFlat(false);
        txtReference = new QTextEdit(centralwidget);
        txtReference->setObjectName(QString::fromUtf8("txtReference"));
        txtReference->setGeometry(QRect(0, 0, 0, 0));
        txtReference->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.0, cy:0.0, radius:0.0, fx:0.0, fy:0.0, stop:0 rgba(0, 0, 0, 0), stop:0.35 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:0.425 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));\n"
"\n"
"\n"
"border-image: url(:/imagenes/negro4.gif);\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        teinfo = new QLabel(centralwidget);
        teinfo->setObjectName(QString::fromUtf8("teinfo"));
        teinfo->setGeometry(QRect(39, 60, 691, 21));
        teinfo->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.0, cy:0.0, radius:0.0, fx:0.0, fy:0.0, stop:0 rgba(0, 0, 0, 0), stop:0.35 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:0.425 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));\n"
"\n"
"\n"
"border-image: url(:/imagenes/negro4.gif);\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        teinfo->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        btnRestar = new QPushButton(centralwidget);
        btnRestar->setObjectName(QString::fromUtf8("btnRestar"));
        btnRestar->setGeometry(QRect(435, 97, 163, 31));
        btnRestar->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.0, cy:0.0, radius:0.0, fx:0.0, fy:0.0, stop:0 rgba(0, 0, 0, 0), stop:0.35 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:0.425 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));\n"
"\n"
"\n"
"border-image: url(:/imagenes/negro4.gif);\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-5, 52, 41, 31));
        label->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.0, cy:0.0, radius:0.0, fx:0.0, fy:0.0, stop:0 rgba(0, 0, 0, 0), stop:0.35 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:0.425 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));\n"
"\n"
"\n"
"border-image: url(:/imagenes/negro4.gif);\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);\n"
"image: url(:/recursos/user_business_info.png);"));
        teinfo_2 = new QLabel(centralwidget);
        teinfo_2->setObjectName(QString::fromUtf8("teinfo_2"));
        teinfo_2->setGeometry(QRect(10, 619, 291, 21));
        teinfo_2->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.0, cy:0.0, radius:0.0, fx:0.0, fy:0.0, stop:0 rgba(0, 0, 0, 0), stop:0.35 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:0.425 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));\n"
"\n"
"\n"
"border-image: url(:/imagenes/negro4.gif);\n"
"color: rgb(0, 170, 255);\n"
"font: 75 12pt \"MS Shell Dlg 2\";\n"
"\n"
""));
        teinfo_2->setAlignment(Qt::AlignCenter);
        lcdControles = new QLCDNumber(centralwidget);
        lcdControles->setObjectName(QString::fromUtf8("lcdControles"));
        lcdControles->setGeometry(QRect(20, 639, 261, 31));
        lcdControles->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.0, cy:0.0, radius:0.0, fx:0.0, fy:0.0, stop:0 rgba(0, 0, 0, 0), stop:0.35 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:0.425 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));\n"
"\n"
"\n"
"border-image: url(:/imagenes/negro4.gif);\n"
"\n"
"color: rgb(0, 85, 255);"));
        lcdControles->setFrameShape(QFrame::NoFrame);
        lcdControles->setFrameShadow(QFrame::Raised);
        lcdControles->setSmallDecimalPoint(false);
        lcdControles->setMode(QLCDNumber::Dec);
        lcdControles->setSegmentStyle(QLCDNumber::Filled);
        teinfo_3 = new QLabel(centralwidget);
        teinfo_3->setObjectName(QString::fromUtf8("teinfo_3"));
        teinfo_3->setGeometry(QRect(290, 619, 251, 21));
        teinfo_3->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.0, cy:0.0, radius:0.0, fx:0.0, fy:0.0, stop:0 rgba(0, 0, 0, 0), stop:0.35 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:0.425 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));\n"
"\n"
"\n"
"border-image: url(:/imagenes/negro4.gif);\n"
"color: rgb(0, 170, 255);\n"
"font: 75 12pt \"MS Shell Dlg 2\";\n"
"\n"
""));
        teinfo_3->setAlignment(Qt::AlignCenter);
        teinfo_4 = new QLabel(centralwidget);
        teinfo_4->setObjectName(QString::fromUtf8("teinfo_4"));
        teinfo_4->setGeometry(QRect(520, 619, 231, 21));
        teinfo_4->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.0, cy:0.0, radius:0.0, fx:0.0, fy:0.0, stop:0 rgba(0, 0, 0, 0), stop:0.35 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:0.425 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));\n"
"\n"
"\n"
"border-image: url(:/imagenes/negro4.gif);\n"
"color: rgb(0, 170, 255);\n"
"font: 75 12pt \"MS Shell Dlg 2\";\n"
"\n"
""));
        teinfo_4->setAlignment(Qt::AlignCenter);
        lcdCosto = new QLCDNumber(centralwidget);
        lcdCosto->setObjectName(QString::fromUtf8("lcdCosto"));
        lcdCosto->setGeometry(QRect(550, 639, 181, 31));
        lcdCosto->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.0, cy:0.0, radius:0.0, fx:0.0, fy:0.0, stop:0 rgba(0, 0, 0, 0), stop:0.35 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:0.425 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));\n"
"\n"
"\n"
"border-image: url(:/imagenes/negro4.gif);\n"
"\n"
"color: rgb(0, 85, 255);"));
        lcdCosto->setFrameShape(QFrame::NoFrame);
        btnEjecutar = new QPushButton(centralwidget);
        btnEjecutar->setObjectName(QString::fromUtf8("btnEjecutar"));
        btnEjecutar->setGeometry(QRect(261, 97, 175, 31));
        btnEjecutar->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.0, cy:0.0, radius:0.0, fx:0.0, fy:0.0, stop:0 rgba(0, 0, 0, 0), stop:0.35 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:0.425 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));\n"
"\n"
"\n"
"border-image: url(:/imagenes/negro4.gif);\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        btnEjecutar->setAutoDefault(false);
        btnEjecutar->setDefault(false);
        btnEjecutar->setFlat(false);
        teRutaCorta = new QLabel(centralwidget);
        teRutaCorta->setObjectName(QString::fromUtf8("teRutaCorta"));
        teRutaCorta->setGeometry(QRect(290, 639, 251, 21));
        teRutaCorta->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.0, cy:0.0, radius:0.0, fx:0.0, fy:0.0, stop:0 rgba(0, 0, 0, 0), stop:0.35 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:0.425 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));\n"
"\n"
"\n"
"border-image: url(:/imagenes/negro4.gif);\n"
"color: rgb(85, 170, 255);\n"
"font: 75 12pt \"MS Shell Dlg 2\";\n"
""));
        teRutaCorta->setAlignment(Qt::AlignCenter);
        teinfo_5 = new QLabel(centralwidget);
        teinfo_5->setObjectName(QString::fromUtf8("teinfo_5"));
        teinfo_5->setGeometry(QRect(33, 5, 71, 20));
        teinfo_5->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.0, cy:0.0, radius:0.0, fx:0.0, fy:0.0, stop:0 rgba(0, 0, 0, 0), stop:0.35 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:0.425 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));\n"
"\n"
"\n"
"border-image: url(:/imagenes/negro4.gif);\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        teinfo_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(-5, -1, 41, 31));
        label_2->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.0, cy:0.0, radius:0.0, fx:0.0, fy:0.0, stop:0 rgba(0, 0, 0, 0), stop:0.35 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:0.425 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));\n"
"\n"
"\n"
"border-image: url(:/imagenes/negro4.gif);\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);\n"
"image: url(:/recursos/ladron.png);"));
        teinfo_6 = new QLabel(centralwidget);
        teinfo_6->setObjectName(QString::fromUtf8("teinfo_6"));
        teinfo_6->setGeometry(QRect(149, 5, 111, 20));
        teinfo_6->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.0, cy:0.0, radius:0.0, fx:0.0, fy:0.0, stop:0 rgba(0, 0, 0, 0), stop:0.35 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:0.425 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));\n"
"\n"
"\n"
"border-image: url(:/imagenes/negro4.gif);\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        teinfo_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(107, 1, 41, 31));
        label_3->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.0, cy:0.0, radius:0.0, fx:0.0, fy:0.0, stop:0 rgba(0, 0, 0, 0), stop:0.35 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:0.425 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));\n"
"\n"
"\n"
"border-image: url(:/imagenes/negro4.gif);\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);\n"
"image: url(:/recursos/LEL.png);"));
        teinfo_7 = new QLabel(centralwidget);
        teinfo_7->setObjectName(QString::fromUtf8("teinfo_7"));
        teinfo_7->setGeometry(QRect(335, 5, 91, 20));
        teinfo_7->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.0, cy:0.0, radius:0.0, fx:0.0, fy:0.0, stop:0 rgba(0, 0, 0, 0), stop:0.35 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:0.425 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));\n"
"\n"
"\n"
"border-image: url(:/imagenes/negro4.gif);\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        teinfo_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(296, -1, 41, 31));
        label_4->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.0, cy:0.0, radius:0.0, fx:0.0, fy:0.0, stop:0 rgba(0, 0, 0, 0), stop:0.35 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:0.425 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));\n"
"\n"
"\n"
"border-image: url(:/imagenes/negro4.gif);\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);\n"
"image: url(:/recursos/policia.png);"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(426, 1, 41, 31));
        label_5->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.0, cy:0.0, radius:0.0, fx:0.0, fy:0.0, stop:0 rgba(0, 0, 0, 0), stop:0.35 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:0.425 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));\n"
"\n"
"\n"
"border-image: url(:/imagenes/negro4.gif);\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);\n"
"image: url(:/recursos/LLP.png);"));
        teinfo_8 = new QLabel(centralwidget);
        teinfo_8->setObjectName(QString::fromUtf8("teinfo_8"));
        teinfo_8->setGeometry(QRect(468, 5, 71, 20));
        teinfo_8->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.0, cy:0.0, radius:0.0, fx:0.0, fy:0.0, stop:0 rgba(0, 0, 0, 0), stop:0.35 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:0.425 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));\n"
"\n"
"\n"
"border-image: url(:/imagenes/negro4.gif);\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        teinfo_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(591, -1, 41, 31));
        label_6->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.0, cy:0.0, radius:0.0, fx:0.0, fy:0.0, stop:0 rgba(0, 0, 0, 0), stop:0.35 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:0.425 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));\n"
"\n"
"\n"
"border-image: url(:/imagenes/negro4.gif);\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);\n"
"image: url(:/recursos/Circle_Green.png);"));
        teinfo_9 = new QLabel(centralwidget);
        teinfo_9->setObjectName(QString::fromUtf8("teinfo_9"));
        teinfo_9->setGeometry(QRect(629, 5, 140, 20));
        teinfo_9->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.0, cy:0.0, radius:0.0, fx:0.0, fy:0.0, stop:0 rgba(0, 0, 0, 0), stop:0.35 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:0.425 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));\n"
"\n"
"\n"
"border-image: url(:/imagenes/negro4.gif);\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        teinfo_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        btnRestar_2 = new QPushButton(centralwidget);
        btnRestar_2->setObjectName(QString::fromUtf8("btnRestar_2"));
        btnRestar_2->setGeometry(QRect(597, 97, 161, 31));
        btnRestar_2->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.0, cy:0.0, radius:0.0, fx:0.0, fy:0.0, stop:0 rgba(0, 0, 0, 0), stop:0.35 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:0.425 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));\n"
"\n"
"\n"
"border-image: url(:/imagenes/negro4.gif);\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(-20, 0, 791, 41));
        line->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.0, cy:0.0, radius:0.0, fx:0.0, fy:0.0, stop:0 rgba(0, 0, 0, 0), stop:0.35 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:0.425 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));\n"
"\n"
"border-image: url(:/recursos/bannerH.png);"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        Principal->setCentralWidget(centralwidget);
        line->raise();
        btnRestar_2->raise();
        GraphWidget1->raise();
        txtReference->raise();
        teinfo->raise();
        btnRestar->raise();
        label->raise();
        teinfo_2->raise();
        lcdControles->raise();
        teinfo_3->raise();
        teinfo_4->raise();
        lcdCosto->raise();
        btnEjecutar->raise();
        teRutaCorta->raise();
        teinfo_5->raise();
        label_2->raise();
        teinfo_6->raise();
        label_3->raise();
        teinfo_7->raise();
        label_4->raise();
        label_5->raise();
        teinfo_8->raise();
        label_6->raise();
        teinfo_9->raise();
        btnSetLadron->raise();

        retranslateUi(Principal);

        QMetaObject::connectSlotsByName(Principal);
    } // setupUi

    void retranslateUi(QMainWindow *Principal)
    {
        Principal->setWindowTitle(QApplication::translate("Principal", "Simulador de detenci\303\263n de crimenes", 0, QApplication::UnicodeUTF8));
        GraphWidget1->setProperty("text", QVariant(QString()));
        btnSetLadron->setText(QApplication::translate("Principal", "Indicar ubicaci\303\263n de policias y criminales", 0, QApplication::UnicodeUTF8));
        teinfo->setText(QString());
        btnRestar->setText(QApplication::translate("Principal", "Reiniciar", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        teinfo_2->setText(QApplication::translate("Principal", "No. de controles policiales requeridos.", 0, QApplication::UnicodeUTF8));
        teinfo_3->setText(QApplication::translate("Principal", "Ruta mas corta.", 0, QApplication::UnicodeUTF8));
        teinfo_4->setText(QApplication::translate("Principal", "Costo en la ruta mas corta.", 0, QApplication::UnicodeUTF8));
        btnEjecutar->setText(QApplication::translate("Principal", "Ejecutar", 0, QApplication::UnicodeUTF8));
        teRutaCorta->setText(QApplication::translate("Principal", "1->2->5->8", 0, QApplication::UnicodeUTF8));
        teinfo_5->setText(QApplication::translate("Principal", "Criminales", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        teinfo_6->setText(QApplication::translate("Principal", "Rutas de escape", 0, QApplication::UnicodeUTF8));
        label_3->setText(QString());
        teinfo_7->setText(QApplication::translate("Principal", "Bloque policial", 0, QApplication::UnicodeUTF8));
        label_4->setText(QString());
        label_5->setText(QString());
        teinfo_8->setText(QApplication::translate("Principal", "Ruta llegada", 0, QApplication::UnicodeUTF8));
        label_6->setText(QString());
        teinfo_9->setText(QApplication::translate("Principal", "Ubicaci\303\263n inical policia", 0, QApplication::UnicodeUTF8));
        btnRestar_2->setText(QApplication::translate("Principal", "Salir", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Principal: public Ui_Principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINCIPAL_H
