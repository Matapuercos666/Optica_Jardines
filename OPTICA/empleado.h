#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <QFontDatabase>
#include <QLabel>
#include <QDebug>
#include <QMainWindow>
#include <QWidget>

class empleado : public QWidget
{
    Q_OBJECT
public:
    explicit empleado(QWidget *parent = nullptr);

signals:
};

#endif // EMPLEADO_H
