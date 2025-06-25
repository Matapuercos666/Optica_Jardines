#include "optica_jardines.h"
#include "ui_optica_jardines.h"
#include <QDebug>
#include <QLabel>

// Constructor
Optica_Jardines::Optica_Jardines(QWidget *parent) : QMainWindow(parent), ui(new Ui::Optica_Jardines)
{
    ui->setupUi(this);


    // Aplicar la fuente a la interfaz

    if (ui) {
        ui->CEO->setFont(FuenteUtil::pie());
        ui->Titulo->setFont(FuenteUtil::titulo());
    }




}

Optica_Jardines::~Optica_Jardines()
{
    delete ui;
}

void Optica_Jardines::on_ENTRAR_clicked()
{
    EmpleadosWindow = new Empleados(this);
    EmpleadosWindow->show();
    this->hide(); // Si quieres ocultar la ventana principal
    // this->close(); // Si prefieres cerrarla por completo
}

