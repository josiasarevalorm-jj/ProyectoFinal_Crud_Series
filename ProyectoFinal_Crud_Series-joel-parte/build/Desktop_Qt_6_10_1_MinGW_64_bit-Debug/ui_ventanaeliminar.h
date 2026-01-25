/********************************************************************************
** Form generated from reading UI file 'ventanaeliminar.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANAELIMINAR_H
#define UI_VENTANAELIMINAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VentanaEliminar
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *txtId;
    QPushButton *btnBuscar;
    QTableWidget *tablaEliminar;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnEliminar;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnVolver;

    void setupUi(QDialog *VentanaEliminar)
    {
        if (VentanaEliminar->objectName().isEmpty())
            VentanaEliminar->setObjectName("VentanaEliminar");
        VentanaEliminar->resize(502, 414);
        VentanaEliminar->setStyleSheet(QString::fromUtf8("/* =====================\n"
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
        widget = new QWidget(VentanaEliminar);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 30, 451, 331));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        txtId = new QLineEdit(widget);
        txtId->setObjectName("txtId");

        horizontalLayout_2->addWidget(txtId);

        btnBuscar = new QPushButton(widget);
        btnBuscar->setObjectName("btnBuscar");

        horizontalLayout_2->addWidget(btnBuscar);


        verticalLayout->addLayout(horizontalLayout_2);

        tablaEliminar = new QTableWidget(widget);
        if (tablaEliminar->columnCount() < 7)
            tablaEliminar->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tablaEliminar->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tablaEliminar->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tablaEliminar->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tablaEliminar->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tablaEliminar->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tablaEliminar->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tablaEliminar->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tablaEliminar->setObjectName("tablaEliminar");

        verticalLayout->addWidget(tablaEliminar);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btnEliminar = new QPushButton(widget);
        btnEliminar->setObjectName("btnEliminar");

        horizontalLayout->addWidget(btnEliminar);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnVolver = new QPushButton(widget);
        btnVolver->setObjectName("btnVolver");

        horizontalLayout->addWidget(btnVolver);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(VentanaEliminar);

        QMetaObject::connectSlotsByName(VentanaEliminar);
    } // setupUi

    void retranslateUi(QDialog *VentanaEliminar)
    {
        VentanaEliminar->setWindowTitle(QCoreApplication::translate("VentanaEliminar", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("VentanaEliminar", "--------- ELIMINAR SERIE ---------", nullptr));
        label_2->setText(QCoreApplication::translate("VentanaEliminar", "Id:", nullptr));
        txtId->setPlaceholderText(QCoreApplication::translate("VentanaEliminar", "Id de la serie a eliminar", nullptr));
        btnBuscar->setText(QCoreApplication::translate("VentanaEliminar", "Buscar", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tablaEliminar->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("VentanaEliminar", "Nombre Serie", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tablaEliminar->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("VentanaEliminar", "Genero", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tablaEliminar->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("VentanaEliminar", "Total temporadas", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tablaEliminar->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("VentanaEliminar", "Episodios por temporada", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tablaEliminar->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("VentanaEliminar", "Estado", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tablaEliminar->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("VentanaEliminar", "Temporada actual", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tablaEliminar->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("VentanaEliminar", "Episodio actual", nullptr));
        btnEliminar->setText(QCoreApplication::translate("VentanaEliminar", "Eliminar", nullptr));
        btnVolver->setText(QCoreApplication::translate("VentanaEliminar", "Volver", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VentanaEliminar: public Ui_VentanaEliminar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAELIMINAR_H
