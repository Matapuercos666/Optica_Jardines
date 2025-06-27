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
        ColorAzulM      = QColor(69, 123, 157);     //Azul Mediano
        ColorAzulF      = QColor(29, 53, 87);       //Azul Fuerte
        ColorAzulC      = QColor(168, 218, 220);    //Azul Claro
        ColorBlanco     = QColor(241, 250, 238);    //Blanco
        ColorRojo       = QColor(230, 57, 70);      //Rojo
        ColorNegro      = QColor(0,0,0);            //Negro

        inicializado = true;
    }

    static QColor AzulMedio()       { return ColorAzulM; }
    static QColor AzulFuerte()      { return ColorAzulF; }
    static QColor AzulClaro()       { return ColorAzulC; }
    static QColor Blanco()          { return ColorBlanco; }
    static QColor Rojo()            { return ColorRojo; }
    static QColor Negro()           { return ColorNegro; }

private:
    static inline QColor ColorAzulM;
    static inline QColor ColorAzulF;
    static inline QColor ColorAzulC;
    static inline QColor ColorBlanco;
    static inline QColor ColorRojo;
    static inline QColor ColorNegro;

    static inline bool inicializado = false;
};

#endif // PALETA_COLORES_H
