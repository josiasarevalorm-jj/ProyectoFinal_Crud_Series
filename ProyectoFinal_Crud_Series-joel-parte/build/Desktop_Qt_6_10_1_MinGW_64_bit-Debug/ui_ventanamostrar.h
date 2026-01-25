/********************************************************************************
** Form generated from reading UI file 'ventanamostrar.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANAMOSTRAR_H
#define UI_VENTANAMOSTRAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ventanaMostrar
{
public:
    QLabel *label;
    QTableWidget *tablaMostrar;
    QPushButton *btnVolver;
    QPushButton *btnMostrar;

    void setupUi(QDialog *ventanaMostrar)
    {
        if (ventanaMostrar->objectName().isEmpty())
            ventanaMostrar->setObjectName("ventanaMostrar");
        ventanaMostrar->resize(624, 300);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush);
        ventanaMostrar->setPalette(palette);
        ventanaMostrar->setStyleSheet(QString::fromUtf8("QFrame {\n"
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
        label = new QLabel(ventanaMostrar);
        label->setObjectName("label");
        label->setGeometry(QRect(230, 20, 191, 21));
        label->setWordWrap(true);
        tablaMostrar = new QTableWidget(ventanaMostrar);
        if (tablaMostrar->columnCount() < 8)
            tablaMostrar->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tablaMostrar->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tablaMostrar->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tablaMostrar->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tablaMostrar->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tablaMostrar->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tablaMostrar->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tablaMostrar->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tablaMostrar->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        tablaMostrar->setObjectName("tablaMostrar");
        tablaMostrar->setGeometry(QRect(10, 50, 601, 191));
        tablaMostrar->setStyleSheet(QString::fromUtf8(""));
        btnVolver = new QPushButton(ventanaMostrar);
        btnVolver->setObjectName("btnVolver");
        btnVolver->setGeometry(QRect(320, 260, 80, 24));
        btnMostrar = new QPushButton(ventanaMostrar);
        btnMostrar->setObjectName("btnMostrar");
        btnMostrar->setGeometry(QRect(170, 260, 80, 24));

        retranslateUi(ventanaMostrar);

        QMetaObject::connectSlotsByName(ventanaMostrar);
    } // setupUi

    void retranslateUi(QDialog *ventanaMostrar)
    {
        ventanaMostrar->setWindowTitle(QCoreApplication::translate("ventanaMostrar", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ventanaMostrar", "VENTANA DE MOSTRAR", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tablaMostrar->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ventanaMostrar", "Id", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tablaMostrar->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ventanaMostrar", "Nombre Serie", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tablaMostrar->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("ventanaMostrar", "Genero", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tablaMostrar->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("ventanaMostrar", "Total de temporadas", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tablaMostrar->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("ventanaMostrar", "Episodios por temporada", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tablaMostrar->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("ventanaMostrar", "Estado", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tablaMostrar->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("ventanaMostrar", "Temporada actual", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tablaMostrar->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("ventanaMostrar", "Episodio actual", nullptr));
        btnVolver->setText(QCoreApplication::translate("ventanaMostrar", "Volver", nullptr));
        btnMostrar->setText(QCoreApplication::translate("ventanaMostrar", "Mostrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ventanaMostrar: public Ui_ventanaMostrar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAMOSTRAR_H
