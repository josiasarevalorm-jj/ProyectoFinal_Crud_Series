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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_VentanaEliminar
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *txtNombre;
    QTableWidget *tablaEliminar;
    QPushButton *btnVolver;
    QPushButton *btnEliminar;
    QPushButton *btnBuscar;

    void setupUi(QDialog *VentanaEliminar)
    {
        if (VentanaEliminar->objectName().isEmpty())
            VentanaEliminar->setObjectName("VentanaEliminar");
        VentanaEliminar->resize(505, 321);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush);
        VentanaEliminar->setPalette(palette);
        VentanaEliminar->setStyleSheet(QString::fromUtf8("QFrame {\n"
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
        label = new QLabel(VentanaEliminar);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 30, 251, 16));
        label_2 = new QLabel(VentanaEliminar);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 60, 49, 16));
        txtNombre = new QLineEdit(VentanaEliminar);
        txtNombre->setObjectName("txtNombre");
        txtNombre->setGeometry(QRect(100, 60, 241, 24));
        tablaEliminar = new QTableWidget(VentanaEliminar);
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
        tablaEliminar->setGeometry(QRect(30, 100, 461, 151));
        btnVolver = new QPushButton(VentanaEliminar);
        btnVolver->setObjectName("btnVolver");
        btnVolver->setGeometry(QRect(310, 270, 80, 24));
        btnEliminar = new QPushButton(VentanaEliminar);
        btnEliminar->setObjectName("btnEliminar");
        btnEliminar->setGeometry(QRect(100, 270, 80, 24));
        btnBuscar = new QPushButton(VentanaEliminar);
        btnBuscar->setObjectName("btnBuscar");
        btnBuscar->setGeometry(QRect(370, 60, 80, 24));

        retranslateUi(VentanaEliminar);

        QMetaObject::connectSlotsByName(VentanaEliminar);
    } // setupUi

    void retranslateUi(QDialog *VentanaEliminar)
    {
        VentanaEliminar->setWindowTitle(QCoreApplication::translate("VentanaEliminar", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("VentanaEliminar", "VENTANA DE ELIMINAR SERIE", nullptr));
        label_2->setText(QCoreApplication::translate("VentanaEliminar", "Nombre:", nullptr));
        txtNombre->setPlaceholderText(QCoreApplication::translate("VentanaEliminar", "Nombre de la serie a eliminar", nullptr));
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
        btnVolver->setText(QCoreApplication::translate("VentanaEliminar", "Volver", nullptr));
        btnEliminar->setText(QCoreApplication::translate("VentanaEliminar", "Eliminar", nullptr));
        btnBuscar->setText(QCoreApplication::translate("VentanaEliminar", "Buscar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VentanaEliminar: public Ui_VentanaEliminar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAELIMINAR_H
