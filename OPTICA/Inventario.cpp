#include "Inventario.h"
#include "ui_Inventario.h"
#include "ESTILOS.h"

Inventario::Inventario(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Inventario)
{
    ui->setupUi(this);
    Fuente::AplicarTodas(this);

}

Inventario::~Inventario()
{
    delete ui;
}
