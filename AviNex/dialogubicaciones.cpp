#include "dialogubicaciones.h"
#include "ui_dialogubicaciones.h"
#include <QListWidgetItem>

DialogUbicaciones::DialogUbicaciones(QList<Nodo *> listaNodos,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogUbicaciones)
{
    ui->setupUi(this);
    nodosAgregados=listaNodos;
    Aceptado=false;
    NodoCriminal=NULL;
    foreach (Nodo *nodo, nodosAgregados)
    {
        ui->ListaCriminales->addItem(CrearListItem(nodo->Identificador,false));
        ui->ListaPolicias->addItem(CrearListItem(nodo->Identificador,true));
    }
}

QListWidgetItem* DialogUbicaciones::CrearListItem(QString Identificador, bool EsPolicia)
{
    QListWidgetItem *newItem = new QListWidgetItem;
    newItem->setText("  "+ Identificador);

    QPixmap icon;

    if (EsPolicia)
        icon.load(":/recursos/Police.png");
    else
        icon.load(":/recursos/Thief.png");

    newItem->setIcon(QIcon(icon));

    return newItem;
}

Nodo* DialogUbicaciones::GetNodo(QString Identificador, bool &encontroNodo)
{
    encontroNodo=false;
    Identificador=Identificador.trimmed();

    foreach(Nodo *nodo, nodosAgregados)
    {
        if (nodo->Identificador==Identificador)
        {
            encontroNodo=true;
            return nodo;
        }
    }

    return NULL;
}

DialogUbicaciones::~DialogUbicaciones()
{
    delete ui;
}

void DialogUbicaciones::on_ListaCriminales_itemPressed(QListWidgetItem *item)
{
    bool Encontrado=false;
    NodoCriminal=GetNodo(item->text().trimmed(),Encontrado);
    if (NodoCriminal==NULL || !Encontrado)
    {
        ui->lbinfocriminal->setText("Ubicación de los criminales no especificada.");
    }

    if (NodoCriminal!=NULL && Encontrado)
    {
        ui->lbinfocriminal->setText("Ubicación en nodo :" + NodoCriminal->Identificador);
    }


}




void DialogUbicaciones::on_ListaPolicias_itemDoubleClicked(QListWidgetItem *item)
{
    if(NodoCriminal!=NULL)
    {
        if(NodoCriminal->Identificador==item->text().trimmed())
        {
            util::ShowMessage(tr("No puede seleccionar la ubicación (%0) espeficicada para los criminales.").arg(NodoCriminal->Identificador.trimmed()));
            return;
        }
    }

    ui->ListaPolicias_Seleccionados->addItem(CrearListItem(item->text().trimmed(),true));
    qDeleteAll(ui->ListaPolicias->selectedItems());

}

void DialogUbicaciones::on_ListaPolicias_Seleccionados_itemDoubleClicked(QListWidgetItem *item)
{
    ui->ListaPolicias->addItem(CrearListItem(item->text().trimmed(),true));
    qDeleteAll(ui->ListaPolicias_Seleccionados->selectedItems());
}

void DialogUbicaciones::on_btncancel_clicked()
{
    Aceptado=false;
    close();
}

void DialogUbicaciones::on_btnAcept_clicked()
{
    if (NodoCriminal==NULL)
    {
        util::ShowMessage("Seleccionar la ubicación de los criminales.");
        return;
    }

    if (ui->ListaPolicias_Seleccionados->count()<=0)
    {
        util::ShowMessage("Seleccionar las ubicaciones de los policias.");
        return;
    }

    QList<QListWidgetItem*> items = ui->ListaPolicias_Seleccionados->findItems(QString("*"), Qt::MatchWrap | Qt::MatchWildcard);

    //Verificacion que nodos esten bien definidos
    foreach (QListWidgetItem *item,items)
    {
        if (item->text().trimmed()==NodoCriminal->Identificador)
        {
            util::ShowMessage(tr("No puede seleccionar la ubicación (%0) espeficicada para los criminales.").arg(NodoCriminal->Identificador.trimmed()));
            return;
        }
    }

    //Agregar a los nodos seleccionados
    foreach (QListWidgetItem *item,items)
    {
        bool Encontrado=false;
        Nodo *policia=GetNodo(item->text().trimmed(),Encontrado);
        if (policia!=NULL && Encontrado)
        {
            nodosPolicias.append(policia);
        }
    }

    Aceptado=true;
    close();
}
