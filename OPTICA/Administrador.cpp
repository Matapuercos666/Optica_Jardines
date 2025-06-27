#include "Administrador.h"
#include "ui_Administrador.h"

Administrador::Administrador(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Administrador)
{
    ui->setupUi(this);
}

Administrador::~Administrador()
{
    delete ui;
}
