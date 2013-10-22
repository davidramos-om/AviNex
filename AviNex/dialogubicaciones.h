#ifndef DIALOGUBICACIONES_H
#define DIALOGUBICACIONES_H

#include <QDialog>
#include <QList>
#include "nodo.h"
#include "arista.h"
#include <QString>
#include <QListWidgetItem>

namespace Ui {
class DialogUbicaciones;
}

class DialogUbicaciones : public QDialog
{
    Q_OBJECT

public:
    explicit DialogUbicaciones(QList<Nodo *> listaNodos,QWidget *parent = 0);
    ~DialogUbicaciones();
    QList<Nodo *> nodosAgregados;
    QListWidgetItem* CrearListItem(QString Identificador, bool EsPolicia);
    Nodo* GetNodo(QString Identificador, bool &encontroNodo);

    Nodo *NodoCriminal;
    QList<Nodo *> nodosPolicias;

    bool Aceptado;

private slots:
    void on_ListaCriminales_itemPressed(QListWidgetItem *item);

    void on_ListaPolicias_itemDoubleClicked(QListWidgetItem *item);

    void on_ListaPolicias_Seleccionados_itemDoubleClicked(QListWidgetItem *item);

    void on_btncancel_clicked();

    void on_btnAcept_clicked();

private:
    Ui::DialogUbicaciones *ui;
};

#endif // DIALOGUBICACIONES_H
