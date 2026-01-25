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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VentanaActualizar
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QLineEdit *txtId;
    QPushButton *btnBuscar;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *txtNombre;
    QLineEdit *txtGenero;
    QSpinBox *spinTemTotal;
    QSpinBox *spinEpTotal;
    QComboBox *cmbEstado;
    QSpinBox *spinTemActual;
    QSpinBox *spinEpActual;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnVover;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnActualizar;

    void setupUi(QDialog *VentanaActualizar)
    {
        if (VentanaActualizar->objectName().isEmpty())
            VentanaActualizar->setObjectName("VentanaActualizar");
        VentanaActualizar->resize(512, 499);
        VentanaActualizar->setStyleSheet(QString::fromUtf8("/* =====================\n"
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
"    background-color: rgb(229, 9, 20);\n"
"    color: white;\n"
"    font: 87 18pt \"Arial Black\";\n"
"    border-radius: 14px;\n"
"    padding: 8px;\n"
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
"\n"
"/* =====================\n"
"   SPINBOX\n"
"===================== */\n"
"QSpinBox {\n"
"    background-color: rgb(35, 35, 35);\n"
" "
                        "   color: white;\n"
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
"QPushButton:pressed {\n"
"    background-color: rgb(180, 0, 0);\n"
"}\n"
"QTableWidget {\n"
"    background-color: rgb(20, 20, 20);\n"
"   "
                        " color: rgb(220, 220, 220);\n"
"    gridline-color: rgb(60, 60, 60);\n"
"    border: 1px solid rgb(60, 60, 60);\n"
"    font: 10pt \"Segoe UI\";\n"
"}\n"
"\n"
"/* Encabezados */\n"
"QHeaderView::section {\n"
"    background-color: rgb(35, 35, 35);\n"
"    color: white;\n"
"    font: 11pt \"Arial Black\";\n"
"    border: none;\n"
"    padding: 6px;\n"
"}\n"
"\n"
"/* Filas alternas */\n"
"QTableWidget::item {\n"
"    padding: 6px;\n"
"}\n"
"\n"
"QTableWidget::item:selected {\n"
"    background-color: rgb(229, 9, 20);\n"
"    color: white;\n"
"}\n"
"\n"
"/* Bot\303\263n esquina (arriba izquierda) */\n"
"QTableCornerButton::section {\n"
"    background-color: rgb(35, 35, 35);\n"
"    border: none;\n"
"}"));
        widget = new QWidget(VentanaActualizar);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(29, 20, 441, 402));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");

        horizontalLayout->addWidget(label_6);

        txtId = new QLineEdit(widget);
        txtId->setObjectName("txtId");

        horizontalLayout->addWidget(txtId);

        btnBuscar = new QPushButton(widget);
        btnBuscar->setObjectName("btnBuscar");

        horizontalLayout->addWidget(btnBuscar);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");

        verticalLayout->addWidget(label_7);

        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");

        verticalLayout->addWidget(label_8);

        label_9 = new QLabel(widget);
        label_9->setObjectName("label_9");

        verticalLayout->addWidget(label_9);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");

        verticalLayout->addWidget(label_5);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        txtNombre = new QLineEdit(widget);
        txtNombre->setObjectName("txtNombre");

        verticalLayout_2->addWidget(txtNombre);

        txtGenero = new QLineEdit(widget);
        txtGenero->setObjectName("txtGenero");

        verticalLayout_2->addWidget(txtGenero);

        spinTemTotal = new QSpinBox(widget);
        spinTemTotal->setObjectName("spinTemTotal");

        verticalLayout_2->addWidget(spinTemTotal);

        spinEpTotal = new QSpinBox(widget);
        spinEpTotal->setObjectName("spinEpTotal");

        verticalLayout_2->addWidget(spinEpTotal);

        cmbEstado = new QComboBox(widget);
        cmbEstado->addItem(QString());
        cmbEstado->addItem(QString());
        cmbEstado->addItem(QString());
        cmbEstado->setObjectName("cmbEstado");

        verticalLayout_2->addWidget(cmbEstado);

        spinTemActual = new QSpinBox(widget);
        spinTemActual->setObjectName("spinTemActual");

        verticalLayout_2->addWidget(spinTemActual);

        spinEpActual = new QSpinBox(widget);
        spinEpActual->setObjectName("spinEpActual");

        verticalLayout_2->addWidget(spinEpActual);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        btnVover = new QPushButton(widget);
        btnVover->setObjectName("btnVover");

        horizontalLayout_3->addWidget(btnVover);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        btnActualizar = new QPushButton(widget);
        btnActualizar->setObjectName("btnActualizar");

        horizontalLayout_3->addWidget(btnActualizar);


        verticalLayout_3->addLayout(horizontalLayout_3);


        retranslateUi(VentanaActualizar);

        cmbEstado->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(VentanaActualizar);
    } // setupUi

    void retranslateUi(QDialog *VentanaActualizar)
    {
        VentanaActualizar->setWindowTitle(QCoreApplication::translate("VentanaActualizar", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("VentanaActualizar", "--------- ACTUALIZAR SERIE ---------", nullptr));
        label_6->setText(QCoreApplication::translate("VentanaActualizar", "Id:", nullptr));
        txtId->setPlaceholderText(QCoreApplication::translate("VentanaActualizar", "Id de la serie a buscar", nullptr));
        btnBuscar->setText(QCoreApplication::translate("VentanaActualizar", "Buscar", nullptr));
        label_2->setText(QCoreApplication::translate("VentanaActualizar", "Nombre de la serie: ", nullptr));
        label_7->setText(QCoreApplication::translate("VentanaActualizar", "Genero:", nullptr));
        label_8->setText(QCoreApplication::translate("VentanaActualizar", "Temporadas totales:", nullptr));
        label_9->setText(QCoreApplication::translate("VentanaActualizar", "Episodios por temporada:", nullptr));
        label_5->setText(QCoreApplication::translate("VentanaActualizar", "Estado:", nullptr));
        label_3->setText(QCoreApplication::translate("VentanaActualizar", "Temporada actual:", nullptr));
        label_4->setText(QCoreApplication::translate("VentanaActualizar", "Episodio actual: ", nullptr));
        txtNombre->setPlaceholderText(QString());
        txtGenero->setPlaceholderText(QString());
        cmbEstado->setItemText(0, QCoreApplication::translate("VentanaActualizar", "Pendiente", nullptr));
        cmbEstado->setItemText(1, QCoreApplication::translate("VentanaActualizar", "Viendo", nullptr));
        cmbEstado->setItemText(2, QCoreApplication::translate("VentanaActualizar", "Acabada", nullptr));

        cmbEstado->setPlaceholderText(QCoreApplication::translate("VentanaActualizar", "Selecione una opcion", nullptr));
        btnVover->setText(QCoreApplication::translate("VentanaActualizar", "Volver", nullptr));
        btnActualizar->setText(QCoreApplication::translate("VentanaActualizar", "Actualizar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VentanaActualizar: public Ui_VentanaActualizar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAACTUALIZAR_H
