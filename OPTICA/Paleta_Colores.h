#ifndef PALETA_COLORES_H
#define PALETA_COLORES_H

#include <QColor>
#include <QMap>
#include <QString>

class PaletaColores {
public:
    // Llama a este método UNA SOLA VEZ al iniciar la app
    static void inicializar() {
        if (inicializado) return;
        colorPrincipal   = QColor(26, 35, 126);   // Ejemplo: azul oscuro
        colorSecundario  = QColor(57, 73, 171);   // Ejemplo: azul medio
        colorFondo       = QColor(241, 250, 238); // Ejemplo: fondo claro
        colorTexto       = QColor(33, 33, 33);    // Ejemplo: texto oscuro
        colorExito       = QColor(76, 175, 80);   // Ejemplo: verde éxito
        colorAdvertencia = QColor(255, 193, 7);   // Ejemplo: amarillo advertencia
        colorError       = QColor(244, 67, 54);   // Ejemplo: rojo error
        colorBorde       = QColor(230, 57, 70); // Ejemplo: gris bordes
        inicializado = true;
    }

    static QColor principal()    { return colorPrincipal; }
    static QColor secundario()   { return colorSecundario; }
    static QColor fondo()        { return colorFondo; }
    static QColor texto()        { return colorTexto; }
    static QColor exito()        { return colorExito; }
    static QColor advertencia()  { return colorAdvertencia; }
    static QColor error()        { return colorError; }
    static QColor borde()        { return colorBorde; }

private:
    static inline QColor colorPrincipal;
    static inline QColor colorSecundario;
    static inline QColor colorFondo;
    static inline QColor colorTexto;
    static inline QColor colorExito;
    static inline QColor colorAdvertencia;
    static inline QColor colorError;
    static inline QColor colorBorde;
    static inline bool inicializado = false;
};

#endif // PALETA_COLORES_H
