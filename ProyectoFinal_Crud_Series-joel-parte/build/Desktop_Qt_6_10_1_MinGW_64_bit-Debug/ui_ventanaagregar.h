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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_VentanaAgregar
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *btnGuardar;
    QPushButton *btnVolver;
    QLineEdit *txtNombre;
    QLineEdit *txtGenero;
    QSpinBox *spinTemTotal;
    QSpinBox *spinEpTotal;
    QComboBox *cmbEstado;
    QSpinBox *spinTemActual;
    QSpinBox *spinEpActual;
    QSpinBox *spinId;
    QLabel *label_9;

    void setupUi(QDialog *VentanaAgregar)
    {
        if (VentanaAgregar->objectName().isEmpty())
            VentanaAgregar->setObjectName("VentanaAgregar");
        VentanaAgregar->resize(536, 399);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush);
        VentanaAgregar->setPalette(palette);
        VentanaAgregar->setStyleSheet(QString::fromUtf8("QFrame {\n"
"	background-color: rgb(0, 0, 0);\n"
"	background-color: rgb(0, 0, 0);\n"
"	background-color: rgb(0, 0, 0);\n"
"	background-color: rgb(0, 0, 0);\n"
"    background-color: rgb(61, 61, 61);\n"
"}\n"
"\n"
"/* ---------- QLabel ---------- */\n"
"QLabel {\n"
"    font: 87 12pt \"Arial Black\";\n"
"    background-color: #000000;\n"
"    color: rgb(0, 206, 151);\n"
"    border: 0px;\n"
"}\n"
"\n"
"/* ---------- QLineEdit ---------- */\n"
"QLineEdit {\n"
"    border: 0px;\n"
"    border-bottom: 2px solid rgb(61, 61, 61);\n"
"    color: rgb(255, 255, 255);\n"
"    background-color: rgb(0, 0, 0);\n"
"    font: 75 12pt \"Times New Roman\";\n"
"}\n"
"\n"
"/* ---------- QPushButton ---------- */\n"
"QPushButton {\n"
"    background-color: rgb(61, 61, 61);\n"
"    border-radius: 15px;\n"
"    color: rgb(255, 255, 255);\n"
"    font: 77 10pt \"Arial Black\";\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(0, 206, 151);\n"
"    color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"/* ---------- QTableWidget -------"
                        "--- */\n"
"QTableWidget {\n"
"    background-color: rgb(255, 255, 255);\n"
"    color: rgb(0, 0, 0);\n"
"    gridline-color: rgb(0, 206, 151);\n"
"    font-size: 12pt;\n"
"}\n"
"\n"
"/* ---------- Encabezados ---------- */\n"
"QHeaderView::section {\n"
"    background-color: rgb(0, 206, 151);\n"
"    border: 1px solid rgb(0, 0, 0);\n"
"    font-size: 12pt;\n"
"}\n"
"\n"
"/* ---------- Bot\303\263n esquina tabla ---------- */\n"
"QTableWidget QTableCornerButton::section {\n"
"    background-color: rgb(0, 0, 0);\n"
"    border: 1px solid rgb(0, 206, 151);\n"
"}"));
        label = new QLabel(VentanaAgregar);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 20, 261, 21));
        label->setStyleSheet(QString::fromUtf8(""));
        label_2 = new QLabel(VentanaAgregar);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 80, 151, 16));
        label_3 = new QLabel(VentanaAgregar);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 110, 151, 16));
        label_4 = new QLabel(VentanaAgregar);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 140, 151, 16));
        label_5 = new QLabel(VentanaAgregar);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(30, 170, 191, 20));
        label_5->setAutoFillBackground(false);
        label_6 = new QLabel(VentanaAgregar);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(30, 200, 81, 16));
        label_6->setAutoFillBackground(false);
        label_7 = new QLabel(VentanaAgregar);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(30, 220, 141, 16));
        label_7->setAutoFillBackground(false);
        label_8 = new QLabel(VentanaAgregar);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(30, 250, 131, 16));
        label_8->setAutoFillBackground(false);
        btnGuardar = new QPushButton(VentanaAgregar);
        btnGuardar->setObjectName("btnGuardar");
        btnGuardar->setGeometry(QRect(100, 310, 80, 24));
        btnVolver = new QPushButton(VentanaAgregar);
        btnVolver->setObjectName("btnVolver");
        btnVolver->setGeometry(QRect(340, 310, 80, 24));
        txtNombre = new QLineEdit(VentanaAgregar);
        txtNombre->setObjectName("txtNombre");
        txtNombre->setGeometry(QRect(221, 81, 171, 24));
        txtGenero = new QLineEdit(VentanaAgregar);
        txtGenero->setObjectName("txtGenero");
        txtGenero->setGeometry(QRect(221, 111, 171, 24));
        spinTemTotal = new QSpinBox(VentanaAgregar);
        spinTemTotal->setObjectName("spinTemTotal");
        spinTemTotal->setGeometry(QRect(221, 141, 71, 21));
        spinTemTotal->setMaximum(50);
        spinEpTotal = new QSpinBox(VentanaAgregar);
        spinEpTotal->setObjectName("spinEpTotal");
        spinEpTotal->setGeometry(QRect(221, 168, 71, 21));
        spinEpTotal->setMaximum(50);
        cmbEstado = new QComboBox(VentanaAgregar);
        cmbEstado->addItem(QString());
        cmbEstado->addItem(QString());
        cmbEstado->addItem(QString());
        cmbEstado->setObjectName("cmbEstado");
        cmbEstado->setGeometry(QRect(221, 195, 171, 24));
        spinTemActual = new QSpinBox(VentanaAgregar);
        spinTemActual->setObjectName("spinTemActual");
        spinTemActual->setGeometry(QRect(221, 225, 71, 21));
        spinTemActual->setMaximum(50);
        spinEpActual = new QSpinBox(VentanaAgregar);
        spinEpActual->setObjectName("spinEpActual");
        spinEpActual->setGeometry(QRect(221, 252, 71, 21));
        spinEpActual->setMaximum(50);
        spinId = new QSpinBox(VentanaAgregar);
        spinId->setObjectName("spinId");
        spinId->setGeometry(QRect(220, 50, 71, 21));
        spinId->setMaximum(50);
        label_9 = new QLabel(VentanaAgregar);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(30, 60, 105, 16));

        retranslateUi(VentanaAgregar);

        QMetaObject::connectSlotsByName(VentanaAgregar);
    } // setupUi

    void retranslateUi(QDialog *VentanaAgregar)
    {
        VentanaAgregar->setWindowTitle(QCoreApplication::translate("VentanaAgregar", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("VentanaAgregar", "VENTANA DE AGREGAR SERIE", nullptr));
        label_2->setText(QCoreApplication::translate("VentanaAgregar", "Nombre de la serie: ", nullptr));
        label_3->setText(QCoreApplication::translate("VentanaAgregar", "Genero de la serie: ", nullptr));
        label_4->setText(QCoreApplication::translate("VentanaAgregar", "Temporadas totales:", nullptr));
        label_5->setText(QCoreApplication::translate("VentanaAgregar", "Episodios por temporada: ", nullptr));
        label_6->setText(QCoreApplication::translate("VentanaAgregar", "Estado: ", nullptr));
        label_7->setText(QCoreApplication::translate("VentanaAgregar", "Temporada actual:", nullptr));
        label_8->setText(QCoreApplication::translate("VentanaAgregar", "Episodio actual: ", nullptr));
        btnGuardar->setText(QCoreApplication::translate("VentanaAgregar", "Guardar", nullptr));
        btnVolver->setText(QCoreApplication::translate("VentanaAgregar", "Volver", nullptr));
        txtNombre->setPlaceholderText(QCoreApplication::translate("VentanaAgregar", "Nombre de la serie", nullptr));
        txtGenero->setPlaceholderText(QCoreApplication::translate("VentanaAgregar", "Genero de la serie", nullptr));
        cmbEstado->setItemText(0, QCoreApplication::translate("VentanaAgregar", "Pendiente", nullptr));
        cmbEstado->setItemText(1, QCoreApplication::translate("VentanaAgregar", "Viendo", nullptr));
        cmbEstado->setItemText(2, QCoreApplication::translate("VentanaAgregar", "Acabada", nullptr));

        cmbEstado->setPlaceholderText(QCoreApplication::translate("VentanaAgregar", "Seleccione una opcion", nullptr));
        label_9->setText(QCoreApplication::translate("VentanaAgregar", "Id:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VentanaAgregar: public Ui_VentanaAgregar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAAGREGAR_H
