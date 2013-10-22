
#ifndef NODE_H
#define NODE_H

#include <QGraphicsItem>
#include <QList>
#include <QString>
#include <QMessageBox>
#include "util.h"
#include <QTextEdit>

class Arista;
class GraphWidget;
QT_BEGIN_NAMESPACE
class QGraphicsSceneMouseEvent;
QT_END_NAMESPACE


class Nodo : public QGraphicsItem
{
public:
    Nodo(GraphWidget *graphWidget);

    void AgregarArista(Arista *edge);
    QList<Arista *> Aristas() const;
    QString Identificador;
    EstatusItem estatus_Item;
    EstatusItem old_estatus_Item;
    void SetStatusAristas(EstatusItem status);

    QRectF boundingRect() const;
    QPainterPath shape() const;
    QTextEdit *txtReference;
    int numClicks;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

protected:
    QVariant itemChange(GraphicsItemChange change, const QVariant &value);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);

signals:
    void NodoPresionado(Nodo *nodo);
private:
    QList<Arista *> ListaAristas;
    QPointF newPos;
    GraphWidget *graph;
};
#endif
