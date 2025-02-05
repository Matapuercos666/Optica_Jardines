#include "gestor_fuentes.h"

// Implementación del singleton
Gestor_Fuentes& Gestor_Fuentes::instancia()
{
    static GestorFuentes instancia; // Única instancia
    return instancia;
}

// Constructor privado
GestorFuentes::GestorFuentes()
{
    // Inicialización si es necesaria
}

// Cargar una fuente desde un archivo .ttf
bool GestorFuentes::cargarFuente(const QString &nombre, const QString &ruta)
{
    int fontId = QFontDatabase::addApplicationFont(ruta);
    if (fontId == -1) {
        qDebug() << "Error al cargar la fuente:" << ruta;
        return false;
    }

    QStringList fontFamilies = QFontDatabase::applicationFontFamilies(fontId);
    if (fontFamilies.isEmpty()) {
        qDebug() << "No se pudo obtener la familia de la fuente:" << ruta;
        return false;
    }

    fuentes[nombre] = fontFamilies.at(0); // Almacenar el nombre de la familia
    return true;
}

// Obtener una fuente cargada por su nombre
QFont GestorFuentes::obtenerFuente(const QString &nombre, int tamaño)
{
    if (fuentes.contains(nombre)) {
        return QFont(fuentes[nombre], tamaño);
    } else {
        qDebug() << "Fuente no encontrada:" << nombre;
        return QFont(); // Devuelve una fuente por defecto
    }
}
