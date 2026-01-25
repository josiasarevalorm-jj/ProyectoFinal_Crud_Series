/********************************************************************************
** Form generated from reading UI file 'ventanaagregar.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANAAGREGAR_H
#define UI_VENTANAAGREGAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VentanaAgregar
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_9;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QVBoxLayout *verticalLayout_2;
    QSpinBox *spinId;
    QLineEdit *txtNombre;
    QLineEdit *txtGenero;
    QSpinBox *spinTemTotal;
    QSpinBox *spinEpTotal;
    QComboBox *cmbEstado;
    QSpinBox *spinTemActual;
    QSpinBox *spinEpActual;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnGuardar;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnVolver;

    void setupUi(QDialog *VentanaAgregar)
    {
        if (VentanaAgregar->objectName().isEmpty())
            VentanaAgregar->setObjectName("VentanaAgregar");
        VentanaAgregar->resize(582, 442);
        VentanaAgregar->setStyleSheet(QString::fromUtf8("/* =====================\n"
"   FONDO DEL DIALOG\n"
"===================== */\n"
"QDialog {\n"
"    background-color: rgb(18, 18, 18);\n"
"}\n"
"\n"
"/* =====================\n"
"   TITULO ROJO\n"
"===================== */\n"
"QLabel#labelTitulo {\n"
"    background-color: rgb(229, 9, 20);   /* Rojo Netflix */\n"
"    color: white;\n"
"    font: 90 24pt \"Arial Black\";          /* M\303\201S GRANDE y fuerte */\n"
"    border-radius: 18px;\n"
"    padding: 12px;\n"
"    letter-spacing: 2px;                  /* Espaciado entre letras */\n"
"    qproperty-alignment: AlignCenter;\n"
"}\n"
"\n"
"/* =====================\n"
"   LABELS (TEXTOS)\n"
"===================== */\n"
"QLabel {\n"
"    color: rgb(220, 220, 220);\n"
"    font: 10pt \"Arial\";\n"
"}\n"
"\n"
"/* =====================\n"
"   INPUT TEXTO\n"
"===================== */\n"
"QLineEdit {\n"
"    background-color: rgb(35, 35, 35);\n"
"    color: white;\n"
"    border: 1px solid rgb(80, 80, 80);\n"
"    border-radius: 10px;\n"
"    padding: 6px;\n"
"}\n"
""
                        "\n"
"/* =====================\n"
"   SPINBOX\n"
"===================== */\n"
"QSpinBox {\n"
"    background-color: rgb(35, 35, 35);\n"
"    color: white;\n"
"    border: 1px solid rgb(80, 80, 80);\n"
"    border-radius: 10px;\n"
"    padding: 4px;\n"
"}\n"
"\n"
"/* =====================\n"
"   COMBOBOX\n"
"===================== */\n"
"QComboBox {\n"
"    background-color: rgb(35, 35, 35);\n"
"    color: white;\n"
"    border: 1px solid rgb(80, 80, 80);\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    background-color: rgb(25, 25, 25);\n"
"    color: white;\n"
"    selection-background-color: rgb(229, 9, 20);\n"
"}\n"
"\n"
"/* =====================\n"
"   BOTONES\n"
"===================== */\n"
"QPushButton {\n"
"    background-color: rgb(45, 45, 45);\n"
"    color: white;\n"
"    font: 11pt \"Arial Black\";\n"
"    border-radius: 18px;\n"
"    padding: 8px 22px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(229, 9, 20);\n"
"}\n"
"\n"
"QP"
                        "ushButton:pressed {\n"
