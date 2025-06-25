#ifndef OPTICA_JARDINES_H
#define OPTICA_JARDINES_H
#include <QFontDatabase>
#include <QLabel>
#include <QDebug>
#include <QMainWindow>

#include "Empleados.h"   //Segunda ventana

QT_BEGIN_NAMESPACE
namespace Ui {
class Optica_Jardines;
}
QT_END_NAMESPACE

class Optica_Jardines : public QMainWindow
{
    Q_OBJECT

public:
    Optica_Jardines(QWidget *parent = nullptr);
    ~Optica_Jardines();

private slots:
    void on_ENTRAR_clicked();

private:
    Ui::Optica_Jardines *ui;
    Empleados *EmpleadosWindow; //Puntero a la ventana empleados
    //Metodo para cargar fuentes
    QFont CargarFuente(const QString &ruta, int tamaño);
    QLabel *tMontserrat;
    QLabel *tRaleway;
    QLabel *tLato;
    QLabel *tRoboto;
};
#endif // OPTICA_JARDINES_H
