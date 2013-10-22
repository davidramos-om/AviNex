
#ifndef EDGE_H
#define EDGE_H

#include <QGraphicsItem>
#include "util.h"
#include <QTextEdit>

class Nodo;

class Arista : public QGraphicsItem
{
public:
    Arista(Nodo *sourceNode, Nodo *destNode);

    Nodo *sourceNode() const;
    Nodo *destNode() const;
    QString Identificador;
    QTextEdit *txtReference;
    EstatusItem estatus_Item;
    int Valor;
    void adjust();
    Nodo *source, *dest;
    enum { Type = UserType + 2 };
    int type() const { return Type; }

protected:
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
private:


    QPointF sourcePoint;
    QPointF destPoint;
    qreal arrowSize;
};


#endif
