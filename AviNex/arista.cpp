
#include <QPainter>

#include "arista.h"
#include "nodo.h"
#include <math.h>

static const double Pi = 3.14159265358979323846264338327950288419717;
static double TwoPi = 2.0 * Pi;


Arista::Arista(Nodo *sourceNode, Nodo *destNode)
    : arrowSize(10)
{
    setAcceptedMouseButtons(0);

    estatus_Item=ColorNormal;

    source = sourceNode;
    dest = destNode;

    source->AgregarArista(this);
    dest->AgregarArista(this);

    adjust();
}

Nodo *Arista::sourceNode() const
{
    return source;
}

Nodo *Arista::destNode() const
{
    return dest;
}

void Arista::adjust()
{
    if (!source || !dest)
        return;

    QLineF line(mapFromItem(source, 0, 0), mapFromItem(dest, 0, 0));
    qreal length = line.length();

    prepareGeometryChange();

    if (length > qreal(20.))
    {
        QPointF edgeOffset((line.dx() * 10) / length, (line.dy() * 10) / length);
        sourcePoint = line.p1() + edgeOffset;
        destPoint = line.p2() - edgeOffset;
    } else
    {
        sourcePoint = destPoint = line.p1();
    }
}

QRectF Arista::boundingRect() const
{
    if (!source || !dest)
        return QRectF();

    qreal penWidth = 1;
    qreal extra = (penWidth + arrowSize) / 2.0;

    return QRectF(sourcePoint, QSizeF(destPoint.x() - sourcePoint.x(),
                                      destPoint.y() - sourcePoint.y()))
            .normalized()
            .adjusted(-extra, -extra, extra, extra);
}

void Arista::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *)
{
    if (!source || !dest)
        return;

    QLineF line(sourcePoint, destPoint);
    if (qFuzzyCompare(line.length(), qreal(0.)))
        return;

    switch(estatus_Item)
    {

    case ColorPolicia:
        painter->setPen(QPen(Qt::blue, 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
        break;
    case UbicacionInicialPolicia:
        painter->setPen(QPen(Qt::green, 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
        break;
    case ColorLadrones:
        painter->setPen(QPen(Qt::red, 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
        break;
    case RutaHaciaLadron:
        painter->setPen(QPen(Qt::green, 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
        break;
    default:
        painter->setPen(QPen(Qt::black, 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
        break;
    }

    painter->drawLine(line);



    double angle = ::acos(line.dx() / line.length());
    if (line.dy() >= 0)
        angle = TwoPi - angle;

//    QPointF sourceArrowP1 = sourcePoint + QPointF(sin(angle + Pi / 3) * arrowSize,
//                                                  cos(angle + Pi / 3) * arrowSize);

//    QPointF sourceArrowP2 = sourcePoint + QPointF(sin(angle + Pi - Pi / 3) * arrowSize,
//                                                  cos(angle + Pi - Pi / 3) * arrowSize);

//    QPointF destArrowP1 = destPoint + QPointF(sin(angle - Pi / 3) * arrowSize,
//                                              cos(angle - Pi / 3) * arrowSize);

//    QPointF destArrowP2 = destPoint + QPointF(sin(angle - Pi + Pi / 3) * arrowSize,
//                                              cos(angle - Pi + Pi / 3) * arrowSize);

    painter->setBrush(Qt::black);

    //painter->drawPolygon(QPolygonF() << line.p1() << sourceArrowP1 << sourceArrowP2);
    //painter->drawPolygon(QPolygonF() << line.p2() << destArrowP1 << destArrowP2);

    painter->setPen(QPen(Qt::red));
    QRect rec( line.p1().toPoint(),line.p2().toPoint());

//    if (rec.width()<=10)
//        rec.setWidth(10);

//    if (rec.height()<=10)
//        rec.setHeight(10);


    painter->setOpacity(0);

    painter->drawRect(rec);


    QFont font("Helvetica");
    font.setPixelSize(20);

    painter->setFont(font);
    painter->setOpacity(100);
    painter->setPen(QPen(Qt::blue));

    Valor=line.length()/10;
    painter->drawText(rec,Qt::AlignCenter,QString::number(Valor));


}

void Arista::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    QGraphicsItem::mousePressEvent(event);
    if(txtReference!=NULL)
    {
        txtReference->setText("a_"+Identificador);
    }
}
void Arista::mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event)
{
    QGraphicsItem::mouseDoubleClickEvent(event);
    if(txtReference!=NULL)
    {
        txtReference->setText("a_"+Identificador);
    }
}