"    background-color: rgb(180, 0, 0);\n"
"}"));
        widget = new QWidget(VentanaAgregar);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 20, 511, 401));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8(""));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_9 = new QLabel(widget);
        label_9->setObjectName("label_9");

        verticalLayout->addWidget(label_9);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        label_5->setAutoFillBackground(false);

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");
        label_6->setAutoFillBackground(false);

        verticalLayout->addWidget(label_6);

        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");
        label_7->setAutoFillBackground(false);

        verticalLayout->addWidget(label_7);

        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");
        label_8->setAutoFillBackground(false);

        verticalLayout->addWidget(label_8);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        spinId = new QSpinBox(widget);
        spinId->setObjectName("spinId");
        spinId->setMaximum(50);

        verticalLayout_2->addWidget(spinId);

        txtNombre = new QLineEdit(widget);
        txtNombre->setObjectName("txtNombre");

        verticalLayout_2->addWidget(txtNombre);

        txtGenero = new QLineEdit(widget);
        txtGenero->setObjectName("txtGenero");

        verticalLayout_2->addWidget(txtGenero);

        spinTemTotal = new QSpinBox(widget);
        spinTemTotal->setObjectName("spinTemTotal");
        spinTemTotal->setMaximum(50);

        verticalLayout_2->addWidget(spinTemTotal);

        spinEpTotal = new QSpinBox(widget);
        spinEpTotal->setObjectName("spinEpTotal");
        spinEpTotal->setMaximum(50);

        verticalLayout_2->addWidget(spinEpTotal);

        cmbEstado = new QComboBox(widget);
        cmbEstado->addItem(QString());
        cmbEstado->addItem(QString());
        cmbEstado->addItem(QString());
        cmbEstado->setObjectName("cmbEstado");

        verticalLayout_2->addWidget(cmbEstado);

        spinTemActual = new QSpinBox(widget);
        spinTemActual->setObjectName("spinTemActual");
        spinTemActual->setMaximum(50);

        verticalLayout_2->addWidget(spinTemActual);

        spinEpActual = new QSpinBox(widget);
        spinEpActual->setObjectName("spinEpActual");
        spinEpActual->setMaximum(50);

        verticalLayout_2->addWidget(spinEpActual);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        btnGuardar = new QPushButton(widget);
        btnGuardar->setObjectName("btnGuardar");

        horizontalLayout_2->addWidget(btnGuardar);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btnVolver = new QPushButton(widget);
        btnVolver->setObjectName("btnVolver");

        horizontalLayout_2->addWidget(btnVolver);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(VentanaAgregar);

        QMetaObject::connectSlotsByName(VentanaAgregar);
    } // setupUi

    void retranslateUi(QDialog *VentanaAgregar)
    {
        VentanaAgregar->setWindowTitle(QCoreApplication::translate("VentanaAgregar", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("VentanaAgregar", "---------------- AGREGAR SERIE ----------------", nullptr));
        label_9->setText(QCoreApplication::translate("VentanaAgregar", "Id:", nullptr));
        label_2->setText(QCoreApplication::translate("VentanaAgregar", "Nombre de la serie: ", nullptr));
        label_3->setText(QCoreApplication::translate("VentanaAgregar", "Genero de la serie: ", nullptr));
        label_4->setText(QCoreApplication::translate("VentanaAgregar", "Temporadas totales:", nullptr));
        label_5->setText(QCoreApplication::translate("VentanaAgregar", "Episodios por temporada: ", nullptr));
        label_6->setText(QCoreApplication::translate("VentanaAgregar", "Estado: ", nullptr));
        label_7->setText(QCoreApplication::translate("VentanaAgregar", "Temporada actual:", nullptr));
        label_8->setText(QCoreApplication::translate("VentanaAgregar", "Episodio actual: ", nullptr));
        txtNombre->setPlaceholderText(QCoreApplication::translate("VentanaAgregar", "Nombre de la serie", nullptr));
        txtGenero->setPlaceholderText(QCoreApplication::translate("VentanaAgregar", "Genero de la serie", nullptr));
        cmbEstado->setItemText(0, QCoreApplication::translate("VentanaAgregar", "Pendiente", nullptr));
        cmbEstado->setItemText(1, QCoreApplication::translate("VentanaAgregar", "Viendo", nullptr));
        cmbEstado->setItemText(2, QCoreApplication::translate("VentanaAgregar", "Acabada", nullptr));

        cmbEstado->setPlaceholderText(QCoreApplication::translate("VentanaAgregar", "Seleccione una opcion", nullptr));
        btnGuardar->setText(QCoreApplication::translate("VentanaAgregar", "Guardar", nullptr));
        btnVolver->setText(QCoreApplication::translate("VentanaAgregar", "Volver", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VentanaAgregar: public Ui_VentanaAgregar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAAGREGAR_H
