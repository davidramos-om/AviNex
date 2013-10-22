#ifndef UTIL_H
#define UTIL_H

#include <QGraphicsItem>
#include <QString>
#include <QMessageBox>

enum EstatusItem{ColorPolicia=0,ColorLadrones=1,ColorNormal=2,SeleccionPCArista=3,UbicacionInicialPolicia=4,RutaHaciaLadron=5};

class util
{
public:
    util();
    static void ShowMessage(QString msj,QString titulo);
    static void ShowMessage(QString msj);
};

#endif // UTIL_H
