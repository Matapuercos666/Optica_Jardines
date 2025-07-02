#ifndef OPTICA_JARDINES_H
#define OPTICA_JARDINES_H
#include <QDebug>
#include <QMainWindow>

#include "ESTILOS.H"
#include "Empleados.h"      //Segunda ventana
#include "Administrador.h"  //tercera ventana

namespace Ui {
class Optica_Jardines;
}

class Optica_Jardines : public QMainWindow
{
    Q_OBJECT

public:
    Optica_Jardines(QWidget *parent = nullptr);
    ~Optica_Jardines();

private slots:
    void on_ENTRAR_clicked();

private:
    Ui::Optica_Jardines *ui;

    //Ppunteros a las siguientes ventanas

    Empleados *EmpleadosWindow;
    Administrador *AdministradorWindow;
};
#endif // OPTICA_JARDINES_H
