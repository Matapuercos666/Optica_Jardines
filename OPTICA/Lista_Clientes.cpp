#include "Lista_Clientes.h"
#include "ui_Lista_Clientes.h"
#include "ESTILOS.h"
#include "Empleados.h"

Lista_Clientes::Lista_Clientes(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Lista_Clientes)
{
    ui->setupUi(this);
    Fuente::AplicarTodas(this);
}

Lista_Clientes::~Lista_Clientes()
{
    delete ui;
}
