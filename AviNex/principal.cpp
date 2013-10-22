#include "principal.h"
#include "ui_principal.h"
#include "nodo.h"
#include "arista.h"
#include "dialogubicaciones.h"
#include <string>
#include <iostream>
#include "Grafo.h"
#include "windows.h"
#include <QDebug>

#include <stdio.h>
#include <vector>
#include <queue>

using namespace std;


#define no_visitado -1
#define infinito 9999



QString msjinfo="Click derecho para crear un nuevo nodo. Doble Click sobre un nodo creado para hacer un enlace.";


struct estructura_etiqueta{
    int padre;
    int acumulada;
    QString ruta;
    QList<int > rutas;
};

struct estructura_Costos{
    int desde;
    int hasta;
    int padre;
    int costo;
    QString ruta;
};

void cargar_grafo(QList<Nodo *> nodos,Grafo<int> &grafo1)
{
    //agregar los vertices
    foreach (Nodo *nodo, nodos)
    {
        int vertice=nodo->Identificador.toInt();
        grafo1.agregarVertice(vertice);
    }

    //Agregar las aristas, ya deben estar creados los vertices
    foreach (Nodo *nodo, nodos)
    {
        foreach (Arista *arista, nodo->Aristas())
        {
            int origen=arista->sourceNode()->Identificador.toInt();
            int dest=arista->destNode()->Identificador.toInt();
            int valor=arista->Valor;
            grafo1.agregarArco(origen,dest,valor);
        }
    }
}

void IninializarEstructuraGrafo(list<int> vertices, int marca_visitados[], estructura_etiqueta etiqueta[])
{
    list<int>::const_iterator iterador;
    for(iterador = vertices.begin(); iterador != vertices.end(); iterador++)
    {
        marca_visitados[*iterador] = no_visitado;
        etiqueta[*iterador].padre = no_visitado;
        etiqueta[*iterador].acumulada = infinito;
        etiqueta[*iterador].ruta="";
    }
}



//---------------------------------------------------------------------//
int ExtraerAcumulacionMinima(list<int> &vertices, estructura_etiqueta etiqueta[])
{
    list<int>::const_iterator iterador;
    int minimo=infinito;
    int nodo;

    for(iterador = vertices.begin(); iterador != vertices.end(); iterador++)
    {
        if(minimo > etiqueta[*iterador].acumulada)
        {
            minimo = etiqueta[*iterador].acumulada;
            nodo = *iterador;
        }
    }

    vertices.remove(nodo);

    return nodo;
}
//---------------------------------------------------------------------//
void Alg_Dijkstra(Grafo<int> grafo1, int fuente, estructura_etiqueta etiqueta[], list<int> &vertices)
{
    etiqueta[fuente].acumulada = 0;
    etiqueta[fuente].padre = 0;
    while(!vertices.empty())
    {
        int nodo = ExtraerAcumulacionMinima(vertices, etiqueta);
        list<Grafo<int>::Arco> AristasAdyacentes;
        grafo1.devolverAdyacentes(nodo, AristasAdyacentes);
        list<Grafo<int>::Arco>::const_iterator iterador_adyacente;

        for(iterador_adyacente = AristasAdyacentes.begin(); iterador_adyacente != AristasAdyacentes.end(); iterador_adyacente++)
        {
            int Adyacente=iterador_adyacente->devolverAdyacente();
            int costoArco=grafo1.costoArco(nodo, Adyacente);

            if(etiqueta[Adyacente].acumulada > (etiqueta[nodo].acumulada + costoArco))
            {
                etiqueta[Adyacente].acumulada = (etiqueta[nodo].acumulada + costoArco);
                etiqueta[Adyacente].padre = nodo;
                etiqueta[Adyacente].ruta+=QString::number(nodo);

                etiqueta[Adyacente].rutas.append(nodo);
                etiqueta[Adyacente].rutas.append(Adyacente);
            }
        }

        AristasAdyacentes.clear();
    }
}

Principal::Principal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Principal)
{
    ui->setupUi(this);
    this->ui->GraphWidget1->txtReference=this->ui->txtReference;
    this->ui->lcdControles->setVisible(false);
    ui->lcdCosto->setVisible(false);
    ui->teRutaCorta->setVisible(false);
    ui->teinfo->setText(msjinfo);
}


