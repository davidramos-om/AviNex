#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include <QMainWindow>
#include "nodo.h"
#include <QCloseEvent>
#include "dialogubicaciones.h"

namespace Ui {
class Principal;
}

class Principal : public QMainWindow
{
    Q_OBJECT

public:
    explicit Principal(QWidget *parent = 0);
    ~Principal();
    Ui::Principal *ui;
    void Ejecutar(DialogUbicaciones *ubi);
    void ColorearCaminos(QStringList vertices);


private slots:

    void on_btnSetLadron_clicked();
    void on_txtReference_textChanged();
    void on_btnRestar_clicked();
    void closeEvent(QCloseEvent *e);
    void on_btnRestar_2_clicked();
    void on_btnEjecutar_clicked();
};

#endif // PRINCIPAL_H
