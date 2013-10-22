#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include <QPainter>
#include <QStyleOption>

#include "arista.h"
#include "nodo.h"
#include "graphwidget.h"


Nodo::Nodo(GraphWidget *graphWidget)
    : graph(graphWidget)
{
    setFlag(ItemIsMovable);
    setFlag(ItemSendsGeometryChanges);
    setCacheMode(DeviceCoordinateCache);
    setZValue(-1);
    estatus_Item=ColorNormal;
    old_estatus_Item=ColorNormal;
    numClicks=0;

}

void Nodo::SetStatusAristas(EstatusItem status)
{
    foreach (Arista *arista, ListaAristas)
    {
        arista->estatus_Item= status;
        arista->update();
    }
}

void Nodo::AgregarArista(Arista *arista)
{
    ListaAristas << arista;
    arista->adjust();
}

QList<Arista *> Nodo::Aristas() const
{
    return ListaAristas;
}

QRectF Nodo::boundingRect() const
{
    qreal adjust = 2;
    return QRectF( -10 - adjust, -10 - adjust,
                   23 + adjust, 23 + adjust);

}

QPainterPath Nodo::shape() const
{
    QPainterPath path;

    path.addEllipse(-10, -10, 20, 20);

    return path;
}

void Nodo::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *)
{
    painter->setPen(Qt::NoPen);
    painter->setBrush(Qt::darkGray);
    painter->drawEllipse(-7, -7, 20, 20);
    QRadialGradient gradient(-3, -3, 10);

    if (option->state & QStyle::State_Sunken)
    {
        gradient.setCenter(3, 3);
        gradient.setFocalPoint(2, 2);

        switch(estatus_Item)
        {
        case ColorPolicia:
            gradient.setColorAt(1, QColor(Qt::blue).light(120));
            gradient.setColorAt(0, QColor(Qt::darkBlue).light(120));
            break;
        case UbicacionInicialPolicia:
            gradient.setColorAt(1, QColor(Qt::green).light(120));
            gradient.setColorAt(0, QColor(Qt::darkGreen).light(120));
            break;
        case ColorLadrones:
            gradient.setColorAt(1, QColor(Qt::red).light(120));
            gradient.setColorAt(0, QColor(Qt::darkRed).light(120));
            break;
        case ColorNormal:
            gradient.setColorAt(1, QColor(Qt::black).light(120));
            gradient.setColorAt(0, QColor(Qt::darkGray).light(120));
            break;
        case SeleccionPCArista:
            gradient.setColorAt(1, QColor(Qt::yellow).light(120));
            gradient.setColorAt(0, QColor(Qt::darkYellow).light(120));
            break;
        }
    }
    else
    {
        switch(estatus_Item)
        {
        case ColorPolicia:
            gradient.setColorAt(1, QColor(Qt::blue));
            gradient.setColorAt(0, QColor(Qt::darkBlue));
            break;
        case UbicacionInicialPolicia:
            gradient.setColorAt(1, QColor(Qt::green));
            gradient.setColorAt(0, QColor(Qt::darkGreen));
            break;
        case ColorLadrones:
            gradient.setColorAt(1, QColor(Qt::red));
            gradient.setColorAt(0, QColor(Qt::darkRed));
            break;
        case ColorNormal:
            gradient.setColorAt(1, QColor(Qt::black));
            gradient.setColorAt(0, QColor(Qt::darkGray));
            break;
        case SeleccionPCArista:
            gradient.setColorAt(1, QColor(Qt::yellow));
            gradient.setColorAt(0, QColor(Qt::darkYellow));
            break;
        }
    }

    painter->setBrush(gradient);
    painter->setPen(QPen(Qt::black, 0));
    painter->drawEllipse(-10, -10, 20, 20);

    painter->setPen(QPen(Qt::white));

    QFont font("Helvetica");
    font.setPixelSize(15);
    font.setBold(true);
    painter->setFont(font);

    if (Identificador.toInt()>=10)
        painter->drawText(-8,5,Identificador);
    else
        painter->drawText(-3,5,Identificador);
}

QVariant Nodo::itemChange(GraphicsItemChange change, const QVariant &value)
{
    switch (change)
    {
    case ItemPositionHasChanged:
        foreach (Arista *edge, ListaAristas)
            edge->adjust();
        break;
    default:
        break;
    };

    return QGraphicsItem::itemChange(change, value);
}

void Nodo::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    //update();

    QGraphicsItem::mousePressEvent(event);

    if (estatus_Item==ColorLadrones)
        return;

    numClicks++;

    if(numClicks>=2)
    {
        numClicks=0;

        if(estatus_Item!=SeleccionPCArista)
        {
            old_estatus_Item=estatus_Item;
            estatus_Item=SeleccionPCArista;
        }
        else
        {
            estatus_Item=old_estatus_Item;
            old_estatus_Item=estatus_Item;
        }

        update();
        if(txtReference!=NULL)
        {
            txtReference->setText("n_"+Identificador);
        }

    }



    //    QMessageBox m;
    //    m.setText(QString("Se presiono el nodo %0").arg(this->Identificador));
    //    m.setWindowTitle("Informacion");
    //    m.exec();

}

void Nodo::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    update();
    QGraphicsItem::mouseReleaseEvent(event);
}

