/********************************************************************************
** Form generated from reading UI file 'ventanaactualizar.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANAACTUALIZAR_H
#define UI_VENTANAACTUALIZAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_VentanaActualizar
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *txtNombre;
    QSpinBox *spinTemActual;
    QLabel *label_5;
    QComboBox *cmbEstado;
    QSpinBox *spinEpActual;
    QPushButton *btnActualizar;
    QPushButton *btnBuscar;
    QPushButton *btnVover;
    QLineEdit *txtId;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QSpinBox *spinTemTotal;
    QSpinBox *spinEpTotal;
    QLineEdit *txtGenero;

    void setupUi(QDialog *VentanaActualizar)
    {
        if (VentanaActualizar->objectName().isEmpty())
            VentanaActualizar->setObjectName("VentanaActualizar");
        VentanaActualizar->resize(507, 315);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush);
        VentanaActualizar->setPalette(palette);
        VentanaActualizar->setStyleSheet(QString::fromUtf8("QFrame {\n"
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
"/* ---------- QTableWidget ---------- */\n"
"QTableWidget {\n"
"    background-color: rgb(255, 255, 255);\n"
"    color: rgb(0, 0, 0);\n"
"    gridline-color: rgb(0, 206, 151);\n"
" "
                        "   font-size: 12pt;\n"
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
        label = new QLabel(VentanaActualizar);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 20, 321, 16));
        label_2 = new QLabel(VentanaActualizar);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 90, 151, 16));
        label_3 = new QLabel(VentanaActualizar);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(19, 242, 181, 16));
        label_4 = new QLabel(VentanaActualizar);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(19, 272, 141, 16));
        txtNombre = new QLineEdit(VentanaActualizar);
        txtNombre->setObjectName("txtNombre");
        txtNombre->setGeometry(QRect(210, 80, 181, 24));
        spinTemActual = new QSpinBox(VentanaActualizar);
        spinTemActual->setObjectName("spinTemActual");
        spinTemActual->setGeometry(QRect(210, 243, 39, 21));
        label_5 = new QLabel(VentanaActualizar);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(19, 212, 101, 16));
        cmbEstado = new QComboBox(VentanaActualizar);
        cmbEstado->addItem(QString());
        cmbEstado->addItem(QString());
        cmbEstado->addItem(QString());
        cmbEstado->setObjectName("cmbEstado");
        cmbEstado->setGeometry(QRect(210, 213, 141, 24));
        spinEpActual = new QSpinBox(VentanaActualizar);
        spinEpActual->setObjectName("spinEpActual");
        spinEpActual->setGeometry(QRect(210, 270, 39, 21));
        btnActualizar = new QPushButton(VentanaActualizar);
        btnActualizar->setObjectName("btnActualizar");
        btnActualizar->setGeometry(QRect(400, 220, 80, 24));
        btnBuscar = new QPushButton(VentanaActualizar);
        btnBuscar->setObjectName("btnBuscar");
        btnBuscar->setGeometry(QRect(400, 50, 80, 24));
        btnVover = new QPushButton(VentanaActualizar);
        btnVover->setObjectName("btnVover");
        btnVover->setGeometry(QRect(400, 250, 80, 24));
        txtId = new QLineEdit(VentanaActualizar);
        txtId->setObjectName("txtId");
        txtId->setGeometry(QRect(210, 50, 181, 24));
        label_6 = new QLabel(VentanaActualizar);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 60, 105, 16));
        label_7 = new QLabel(VentanaActualizar);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 120, 51, 16));
        label_8 = new QLabel(VentanaActualizar);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 150, 121, 16));
        label_9 = new QLabel(VentanaActualizar);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(20, 180, 211, 16));
        spinTemTotal = new QSpinBox(VentanaActualizar);
        spinTemTotal->setObjectName("spinTemTotal");
        spinTemTotal->setGeometry(QRect(210, 150, 39, 21));
        spinEpTotal = new QSpinBox(VentanaActualizar);
        spinEpTotal->setObjectName("spinEpTotal");
        spinEpTotal->setGeometry(QRect(210, 180, 39, 21));
        txtGenero = new QLineEdit(VentanaActualizar);
        txtGenero->setObjectName("txtGenero");
        txtGenero->setGeometry(QRect(210, 110, 181, 24));

        retranslateUi(VentanaActualizar);

        cmbEstado->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(VentanaActualizar);
    } // setupUi

    void retranslateUi(QDialog *VentanaActualizar)
    {
        VentanaActualizar->setWindowTitle(QCoreApplication::translate("VentanaActualizar", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("VentanaActualizar", "VENTANA DE ACTUALIZAR SERIE", nullptr));
        label_2->setText(QCoreApplication::translate("VentanaActualizar", "Nombre de la serie: ", nullptr));
        label_3->setText(QCoreApplication::translate("VentanaActualizar", "Temporada actual:", nullptr));
        label_4->setText(QCoreApplication::translate("VentanaActualizar", "Episodio actual: ", nullptr));
        txtNombre->setPlaceholderText(QString());
        label_5->setText(QCoreApplication::translate("VentanaActualizar", "Estado:", nullptr));
        cmbEstado->setItemText(0, QCoreApplication::translate("VentanaActualizar", "Pendiente", nullptr));
        cmbEstado->setItemText(1, QCoreApplication::translate("VentanaActualizar", "Viendo", nullptr));
        cmbEstado->setItemText(2, QCoreApplication::translate("VentanaActualizar", "Acabada", nullptr));

        cmbEstado->setPlaceholderText(QCoreApplication::translate("VentanaActualizar", "Selecione una opcion", nullptr));
        btnActualizar->setText(QCoreApplication::translate("VentanaActualizar", "Actualizar", nullptr));
        btnBuscar->setText(QCoreApplication::translate("VentanaActualizar", "Buscar", nullptr));
        btnVover->setText(QCoreApplication::translate("VentanaActualizar", "Volver", nullptr));
        txtId->setPlaceholderText(QCoreApplication::translate("VentanaActualizar", "Id de la serie a buscar", nullptr));
        label_6->setText(QCoreApplication::translate("VentanaActualizar", "Id:", nullptr));
        label_7->setText(QCoreApplication::translate("VentanaActualizar", "Genero:", nullptr));
        label_8->setText(QCoreApplication::translate("VentanaActualizar", "Temporadas totales:", nullptr));
        label_9->setText(QCoreApplication::translate("VentanaActualizar", "Episodios por temporada:", nullptr));
        txtGenero->setPlaceholderText(QString());
    } // retranslateUi

};

namespace Ui {
    class VentanaActualizar: public Ui_VentanaActualizar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAACTUALIZAR_H
