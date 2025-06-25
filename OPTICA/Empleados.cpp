#include "Empleados.h"
#include "ui_Empleados.h"

Empleados::Empleados(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Empleados)
{
    ui->setupUi(this);
}

Empleados::~Empleados()
{
    delete ui;
}
