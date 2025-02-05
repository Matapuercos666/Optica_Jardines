#ifndef GESTOR_FUENTES_H
#define GESTOR_FUENTES_H

#include <QObject>

class Gestor_Fuentes : public QObject
{
    Q_OBJECT
public:
    explicit Gestor_Fuentes(QObject *parent = nullptr);

signals:
};

#endif // GESTOR_FUENTES_H
