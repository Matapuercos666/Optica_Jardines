#include "optica_jardines.h"
#include "ui_optica_jardines.h"
#include <QDebug>
#include <QLabel>

// Constructor
Optica_Jardines::Optica_Jardines(QWidget *parent) : QMainWindow(parent), ui(new Ui::Optica_Jardines)
{
    ui->setupUi(this);
    // Cargar fuentes
    QFont Montserrat = CargarFuente(":/fuentes/FUENTES/Montserrat/static/Montserrat-Italic.ttf", 9);
    QFont Lato = CargarFuente(":/fuentes/FUENTES/Lato/Lato-Thin.ttf", 9);
    QFont Raleway = CargarFuente(":/fuentes/FUENTES/Raleway/static/Raleway-ExtraLight.ttf", 48);
    QFont Roboto = CargarFuente(":/fuentes/FUENTES/Roboto_Condensed/static/RobotoCondensed-Regular.ttf", 48);
    QFont Playfair = CargarFuente(":/fuentes/FUENTES/Playfair/static/Playfair_9pt_SemiCondensed-Bold.ttf", 48);


    // Aplicar la fuente a la interfaz

    if (ui) {
        ui->Titulo->setFont(Playfair); // Aplica la fuente al título
        ui->CEO->setFont(Montserrat);
    }




}
QFont Optica_Jardines::CargarFuente(const QString &ruta, int tamaño)
{
    // Cargar la fuente desde el archivo
    int fontId = QFontDatabase::addApplicationFont(ruta);
    if (fontId == -1) {
        qDebug() << "Error al cargar la fuente desde:" << ruta;
        return QFont(); // Devuelve la fuente predeterminada
    }

    // Obtener la familia de la fuente
    QStringList fontFamilies = QFontDatabase::applicationFontFamilies(fontId);
    if (fontFamilies.isEmpty()) {
        qDebug() << "No se encontraron familias de fuente en:" << ruta;
        return QFont(); // Devuelve una fuente predeterminada
    }

    QString fontFamily = fontFamilies.first();
    qDebug() << "Fuente cargada con éxito:" << fontFamily;


    //Se crea la fuente
    QFont fuente(fontFamily, tamaño);


    return fuente; // Devuelve la fuente cargada
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

