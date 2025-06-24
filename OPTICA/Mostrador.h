#ifndef MOSTRADOR_H
#define MOSTRADOR_H

#include <QDialog>

namespace Ui {
class Mostrador;
}

class Mostrador : public QDialog
{
    Q_OBJECT

public:
    explicit Mostrador(QWidget *parent = nullptr);
    ~Mostrador();

private:
    Ui::Mostrador *ui;
};

#endif // MOSTRADOR_H
