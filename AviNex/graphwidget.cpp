
#include "graphwidget.h"
#include "arista.h"
#include "nodo.h"

#include <QtGui>
#include <QList>

int NodoPermitidos=99;

GraphWidget::GraphWidget(QWidget *parent)
    : QGraphicsView(parent)
{
    QGraphicsScene *scene = new QGraphicsScene(this);
    scene->setItemIndexMethod(QGraphicsScene::NoIndex);
    scene->setSceneRect(0, 0, 400, 400);
    setScene(scene);
    setCacheMode(CacheBackground);
    setViewportUpdateMode(BoundingRectViewportUpdate);
    setRenderHint(QPainter::Antialiasing);
    setTransformationAnchor(AnchorUnderMouse);
    NodoEnlazarOrigen=NULL;
    EnlaceNodosActivo=false;
}



void GraphWidget::keyPressEvent(QKeyEvent *event)
{
    QGraphicsView::keyPressEvent(event);

    switch(event->key())
    {
    case Qt::Key_Delete:

        if (NodoEnlazarOrigen!=NULL)
        {
            QList<Arista *> aristas =NodoEnlazarOrigen->Aristas();

            if (!aristas.isEmpty())
            {
                QList<Arista*> itemsAristas;
                while(!aristas.isEmpty())
                {
                    itemsAristas.push_back(aristas.at(0));
                    aristas.removeOne(aristas.at(0));
                }

                if(!itemsAristas.isEmpty())
                    qDeleteAll(itemsAristas.begin(),itemsAristas.end());

                itemsAristas.clear();
            }

            bool continuar=true;
            QList<Nodo *> itemsNodos;
            int i=0;
            while(continuar && (i<nodosAgregados.count()))
            {
                if(nodosAgregados.at(i)->Identificador==NodoEnlazarOrigen->Identificador)
                {
                    nodosAgregados.at(i)->numClicks=0;
                    nodosAgregados.at(i)->estatus_Item=nodosAgregados.at(i)->old_estatus_Item;
                    itemsNodos.push_back(nodosAgregados.at(i));
                    nodosAgregados.removeOne(nodosAgregados.at(i));
                    continuar=false;
                }
                i++;
            }

            if(!itemsNodos.isEmpty())
                qDeleteAll(itemsNodos.begin(),itemsNodos.end());

            itemsNodos.clear();

            NodoEnlazarOrigen=NULL;
            EnlaceNodosActivo=false;
        }
        break;

    case Qt::Key_Escape:

        //        if (NodoEnlazarOrigen!=NULL)
        //        {
        //            bool continuar=false;
        //            int i=0;
        //            while(continuar && (i<nodosAgregados.count()>0))
        //            {
        //                if(nodosAgregados.at(i)->Identificador==NodoEnlazarOrigen->Identificador)
        //                {
        //                    nodosAgregados.at(i)->numClicks=0;
        //                    nodosAgregados.at(i)->estatus_Item=nodosAgregados.at(i)->old_estatus_Item;
        //                    continuar=false;
        //                }
        //                i++;
        //            }
        //            NodoEnlazarOrigen=NULL;
        //        }
        //        EnlaceNodosActivo=false;
        break;

    }
}

void GraphWidget::mouseReleaseEvent(QMouseEvent *event)
{
    QGraphicsView::mouseReleaseEvent(event);
}

void GraphWidget::mousePressEvent(QMouseEvent *event)
{
    QGraphicsView::mousePressEvent(event);

    if (event->button()==Qt::RightButton)
    {
        int xx=event->x()-175;
        int yy=event->y()-40;
        agregarNodo(xx,yy);
    }

}

void GraphWidget::RefrescarNodos()
{
    foreach (Nodo *nodo, nodosAgregados)
    {
        nodo->update();
    }
}

int GraphWidget::GetIndexNodo(QString Identificador, bool &encontroNodo)
{
    encontroNodo=false;
    for(int i=0;i<nodosAgregados.count();i++)
        if (nodosAgregados.at(i)->Identificador==Identificador)
        {
            encontroNodo=true;
            return i;
        }

    return -1;
}

Nodo* GraphWidget::GetNodo(QString Identificador, bool &encontroNodo)
{
    encontroNodo=false;
    Identificador=Identificador.trimmed().split("_")[1];
    Nodo *n=NULL;

    foreach(Nodo *nodo, nodosAgregados)
    {
        if (nodo->Identificador==Identificador)
        {
            encontroNodo=true;
            return nodo;
        }
    }

    return n;
}

Nodo* GraphWidget::GetNodoIdent(QString Identificador, bool &encontroNodo)
{
    encontroNodo=false;
    //Identificador=Identificador.trimmed().split("_")[1];
    Nodo *n=NULL;

    foreach(Nodo *nodo, nodosAgregados)
    {
        if (nodo->Identificador==Identificador)
        {
            encontroNodo=true;
            return nodo;
        }
    }

    return n;
}

QString GraphWidget::getIdentificador(QString sugerencia)
{
    bool encontroNodo=false;
    int index=GetIndexNodo(sugerencia,encontroNodo);
    if(index<0 || !encontroNodo)
    {
        return sugerencia;
    }

    int next=sugerencia.toInt() +1;

    if (next+1 >=NodoPermitidos)
        return QString::number(NodoPermitidos);

    return getIdentificador(QString::number(next));
}

void GraphWidget::AgregarArista(Nodo *origen,Nodo *destino,int val)
{
    Arista *arista=new Arista(origen,destino);
    arista->txtReference=txtReference;
    arista->Valor=val;
    arista->Identificador=origen->Identificador+ "->" +destino->Identificador +"_";
    scene()->addItem(arista);
}

void GraphWidget::agregarNodo(qreal x, qreal y)
{
    if (nodosAgregados.count()>=NodoPermitidos)
    {
        util::ShowMessage("No puede agregar mas de 99 nodos.");
        return;
    }

    Nodo *newNodo=new Nodo(this);
    newNodo->Identificador= getIdentificador(QString::number(nodosAgregados.count()));
    newNodo->txtReference=this->txtReference;
    nodosAgregados.append(newNodo);
    scene()->addItem(newNodo);
    newNodo->setPos(x,y);

}
