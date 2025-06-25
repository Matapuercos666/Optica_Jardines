#include "optica_jardines.h"

#include <QApplication>

#include <QFontDatabase>

#include <QDebug>

#include <QLabel>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Fuente::inicializar(); // <<--- Precarga las fuentes



    Optica_Jardines w;
    w.show();
    return a.exec();
}
