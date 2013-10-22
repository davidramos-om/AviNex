
#ifndef GRAPHWIDGET_H
#define GRAPHWIDGET_H

#include <QtGui/QGraphicsView>
#include <QMessageBox>
#include <QTextEdit>

class Nodo;


class GraphWidget : public QGraphicsView
{
    Q_OBJECT

public:
    GraphWidget(QWidget *parent = 0);
    QList<Nodo *> nodosAgregados;
    bool AgregarTodoPresionado;
    QTextEdit *txtReference;
    Nodo* GetNodo(QString Identificador, bool &encontroNodo);
    Nodo* GetNodoIdent(QString Identificador, bool &encontroNodo);
    int GetIndexNodo(QString Identificador, bool &encontroNodo);
    QString getIdentificador(QString sugerencia);

    QList<Nodo *> nodosPolicias;
    Nodo *nodoCriminal;

    void RefrescarNodos();
    Nodo *NodoEnlazarOrigen;
    bool EnlaceNodosActivo;

public slots:
    void agregarNodo(qreal x, qreal y);
    void AgregarArista(Nodo *origen,Nodo *destino,int val);



protected:
    void keyPressEvent(QKeyEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);


};


#endif