Principal::~Principal()
{
    delete ui;
}

void OrdenamientoInsercion(int arry[], int tam)
{
    for (int i = 1; i < tam; i++)
    {
        int j = i;
        int aux = arry[i];
        while (j > 0 && aux < arry[j-1])
        {
            arry[j] = arry[j-1];
            j--;
        }
        arry[j] = aux;
    }
}

estructura_Costos* getCosto(QList<estructura_Costos *> Costos,int identificaror)
{
    foreach (estructura_Costos *costo, Costos)
        if (costo->hasta==identificaror)
            return costo;

    return NULL;
}

QString EncontrarRutas(QList<estructura_Costos *> Costos,estructura_Costos *costo, QString ruta)
{
    int padre=costo->padre;
    if (padre!=0)
    {
        ruta+=QString::number(padre) +"-";
        estructura_Costos *Padre=getCosto(Costos,padre);

        if (Padre!=NULL)
        {
            int padredelPadre=Padre->padre;
            bool continuar=true;

            while(padredelPadre!=0 || !continuar)
            {
                if (ruta.contains(QString::number(padredelPadre)))
                    return ruta;

                ruta+=QString::number(padredelPadre)+"-";

                Padre=getCosto(Costos,padredelPadre);
                if (Padre!=NULL)
                {
                    padredelPadre=Padre->padre;
                }
            }
        }
    }

    return ruta;
}

void EncontrarRutas(QList<estructura_Costos *> Costos)
{
    foreach (estructura_Costos *costo, Costos)
    {
        QString ruta= EncontrarRutas(Costos,costo,"") ;

        if(!ruta.contains(QString::number(costo->hasta)))
            ruta=QString::number(costo->hasta)+"-" + ruta;

        if(!ruta.contains(QString::number(costo->desde)))
            ruta+=QString::number(costo->desde);

        costo->ruta=ruta;
    }
}

void Principal::ColorearCaminos(QStringList vertices)
{
    cout <<"\n Cant Vertices " << vertices.size();

    if(vertices.size()<=0)
        return;

    if (vertices.size()<2)
        return;

    int dest=vertices.size()-1;
    int source=dest-1;

//    cout <<"\n Colorear aristas de idx dest " << dest << " source " << source;

    while(source>=0)
    {
        QString identDest=vertices.at(dest);
        QString identSource=vertices.at(source);

        cout <<"\n Colorear aristas de Ident  dest " << identDest.toStdString() << " source " << identSource.toStdString();;

        bool encontrado=false;
        Nodo *nodoDest=ui->GraphWidget1->GetNodoIdent(identDest,encontrado);

        if(encontrado && nodoDest!=NULL)
        {
            foreach (Arista *arista, nodoDest->Aristas())
            {
                if(arista->source->Identificador==identSource || arista->dest->Identificador==identSource)
                {
                    arista->estatus_Item=RutaHaciaLadron;
                    arista->update();
                    //cout <<"\n Coloreando arista dest " << dest << " source " << source << " arista " << arista->Identificador.toStdString() <<"\n";
                }
            }
        }

        dest--;
        source--;

    }





}

