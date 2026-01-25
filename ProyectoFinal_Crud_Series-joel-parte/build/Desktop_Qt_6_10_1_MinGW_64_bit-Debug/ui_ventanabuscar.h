/********************************************************************************
** Form generated from reading UI file 'ventanabuscar.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANABUSCAR_H
#define UI_VENTANABUSCAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_VentanaBuscar
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *txtNombre;
    QTableWidget *tablaBuscar;
    QPushButton *btnVolver;
    QPushButton *btnBuscar;

    void setupUi(QDialog *VentanaBuscar)
    {
        if (VentanaBuscar->objectName().isEmpty())
            VentanaBuscar->setObjectName("VentanaBuscar");
        VentanaBuscar->resize(529, 300);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush);
        VentanaBuscar->setPalette(palette);
        VentanaBuscar->setStyleSheet(QString::fromUtf8("QFrame {\n"
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
        label = new QLabel(VentanaBuscar);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 20, 301, 21));
        label_2 = new QLabel(VentanaBuscar);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 60, 61, 16));
        txtNombre = new QLineEdit(VentanaBuscar);
        txtNombre->setObjectName("txtNombre");
        txtNombre->setGeometry(QRect(100, 60, 191, 24));
        tablaBuscar = new QTableWidget(VentanaBuscar);
        if (tablaBuscar->columnCount() < 7)
            tablaBuscar->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tablaBuscar->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tablaBuscar->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tablaBuscar->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tablaBuscar->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tablaBuscar->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tablaBuscar->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tablaBuscar->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tablaBuscar->setObjectName("tablaBuscar");
        tablaBuscar->setGeometry(QRect(20, 100, 501, 131));
        btnVolver = new QPushButton(VentanaBuscar);
        btnVolver->setObjectName("btnVolver");
        btnVolver->setGeometry(QRect(240, 250, 61, 24));
        btnBuscar = new QPushButton(VentanaBuscar);
        btnBuscar->setObjectName("btnBuscar");
        btnBuscar->setGeometry(QRect(320, 60, 61, 24));

        retranslateUi(VentanaBuscar);

        QMetaObject::connectSlotsByName(VentanaBuscar);
    } // setupUi

    void retranslateUi(QDialog *VentanaBuscar)
    {
        VentanaBuscar->setWindowTitle(QCoreApplication::translate("VentanaBuscar", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("VentanaBuscar", "VENTANA DE BUSCAR SERIE", nullptr));
        label_2->setText(QCoreApplication::translate("VentanaBuscar", "Nombre:", nullptr));
        txtNombre->setPlaceholderText(QCoreApplication::translate("VentanaBuscar", "Nombre de la serie a buscar", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tablaBuscar->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("VentanaBuscar", "Nombre serie", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tablaBuscar->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("VentanaBuscar", "Genero", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tablaBuscar->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("VentanaBuscar", "Total temporadas", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tablaBuscar->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("VentanaBuscar", "Episodios por temporada", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tablaBuscar->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("VentanaBuscar", "Estado", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tablaBuscar->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("VentanaBuscar", "Temporada actual", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tablaBuscar->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("VentanaBuscar", "Episodio actual", nullptr));
        btnVolver->setText(QCoreApplication::translate("VentanaBuscar", "Volver", nullptr));
        btnBuscar->setText(QCoreApplication::translate("VentanaBuscar", "Buscar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VentanaBuscar: public Ui_VentanaBuscar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANABUSCAR_H
