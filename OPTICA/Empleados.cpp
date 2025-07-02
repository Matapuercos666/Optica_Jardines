#include "Empleados.h"
#include "ui_Empleados.h"
#include "ESTILOS.h"

Empleados::Empleados(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Empleados)
{    
    ui->setupUi(this);
    Fuente::AplicarTodas(this);

    //Conectar el botón
    connect(ui->Lista, &QPushButton::clicked, this, &Empleados::Prueba_A_Lista);
}

void Empleados::Prueba_A_Lista()
{
    // Si no existe la ventana, la crea. Si ya existe, solo la muestra.
    if (!ListaWindow) {
        ListaWindow = new Lista_Clientes();
    }
    ListaWindow->show();
    this->close(); // Opcional: oculta la ventana actual
}

Empleados::~Empleados()
{
    delete ui;
}
