QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Empleados.cpp \
    Inventario.cpp \
    Lista_Clientes.cpp \
    PuntoVenta.cpp \
    main.cpp \
    optica_jardines.cpp

HEADERS += \
    ESTILOS.h \
    Empleados.h \
    Inventario.h \
    Lista_Clientes.h \
    PuntoVenta.h \
    optica_jardines.h

FORMS += \
    Empleados.ui \
    Inventario.ui \
    Lista_Clientes.ui \
    PuntoVenta.ui \
    optica_jardines.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Imagenes_Fuentes.qrc

DISTFILES += \
    IMAGENES/LOGOS/Logo con fondo gris.png
