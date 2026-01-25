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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ventanaMostrar
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *labelTitulo;
    QTableWidget *tablaMostrar;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnMostrar;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnVolver;

    void setupUi(QDialog *ventanaMostrar)
    {
        if (ventanaMostrar->objectName().isEmpty())
            ventanaMostrar->setObjectName("ventanaMostrar");
        ventanaMostrar->resize(732, 325);
        ventanaMostrar->setStyleSheet(QString::fromUtf8("/* =====================\n"
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
        widget = new QWidget(ventanaMostrar);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 20, 661, 281));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelTitulo = new QLabel(widget);
        labelTitulo->setObjectName("labelTitulo");
        labelTitulo->setAlignment(Qt::AlignmentFlag::AlignCenter);
        labelTitulo->setWordWrap(true);

        verticalLayout->addWidget(labelTitulo);

        tablaMostrar = new QTableWidget(widget);
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
        tablaMostrar->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(tablaMostrar);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btnMostrar = new QPushButton(widget);
        btnMostrar->setObjectName("btnMostrar");

        horizontalLayout->addWidget(btnMostrar);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnVolver = new QPushButton(widget);
        btnVolver->setObjectName("btnVolver");

        horizontalLayout->addWidget(btnVolver);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ventanaMostrar);

        QMetaObject::connectSlotsByName(ventanaMostrar);
    } // setupUi

    void retranslateUi(QDialog *ventanaMostrar)
    {
        ventanaMostrar->setWindowTitle(QCoreApplication::translate("ventanaMostrar", "Dialog", nullptr));
        labelTitulo->setText(QCoreApplication::translate("ventanaMostrar", "VENTANA DE MOSTRAR", nullptr));
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
        btnMostrar->setText(QCoreApplication::translate("ventanaMostrar", "Mostrar", nullptr));
        btnVolver->setText(QCoreApplication::translate("ventanaMostrar", "Volver", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ventanaMostrar: public Ui_ventanaMostrar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAMOSTRAR_H
