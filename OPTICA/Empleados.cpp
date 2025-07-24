#include "Empleados.h"
#include "ui_Empleados.h"
#include "ESTILOS.h"

Empleados::Empleados(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Empleados)
    , ListaWindow(nullptr)
    , Punto_Venta_Window(nullptr)
    , InventarioWindow(nullptr)
{    
    ui->setupUi(this);
    Fuente::AplicarTodas(this);

    //Conectar el botón
    connect(ui->Lista, &QPushButton::clicked, this, &Empleados::Boton_Lista);
    connect(ui->Punto, &QPushButton::clicked, this, &Empleados::Boton_Punto);
    connect(ui->Inventario, &QPushButton::clicked, this, &Empleados::Boton_Inventario);
}

void Empleados::Boton_Lista()
{
    if (!ListaWindow || ListaWindow->isHidden())
    {
        delete ListaWindow;
        ListaWindow = new Lista_Clientes(this);
        ListaWindow->setAttribute(Qt::WA_DeleteOnClose);
    }
    ListaWindow->show();
    this->hide();
}

void Empleados::Boton_Punto()
{
    if (!Punto_Venta_Window || Punto_Venta_Window->isHidden())
    {
        delete Punto_Venta_Window;
        Punto_Venta_Window = new PuntoVenta(this);  // Se hace padre de la ventana punto de venta para poder recuperar la referencia
        Punto_Venta_Window->setAttribute(Qt::WA_DeleteOnClose);
    }
    Punto_Venta_Window->show();
    this->hide();
}

void Empleados::Boton_Inventario()
{
    if (!InventarioWindow || InventarioWindow->isHidden())
    {
        delete InventarioWindow;
        InventarioWindow = new Inventario(this);
        InventarioWindow->setAttribute(Qt::WA_DeleteOnClose);
    }
    InventarioWindow->show();
    this->hide();
}

Empleados::~Empleados()
{
    delete ui;
}
