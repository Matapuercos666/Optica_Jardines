#ifndef PUNTOVENTA_H
#define PUNTOVENTA_H

#include <QMainWindow>

namespace Ui {
class PuntoVenta;
}

class PuntoVenta : public QMainWindow
{
    Q_OBJECT

public:
    explicit PuntoVenta(QWidget *parent = nullptr);
    ~PuntoVenta();

private:
    Ui::PuntoVenta *ui;
};

#endif // PUNTOVENTA_H
