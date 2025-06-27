#include "Empleados.h"
#include "ui_Empleados.h"
#include "Fuentes.h"

Empleados::Empleados(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Empleados)
{    
    ui->setupUi(this);
    Fuente::AplicarTodas(this);
}

Empleados::~Empleados()
{
    delete ui;
}
