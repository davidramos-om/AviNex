#include "util.h"

util::util()
{

}

void util::ShowMessage(QString msj, QString titulo)
{
    QMessageBox m;
    m.setText(msj);
    m.setWindowTitle(titulo);
    m.setModal(true);

    m.exec();
}

void util::ShowMessage(QString msj)
{
    ShowMessage(msj,"Información");
}



