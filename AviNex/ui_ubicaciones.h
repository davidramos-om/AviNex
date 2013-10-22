/********************************************************************************
** Form generated from reading UI file 'ubicaciones.ui'
**
** Created: Sun Sep 9 20:56:33 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UBICACIONES_H
#define UI_UBICACIONES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ubicaciones
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *btncancel;
    QPushButton *btnAcept;
    QListWidget *ListaPolicias;
    QListWidget *ListaCriminales;
    QLabel *teinfo_3;
    QLabel *teinfo_4;

    void setupUi(QMainWindow *Ubicaciones)
    {
        if (Ubicaciones->objectName().isEmpty())
            Ubicaciones->setObjectName(QString::fromUtf8("Ubicaciones"));
        Ubicaciones->resize(499, 365);
        Ubicaciones->setStyleSheet(QString::fromUtf8("background-image: url(:/recursos/fondonexus.png);"));
        centralwidget = new QWidget(Ubicaciones);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 501, 31));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/recursos/banner.png);"));
        label->setFrameShape(QFrame::NoFrame);
        label->setFrameShadow(QFrame::Raised);
        label->setTextFormat(Qt::PlainText);
        btncancel = new QPushButton(centralwidget);
        btncancel->setObjectName(QString::fromUtf8("btncancel"));
        btncancel->setGeometry(QRect(110, 310, 101, 41));
        btncancel->setStyleSheet(QString::fromUtf8("background-image: url(:/recursos/azul2.gif);\n"
"font: 75 8pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        btnAcept = new QPushButton(centralwidget);
        btnAcept->setObjectName(QString::fromUtf8("btnAcept"));
        btnAcept->setGeometry(QRect(240, 310, 101, 41));
        btnAcept->setStyleSheet(QString::fromUtf8("background-image: url(:/recursos/azul2.gif);\n"
"font: 75 8pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        ListaPolicias = new QListWidget(centralwidget);
        ListaPolicias->setObjectName(QString::fromUtf8("ListaPolicias"));
        ListaPolicias->setGeometry(QRect(10, 70, 471, 91));
        ListaPolicias->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        ListaPolicias->setFont(font);
        ListaPolicias->setStyleSheet(QString::fromUtf8("\n"
"border:2;\n"
"color: rgb(255, 255, 255);\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
"\n"
"\n"
"\n"
""));
        ListaPolicias->setAutoScrollMargin(11);
        ListaPolicias->setTabKeyNavigation(true);
        ListaPolicias->setDragDropMode(QAbstractItemView::DropOnly);
        ListaPolicias->setAlternatingRowColors(false);
        ListaPolicias->setIconSize(QSize(16, 16));
        ListaPolicias->setMovement(QListView::Static);
        ListaPolicias->setResizeMode(QListView::Fixed);
        ListaPolicias->setSpacing(0);
        ListaPolicias->setViewMode(QListView::ListMode);
        ListaCriminales = new QListWidget(centralwidget);
        ListaCriminales->setObjectName(QString::fromUtf8("ListaCriminales"));
        ListaCriminales->setGeometry(QRect(10, 200, 471, 91));
        ListaCriminales->setMinimumSize(QSize(0, 0));
        ListaCriminales->setFont(font);
        ListaCriminales->setStyleSheet(QString::fromUtf8("\n"
"border:2;\n"
"color: rgb(255, 255, 255);\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
"\n"
"\n"
"\n"
""));
        ListaCriminales->setAutoScrollMargin(11);
        ListaCriminales->setTabKeyNavigation(true);
        ListaCriminales->setDragDropMode(QAbstractItemView::DropOnly);
        ListaCriminales->setAlternatingRowColors(false);
        ListaCriminales->setIconSize(QSize(16, 16));
        ListaCriminales->setMovement(QListView::Static);
        ListaCriminales->setResizeMode(QListView::Fixed);
        ListaCriminales->setSpacing(0);
        ListaCriminales->setViewMode(QListView::ListMode);
        teinfo_3 = new QLabel(centralwidget);
        teinfo_3->setObjectName(QString::fromUtf8("teinfo_3"));
        teinfo_3->setGeometry(QRect(10, 40, 251, 21));
        teinfo_3->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.0, cy:0.0, radius:0.0, fx:0.0, fy:0.0, stop:0 rgba(0, 0, 0, 0), stop:0.35 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:0.425 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));\n"
"\n"
"\n"
"border-image: url(:/imagenes/negro4.gif);\n"
"color: rgb(0, 170, 255);\n"
"font: 75 12pt \"MS Shell Dlg 2\";\n"
"\n"
""));
        teinfo_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        teinfo_4 = new QLabel(centralwidget);
        teinfo_4->setObjectName(QString::fromUtf8("teinfo_4"));
        teinfo_4->setGeometry(QRect(10, 180, 251, 21));
        teinfo_4->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.0, cy:0.0, radius:0.0, fx:0.0, fy:0.0, stop:0 rgba(0, 0, 0, 0), stop:0.35 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:0.425 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));\n"
"\n"
"\n"
"border-image: url(:/imagenes/negro4.gif);\n"
"color: rgb(0, 170, 255);\n"
"font: 75 12pt \"MS Shell Dlg 2\";\n"
"\n"
""));
        teinfo_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Ubicaciones->setCentralWidget(centralwidget);

        retranslateUi(Ubicaciones);

        QMetaObject::connectSlotsByName(Ubicaciones);
    } // setupUi

    void retranslateUi(QMainWindow *Ubicaciones)
    {
        Ubicaciones->setWindowTitle(QApplication::translate("Ubicaciones", "MainWindow", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        btncancel->setText(QApplication::translate("Ubicaciones", "Cancelar", 0, QApplication::UnicodeUTF8));
        btnAcept->setText(QApplication::translate("Ubicaciones", "Aceptar", 0, QApplication::UnicodeUTF8));
        teinfo_3->setText(QApplication::translate("Ubicaciones", "Seleccionar ubicaciones de policias", 0, QApplication::UnicodeUTF8));
        teinfo_4->setText(QApplication::translate("Ubicaciones", "Seleccionar ubicaci\303\263n de criminales", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Ubicaciones: public Ui_Ubicaciones {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UBICACIONES_H
