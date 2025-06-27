#ifndef FUENTES_H
#define FUENTES_H

#include <QFont>
#include <QFontDatabase>
#include <QMap>
#include <QString>
#include <QDebug>
#include <QWidget>
#include <QLabel>


class Fuente {
public:
    // Llama a este método UNA SOLA VEZ al iniciar
    static void inicializar() {
        if (inicializado) return;
        // Precarga fuentes con tamaños estándar
        fuenteTitulo     = cargarFuente(":/fuentes/FUENTES/Playfair/static/Playfair_9pt_SemiCondensed-Bold.ttf", 48);
        fuenteSubtitulo  = cargarFuente(":/fuentes/FUENTES/Raleway/static/Raleway-ExtraLight.ttf", 48);
        fuentePie        = cargarFuente(":/fuentes/FUENTES/Montserrat/static/Montserrat-Italic.ttf", 9);
        fuenteEtiqueta   = cargarFuente(":/fuentes/FUENTES/Lato/Lato-Thin.ttf", 9);
        fuenteDescripcion= cargarFuente(":/fuentes/FUENTES/Roboto_Condensed/static/RobotoCondensed-Regular.ttf", 48);
        inicializado = true;
    }

    static QFont titulo()     { return fuenteTitulo; }
    static QFont subtitulo()  { return fuenteSubtitulo; }
    static QFont etiqueta()   { return fuenteEtiqueta; }
    static QFont descripcion(){ return fuenteDescripcion; }
    static QFont pie()        { return fuentePie; }

    //Funciones para aplicar estas fuentes:

    static void AplicarFuenteTitulo(QWidget *ventana) {
        // Busca todos los QLabel con objectName == "Titulo" de forma recursiva
        QList<QLabel*> titulos = ventana->findChildren<QLabel*>("Titulo", Qt::FindChildrenRecursively);
        for (QLabel* lbl : titulos) {
            lbl->setFont(Fuente::titulo());
        }
    }

    static void AplicarFuenteCEO(QWidget *ventana) {
        QList<QLabel*> ceos = ventana->findChildren<QLabel*>("CEO", Qt::FindChildrenRecursively);
        for (QLabel* lbl : ceos) {
            lbl->setFont(Fuente::pie());
        }
    }

    static void AplicarFuenteSubtitulo(QWidget *ventana){
        QList<QLabel*>subtitulos = ventana -> findChildren<QLabel*>("SubTitulo", Qt::FindChildrenRecursively);
        for (QLabel* lbl : subtitulos){
            lbl->setFont(Fuente::subtitulo());
        }
    }




    // Función para aplicar todas las funciones anteriores

    static void AplicarTodas(QWidget *ventana) {
        AplicarFuenteTitulo(ventana);
        AplicarFuenteCEO(ventana);
        AplicarFuenteSubtitulo(ventana);

    }
    




private:
    // Métodos y miembros privados
    static QFont cargarFuente(const QString &ruta, int tamaño) {
        static QMap<QString, QString> fuentesCargadas;
        if (!fuentesCargadas.contains(ruta)) {
            int id = QFontDatabase::addApplicationFont(ruta);
            if (id == -1) {
                qDebug() << "Error al cargar la fuente desde:" << ruta;
                return QFont();
            }
            QStringList fam = QFontDatabase::applicationFontFamilies(id);
            if (fam.isEmpty()) {
                qDebug() << "No se encontraron familias de fuente en:" << ruta;
                return QFont();
            }
            fuentesCargadas[ruta] = fam.first();
        }
        return QFont(fuentesCargadas[ruta], tamaño);
    }

    static inline QFont fuenteTitulo;
    static inline QFont fuenteSubtitulo;
    static inline QFont fuenteEtiqueta;
    static inline QFont fuenteDescripcion;
    static inline QFont fuentePie;
    static inline bool inicializado = false;
};

#endif // FUENTES_H
