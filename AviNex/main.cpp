#include <QtGui>

#include "graphwidget.h"
#include "principal.h"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    Principal mainWindow;
    mainWindow.show();

    return app.exec();
}