void Principal::Ejecutar(DialogUbicaciones *ubi)
{
    int ControlesPolicialesRequeridos=0;
    bool DesdeControlHastaLadron=false;

    if (ubi!=NULL)
    {
        ui->GraphWidget1->nodoCriminal=ubi->NodoCriminal;
        ui->GraphWidget1->nodoCriminal->estatus_Item=ColorLadrones;
        ui->GraphWidget1->nodosPolicias=ubi->nodosPolicias;
    }

    ui->GraphWidget1->nodoCriminal->update();
    int IdentificadorCriminal=ui->GraphWidget1->nodoCriminal->Identificador.toInt();
    QList<int> IdenficadoresNodosPolicias;

    foreach (Nodo *nodo, ui->GraphWidget1->nodosPolicias)
    {
        nodo->estatus_Item=UbicacionInicialPolicia;

        if(!DesdeControlHastaLadron)
            IdenficadoresNodosPolicias.push_back(nodo->Identificador.toInt());

        nodo->update();
    }

    QList<Arista *>  aristas= ui->GraphWidget1->nodoCriminal->Aristas();


    foreach(Arista *arista,aristas)
    {
        arista->estatus_Item=ColorLadrones;
        arista->update();

        if (arista->sourceNode()->estatus_Item==ColorLadrones)
        {
            arista->destNode()->estatus_Item=ColorPolicia;
            arista->destNode()->update();
            ControlesPolicialesRequeridos++;

            if(DesdeControlHastaLadron)
                IdenficadoresNodosPolicias.push_back(arista->destNode()->Identificador.toInt());

            continue;
        }

        arista->sourceNode()->estatus_Item= ColorPolicia;

        if(DesdeControlHastaLadron)
            IdenficadoresNodosPolicias.push_back(arista->sourceNode()->Identificador.toInt());

        arista->sourceNode()->update();
        ControlesPolicialesRequeridos++;

        if (arista->destNode()->estatus_Item==ColorLadrones)
            continue;
        else
        {
            if(DesdeControlHastaLadron)
                IdenficadoresNodosPolicias.push_back(arista->destNode()->Identificador.toInt());

            arista->destNode()->estatus_Item= ColorPolicia;
            arista->destNode()->update();
            ControlesPolicialesRequeridos++;
        }

    }


    Grafo<int> grafo1;
    cargar_grafo(ui->GraphWidget1->nodosAgregados,grafo1);

    list<int> vertices;
    grafo1.devolverVertices(vertices);

    int marca_visitados[vertices.size()];

    estructura_etiqueta etiqueta[vertices.size()];
    IninializarEstructuraGrafo(vertices, marca_visitados, etiqueta);

    list<int>::const_iterator iterador;
    iterador = vertices.begin();
    int desde=IdentificadorCriminal;

    Alg_Dijkstra(grafo1,desde, etiqueta, vertices);
    grafo1.devolverVertices(vertices);


    QList<estructura_Costos *> Costos;
    int costoMenor=INT_MAX;
    int VerticeMenorCosto=-1;

    for(iterador = vertices.begin(); iterador != vertices.end(); iterador++)
    {
        if(IdenficadoresNodosPolicias.contains(*iterador))
        {
            if (etiqueta[*iterador].acumulada<costoMenor)
            {
                costoMenor= etiqueta[*iterador].acumulada ;
                VerticeMenorCosto=*iterador;
            }
        }

        estructura_Costos *costo=new estructura_Costos();
        costo->desde=desde;
        costo->hasta=*iterador;
        costo->padre=etiqueta[*iterador].padre;
        costo->costo=etiqueta[*iterador].acumulada;
        costo->ruta="";
        Costos.append(costo);

        //        cout << "Del "<< desde << " al vertice: " << *iterador << endl;
        //        cout << "Costo: " << etiqueta[*iterador].acumulada << endl;
        //        cout << "Padre: " << etiqueta[*iterador].padre << endl;
        //        cout << "\n-------------------------------------" << endl << endl;
    }


    EncontrarRutas(Costos);



    cout<<"\n Tabla de costos con las rutas \n";
    foreach (estructura_Costos *costo, Costos)
    {
        QString print=tr("Desde:%0 Hasta: %1 Padre:%2 Costo:%3 Ruta:%4").arg(costo->desde).arg(costo->hasta).arg(costo->padre).arg(costo->costo).arg(costo->ruta);
        cout << print.toStdString() << endl ;
    }

    ui->lcdControles->setVisible(true);
    ui->lcdCosto->setVisible(true);
    ui->teRutaCorta->setVisible(true);

    ui->lcdControles->display(ControlesPolicialesRequeridos/2);

    estructura_Costos *CostoMenor=getCosto(Costos,VerticeMenorCosto);
    if(costoMenor!=NULL)
    {
        ui->lcdCosto->display(CostoMenor->costo);
        ui->teRutaCorta->setText(CostoMenor->ruta);

        QStringList vertices=CostoMenor->ruta.split("-");
        ColorearCaminos(vertices);


    }
    else
    {
        ui->lcdCosto->display(-1);
        ui->teRutaCorta->setText("No capturado");
    }

}



void Principal::on_btnSetLadron_clicked()
{
    if (ui->GraphWidget1->nodosAgregados.count()<3)
    {
        util::ShowMessage("Agregue 3 nodos como minimo.");
        return;
    }

    DialogUbicaciones *ubi=new DialogUbicaciones(ui->GraphWidget1->nodosAgregados,this);
    ubi->exec();

    if (ubi->Aceptado)
    {
        Ejecutar(ubi);
    }

}


