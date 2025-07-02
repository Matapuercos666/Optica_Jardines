#ifndef EMPLEADOS_H
#define EMPLEADOS_H

#include <QMainWindow>
#include <QPointer>
#include "Lista_Clientes.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class Empleados;
}
QT_END_NAMESPACE

class Empleados : public QMainWindow
{
    Q_OBJECT


public:
    explicit Empleados(QWidget *parent = nullptr);
    ~Empleados();

private slots:
    void Prueba_A_Lista();

private:
    Ui::Empleados *ui;

    //Ppunteros a las siguientes ventanas

    Lista_Clientes *ListaWindow;
};

#endif // EMPLEADOS_H
