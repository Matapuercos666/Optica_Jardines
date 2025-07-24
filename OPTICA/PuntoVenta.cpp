#include "PuntoVenta.h"
#include "ui_PuntoVenta.h"

PuntoVenta::PuntoVenta(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PuntoVenta)
{
    ui->setupUi(this);
}

PuntoVenta::~PuntoVenta()
{
    delete ui;
}
