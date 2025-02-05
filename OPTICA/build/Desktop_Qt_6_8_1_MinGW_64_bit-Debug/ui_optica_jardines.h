/********************************************************************************
** Form generated from reading UI file 'optica_jardines.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTICA_JARDINES_H
#define UI_OPTICA_JARDINES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Optica_Jardines
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *Arriba;
    QLabel *Titulo;
    QLabel *label_2;
    QGridLayout *gridLayout_2;
    QLineEdit *contrasena;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *usuario;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QPushButton *ENTRAR;
    QLabel *CEO;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Optica_Jardines)
    {
        if (Optica_Jardines->objectName().isEmpty())
            Optica_Jardines->setObjectName("Optica_Jardines");
        Optica_Jardines->resize(800, 600);
        Optica_Jardines->setStyleSheet(QString::fromUtf8("background-color: rgb(241, 250, 238);\n"
"border-color: rgb(230, 57, 70);"));
        centralwidget = new QWidget(Optica_Jardines);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        Arriba = new QVBoxLayout();
        Arriba->setObjectName("Arriba");
        Titulo = new QLabel(centralwidget);
        Titulo->setObjectName("Titulo");
        Titulo->setMaximumSize(QSize(16777215, 200));
        Titulo->setStyleSheet(QString::fromUtf8("color: rgb(69, 123, 157);\n"
""));
        Titulo->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignHCenter);

        Arriba->addWidget(Titulo);


        verticalLayout_3->addLayout(Arriba);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setMaximumSize(QSize(16777215, 100));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/Imagenes/IMAGENES/LOGOS/LOGO.png);"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignHCenter);

        verticalLayout_3->addWidget(label_2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setVerticalSpacing(15);
        contrasena = new QLineEdit(centralwidget);
        contrasena->setObjectName("contrasena");
        contrasena->setMaximumSize(QSize(300, 25));
        contrasena->setBaseSize(QSize(0, 0));
        contrasena->setStyleSheet(QString::fromUtf8("background-color: rgb(168, 218, 220);"));
        contrasena->setEchoMode(QLineEdit::EchoMode::Password);
        contrasena->setAlignment(Qt::AlignmentFlag::AlignCenter);
        contrasena->setPlaceholderText(QString::fromUtf8("Ingresa tu contrase\303\261a"));

        gridLayout_2->addWidget(contrasena, 1, 1, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");

        gridLayout_2->addLayout(verticalLayout_4, 0, 2, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");

        gridLayout_2->addLayout(verticalLayout_2, 0, 0, 1, 1);

        usuario = new QLineEdit(centralwidget);
        usuario->setObjectName("usuario");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(usuario->sizePolicy().hasHeightForWidth());
        usuario->setSizePolicy(sizePolicy);
        usuario->setMaximumSize(QSize(300, 25));
        usuario->setBaseSize(QSize(0, 0));
        usuario->setStyleSheet(QString::fromUtf8("background-color: rgb(168, 218, 220);"));
        usuario->setAlignment(Qt::AlignmentFlag::AlignCenter);
        usuario->setPlaceholderText(QString::fromUtf8("Ingresa tu usuario"));

        gridLayout_2->addWidget(usuario, 0, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(-1, 10, -1, 150);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");

        gridLayout->addLayout(verticalLayout_6, 0, 2, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");

        gridLayout->addLayout(verticalLayout_5, 0, 0, 1, 1);

        ENTRAR = new QPushButton(centralwidget);
        ENTRAR->setObjectName("ENTRAR");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ENTRAR->sizePolicy().hasHeightForWidth());
        ENTRAR->setSizePolicy(sizePolicy1);
        ENTRAR->setMaximumSize(QSize(150, 16777215));
        ENTRAR->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        ENTRAR->setMouseTracking(true);
        ENTRAR->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 53, 87);\n"
"border-color: rgb(230, 57, 70);\n"
"font: 900 9pt \"Arial\";\n"
"color: rgb(241, 250, 238);"));
        ENTRAR->setIconSize(QSize(10, 16));
        ENTRAR->setAutoDefault(false);
        ENTRAR->setFlat(false);

        gridLayout->addWidget(ENTRAR, 0, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout);

        CEO = new QLabel(centralwidget);
        CEO->setObjectName("CEO");
        CEO->setMaximumSize(QSize(16777215, 15));
        CEO->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing);

        verticalLayout_3->addWidget(CEO);

        Optica_Jardines->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Optica_Jardines);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        Optica_Jardines->setMenuBar(menubar);
        statusbar = new QStatusBar(Optica_Jardines);
        statusbar->setObjectName("statusbar");
        Optica_Jardines->setStatusBar(statusbar);
        QWidget::setTabOrder(ENTRAR, usuario);
        QWidget::setTabOrder(usuario, contrasena);

        retranslateUi(Optica_Jardines);
        QObject::connect(usuario, &QLineEdit::textEdited, ENTRAR, qOverload<>(&QPushButton::click));
        QObject::connect(contrasena, &QLineEdit::textEdited, ENTRAR, qOverload<>(&QPushButton::click));

        ENTRAR->setDefault(false);


        QMetaObject::connectSlotsByName(Optica_Jardines);
    } // setupUi

    void retranslateUi(QMainWindow *Optica_Jardines)
    {
        Optica_Jardines->setWindowTitle(QCoreApplication::translate("Optica_Jardines", "Optica_Jardines", nullptr));
        Titulo->setText(QCoreApplication::translate("Optica_Jardines", "\303\223ptica Jardines", nullptr));
        label_2->setText(QString());
        ENTRAR->setText(QCoreApplication::translate("Optica_Jardines", "ENTRAR", nullptr));
        CEO->setText(QCoreApplication::translate("Optica_Jardines", "CEO: Yolanda P\303\251rez Aguilar      ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Optica_Jardines: public Ui_Optica_Jardines {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTICA_JARDINES_H
