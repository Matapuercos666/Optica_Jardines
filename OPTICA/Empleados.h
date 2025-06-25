#ifndef EMPLEADOS_H
#define EMPLEADOS_H

#include <QMainWindow>

namespace Ui {
class Empleados;
}

class Empleados : public QMainWindow
{
    Q_OBJECT

public:
    explicit Empleados(QWidget *parent = nullptr);
    ~Empleados();

private:
    Ui::Empleados *ui;
};

#endif // EMPLEADOS_H
