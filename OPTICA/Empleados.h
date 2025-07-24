#ifndef EMPLEADOS_H
#define EMPLEADOS_H

#include <QMainWindow>
#include <QPointer>
#include "Lista_Clientes.h"
#include "PuntoVenta.h"
#include "Inventario.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class Empleados;
}
QT_END_NAMESPACE

class Empleados : public QMainWindow
{
    Q_OBJECT


public:
    explicit Empleados(QWidget *parent = nullptr);
    ~Empleados();

private slots:
    void Boton_Lista();
    void Boton_Punto();
    void Boton_Inventario();

private:
    Ui::Empleados *ui;

    //Ppunteros a las siguientes ventanas

    Lista_Clientes *ListaWindow;
    PuntoVenta *Punto_Venta_Window;
    Inventario *InventarioWindow;
};

#endif // EMPLEADOS_H