void Principal::on_txtReference_textChanged()
{
    bool encontroNodo;

    Nodo *nodo=ui->GraphWidget1->GetNodo(ui->txtReference->toPlainText(),encontroNodo);

    if (nodo!=ui->GraphWidget1->NodoEnlazarOrigen)
    {
        if (encontroNodo)
        {
            if(nodo->estatus_Item==ColorLadrones)
            {
                ui->teinfo->setText(msjinfo);
                ui->GraphWidget1->NodoEnlazarOrigen=NULL;
                ui->GraphWidget1->EnlaceNodosActivo=false;
                return;
            }

            if (nodo->estatus_Item==SeleccionPCArista)
            {
                //si es el primer nodo que se selecciona
                if (ui->GraphWidget1->NodoEnlazarOrigen==NULL)
                {
                    ui->teinfo->setText("Doble click sobre el otro nodo con el que desea crear la arista ó presione la tecla eliminar.");
                    ui->GraphWidget1->NodoEnlazarOrigen=nodo;
                    ui->GraphWidget1->NodoEnlazarOrigen->numClicks=0;
                    ui->GraphWidget1->EnlaceNodosActivo=true;
                    return;
                }
                else // si ya se selecciono el primero,entonces hacer el enlace
                {
                    ui->GraphWidget1->NodoEnlazarOrigen->estatus_Item=ui->GraphWidget1->NodoEnlazarOrigen->old_estatus_Item;
                    nodo->estatus_Item=nodo->old_estatus_Item;
                    nodo->numClicks=0;
                    ui->GraphWidget1->NodoEnlazarOrigen->numClicks=0;

                    ui->GraphWidget1->NodoEnlazarOrigen->update();
                    nodo->update();

                    ui->GraphWidget1->AgregarArista(ui->GraphWidget1->NodoEnlazarOrigen,nodo,0);
                    ui->GraphWidget1->AgregarArista(nodo,ui->GraphWidget1->NodoEnlazarOrigen,0);

                    ui->GraphWidget1->NodoEnlazarOrigen=NULL;
                    ui->GraphWidget1->EnlaceNodosActivo=false;
                    ui->teinfo->setText(msjinfo);
                    return;
                }
            }
            else
                ui->teinfo->setText(msjinfo);
        }
        else
            ui->teinfo->setText(msjinfo);

        ui->GraphWidget1->NodoEnlazarOrigen=NULL;
        ui->GraphWidget1->EnlaceNodosActivo=false;
    }
    else
    {
        ui->teinfo->setText(msjinfo);
        ui->GraphWidget1->NodoEnlazarOrigen=NULL;
        ui->GraphWidget1->EnlaceNodosActivo=false;
    }
}

void Principal::on_btnRestar_clicked()
{
    foreach(Nodo *nodo, ui->GraphWidget1->nodosAgregados)
    {
        nodo->SetStatusAristas(ColorNormal);
        nodo->estatus_Item=ColorNormal;
        nodo->update();
        ui->GraphWidget1->update();
        ui->GraphWidget1->scene()->update();
    }

    ui->GraphWidget1->nodoCriminal=NULL;
    ui->GraphWidget1->nodosPolicias.clear();
    ui->teinfo->setText("");
    ui->GraphWidget1->NodoEnlazarOrigen=NULL;
    ui->GraphWidget1->EnlaceNodosActivo=false;

    ui->lcdControles->setVisible(false);
    ui->lcdControles->display(0);

    ui->lcdCosto->setVisible(false);
    ui->lcdCosto->display(0);

    ui->teRutaCorta->setVisible(false);
    ui->teRutaCorta->setText("");

}

void Principal::closeEvent(QCloseEvent *e)
{
    e->setAccepted(false);

    QMessageBox msgBox;
    msgBox.setText("Desea salir de la aplicación?");
    msgBox.setInformativeText("");
    msgBox.setStandardButtons(QMessageBox::Close | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Cancel);
    msgBox.setWindowTitle("Simulador");

    int ret =msgBox.exec();

    if(ret==QMessageBox::Close){
        e->setAccepted(true);
        return;
    }
}

void Principal::on_btnRestar_2_clicked()
{
    this->close();
}

void Principal::on_btnEjecutar_clicked()
{
    Ejecutar(NULL);
}
