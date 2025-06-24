#include "Mostrador.h"
#include "ui_Mostrador.h"

Mostrador::Mostrador(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Mostrador)
{
    ui->setupUi(this);
}

Mostrador::~Mostrador()
{
    delete ui;
}
