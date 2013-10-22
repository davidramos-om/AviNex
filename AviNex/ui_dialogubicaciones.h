/********************************************************************************
** Form generated from reading UI file 'dialogubicaciones.ui'
**
** Created: Wed Sep 12 22:55:50 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGUBICACIONES_H
#define UI_DIALOGUBICACIONES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogUbicaciones
{
public:
    QLabel *teinfo_4;
    QPushButton *btnAcept;
    QLabel *label;
    QPushButton *btncancel;
    QListWidget *ListaCriminales;
    QListWidget *ListaPolicias;
    QLabel *teinfo_3;
    QLabel *lbinfocriminal;
    QListWidget *ListaPolicias_Seleccionados;

    void setupUi(QDialog *DialogUbicaciones)
    {
        if (DialogUbicaciones->objectName().isEmpty())
            DialogUbicaciones->setObjectName(QString::fromUtf8("DialogUbicaciones"));
        DialogUbicaciones->setWindowModality(Qt::ApplicationModal);
        DialogUbicaciones->resize(498, 415);
        DialogUbicaciones->setMinimumSize(QSize(498, 415));
        DialogUbicaciones->setMaximumSize(QSize(498, 415));
        DialogUbicaciones->setStyleSheet(QString::fromUtf8("background-image: url(:/recursos/fondonexus.png);"));
        teinfo_4 = new QLabel(DialogUbicaciones);
        teinfo_4->setObjectName(QString::fromUtf8("teinfo_4"));
        teinfo_4->setGeometry(QRect(10, 40, 291, 21));
        teinfo_4->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.0, cy:0.0, radius:0.0, fx:0.0, fy:0.0, stop:0 rgba(0, 0, 0, 0), stop:0.35 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:0.425 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));\n"
"\n"
"\n"
"border-image: url(:/imagenes/negro4.gif);\n"
"color: rgb(0, 170, 255);\n"
"font: 75 12pt \"MS Shell Dlg 2\";\n"
"\n"
""));
        teinfo_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        btnAcept = new QPushButton(DialogUbicaciones);
        btnAcept->setObjectName(QString::fromUtf8("btnAcept"));
        btnAcept->setGeometry(QRect(270, 370, 101, 41));
        btnAcept->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.0, cy:0.0, radius:0.0, fx:0.0, fy:0.0, stop:0 rgba(0, 0, 0, 0), stop:0.35 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:0.425 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));\n"
"\n"
"\n"
"border-image: url(:/imagenes/negro4.gif);\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        label = new QLabel(DialogUbicaciones);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 501, 31));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/recursos/banner.png);"));
        label->setFrameShape(QFrame::NoFrame);
        label->setFrameShadow(QFrame::Raised);
        label->setTextFormat(Qt::PlainText);
        btncancel = new QPushButton(DialogUbicaciones);
        btncancel->setObjectName(QString::fromUtf8("btncancel"));
        btncancel->setGeometry(QRect(140, 370, 101, 41));
        btncancel->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.0, cy:0.0, radius:0.0, fx:0.0, fy:0.0, stop:0 rgba(0, 0, 0, 0), stop:0.35 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:0.425 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));\n"
"\n"
"\n"
"border-image: url(:/imagenes/negro4.gif);\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        ListaCriminales = new QListWidget(DialogUbicaciones);
        ListaCriminales->setObjectName(QString::fromUtf8("ListaCriminales"));
        ListaCriminales->setGeometry(QRect(8, 61, 481, 101));
        ListaCriminales->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        ListaCriminales->setFont(font);
        ListaCriminales->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.0, cy:0.0, radius:0.0, fx:0.0, fy:0.0, stop:0 rgba(0, 0, 0, 0), stop:0.35 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:0.425 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));\n"
"\n"
"\n"
"color: rgb(255, 255, 255);\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
"\n"
"\n"
"\n"
""));
        ListaCriminales->setFrameShape(QFrame::Box);
        ListaCriminales->setAutoScrollMargin(11);
        ListaCriminales->setTabKeyNavigation(true);
        ListaCriminales->setDragDropMode(QAbstractItemView::DropOnly);
        ListaCriminales->setAlternatingRowColors(false);
        ListaCriminales->setIconSize(QSize(16, 16));
        ListaCriminales->setMovement(QListView::Static);
        ListaCriminales->setResizeMode(QListView::Fixed);
        ListaCriminales->setSpacing(0);
        ListaCriminales->setViewMode(QListView::ListMode);
        ListaPolicias = new QListWidget(DialogUbicaciones);
        ListaPolicias->setObjectName(QString::fromUtf8("ListaPolicias"));
        ListaPolicias->setGeometry(QRect(8, 224, 241, 141));
        ListaPolicias->setMinimumSize(QSize(0, 0));
        ListaPolicias->setFont(font);
        ListaPolicias->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.0, cy:0.0, radius:0.0, fx:0.0, fy:0.0, stop:0 rgba(0, 0, 0, 0), stop:0.35 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:0.425 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));\n"
"\n"
"color: rgb(255, 255, 255);\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
"\n"
"\n"
"\n"
""));
        ListaPolicias->setFrameShape(QFrame::Box);
        ListaPolicias->setAutoScrollMargin(11);
        ListaPolicias->setTabKeyNavigation(true);
        ListaPolicias->setDragDropMode(QAbstractItemView::DropOnly);
        ListaPolicias->setAlternatingRowColors(false);
        ListaPolicias->setIconSize(QSize(16, 16));
        ListaPolicias->setMovement(QListView::Static);
        ListaPolicias->setResizeMode(QListView::Fixed);
        ListaPolicias->setSpacing(0);
        ListaPolicias->setViewMode(QListView::ListMode);
        teinfo_3 = new QLabel(DialogUbicaciones);
        teinfo_3->setObjectName(QString::fromUtf8("teinfo_3"));
        teinfo_3->setGeometry(QRect(10, 203, 301, 21));
        teinfo_3->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.0, cy:0.0, radius:0.0, fx:0.0, fy:0.0, stop:0 rgba(0, 0, 0, 0), stop:0.35 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:0.425 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));\n"
"\n"
"\n"
"border-image: url(:/imagenes/negro4.gif);\n"
"color: rgb(0, 170, 255);\n"
"font: 75 12pt \"MS Shell Dlg 2\";\n"
"\n"
""));
        teinfo_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lbinfocriminal = new QLabel(DialogUbicaciones);
        lbinfocriminal->setObjectName(QString::fromUtf8("lbinfocriminal"));
        lbinfocriminal->setGeometry(QRect(10, 163, 471, 16));
        lbinfocriminal->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.0, cy:0.0, radius:0.0, fx:0.0, fy:0.0, stop:0 rgba(0, 0, 0, 0), stop:0.35 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:0.425 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));\n"
"\n"
"\n"
"border-image: url(:/imagenes/negro4.gif);\n"
"color: rgb(255, 255, 255);"));
        ListaPolicias_Seleccionados = new QListWidget(DialogUbicaciones);
        ListaPolicias_Seleccionados->setObjectName(QString::fromUtf8("ListaPolicias_Seleccionados"));
        ListaPolicias_Seleccionados->setGeometry(QRect(260, 224, 231, 141));
        ListaPolicias_Seleccionados->setMinimumSize(QSize(0, 0));
        ListaPolicias_Seleccionados->setFont(font);
        ListaPolicias_Seleccionados->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.0, cy:0.0, radius:0.0, fx:0.0, fy:0.0, stop:0 rgba(0, 0, 0, 0), stop:0.35 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:0.425 rgba(0, 0, 0, 0), stop:0.0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));\n"
"\n"
"\n"
"color: rgb(255, 255, 255);\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
"\n"
"\n"
"\n"
""));
        ListaPolicias_Seleccionados->setFrameShape(QFrame::Box);
        ListaPolicias_Seleccionados->setAutoScrollMargin(11);
        ListaPolicias_Seleccionados->setTabKeyNavigation(true);
        ListaPolicias_Seleccionados->setDragDropMode(QAbstractItemView::DropOnly);
        ListaPolicias_Seleccionados->setAlternatingRowColors(false);
        ListaPolicias_Seleccionados->setIconSize(QSize(16, 16));
        ListaPolicias_Seleccionados->setMovement(QListView::Static);
        ListaPolicias_Seleccionados->setResizeMode(QListView::Fixed);
        ListaPolicias_Seleccionados->setSpacing(0);
        ListaPolicias_Seleccionados->setViewMode(QListView::ListMode);
        teinfo_3->raise();
        teinfo_4->raise();
        btnAcept->raise();
        label->raise();
        btncancel->raise();
        ListaCriminales->raise();
        ListaPolicias->raise();
        lbinfocriminal->raise();
        ListaPolicias_Seleccionados->raise();

        retranslateUi(DialogUbicaciones);

        QMetaObject::connectSlotsByName(DialogUbicaciones);
    } // setupUi

    void retranslateUi(QDialog *DialogUbicaciones)
    {
        DialogUbicaciones->setWindowTitle(QApplication::translate("DialogUbicaciones", "Ubicaciones", 0, QApplication::UnicodeUTF8));
        teinfo_4->setText(QApplication::translate("DialogUbicaciones", "Seleccione la ubicaci\303\263n de los criminales", 0, QApplication::UnicodeUTF8));
        btnAcept->setText(QApplication::translate("DialogUbicaciones", "Aceptar", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        btncancel->setText(QApplication::translate("DialogUbicaciones", "Cancelar", 0, QApplication::UnicodeUTF8));
        teinfo_3->setText(QApplication::translate("DialogUbicaciones", "Seleccione las ubicaciones de los  policias", 0, QApplication::UnicodeUTF8));
        lbinfocriminal->setText(QApplication::translate("DialogUbicaciones", "Ubicaci\303\263n de los criminales no especificada.", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogUbicaciones: public Ui_DialogUbicaciones {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGUBICACIONES_H
