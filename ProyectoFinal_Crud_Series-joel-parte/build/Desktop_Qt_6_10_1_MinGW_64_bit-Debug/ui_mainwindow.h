/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *btnAgregar;
    QPushButton *btnMostrar;
    QPushButton *btnActualizar;
    QPushButton *btnBuscar;
    QPushButton *btnEliminar;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(317, 227);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        MainWindow->setPalette(palette);
        MainWindow->setStyleSheet(QString::fromUtf8("QFrame {\n"
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
        MainWindow->setDocumentMode(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        btnAgregar = new QPushButton(centralwidget);
        btnAgregar->setObjectName("btnAgregar");
        btnAgregar->setGeometry(QRect(22, 22, 80, 24));
        btnAgregar->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: #2426AE;\n"
"font-weight: bold;\n"
""));
        btnMostrar = new QPushButton(centralwidget);
        btnMostrar->setObjectName("btnMostrar");
        btnMostrar->setGeometry(QRect(22, 52, 80, 24));
        btnMostrar->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: #2426AE;\n"
"font-weight: bold;\n"
""));
        btnActualizar = new QPushButton(centralwidget);
        btnActualizar->setObjectName("btnActualizar");
        btnActualizar->setGeometry(QRect(22, 82, 80, 24));
        btnActualizar->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: #2426AE;\n"
"font-weight: bold;\n"
""));
        btnBuscar = new QPushButton(centralwidget);
        btnBuscar->setObjectName("btnBuscar");
        btnBuscar->setGeometry(QRect(22, 112, 80, 24));
        btnBuscar->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: #2426AE;\n"
"font-weight: bold;\n"
""));
        btnEliminar = new QPushButton(centralwidget);
        btnEliminar->setObjectName("btnEliminar");
        btnEliminar->setGeometry(QRect(22, 142, 80, 24));
        btnEliminar->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: #2426AE;\n"
"font-weight: bold;\n"
""));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 0, 161, 21));
        label->setWordWrap(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 317, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnAgregar->setText(QCoreApplication::translate("MainWindow", "Agregar", nullptr));
        btnMostrar->setText(QCoreApplication::translate("MainWindow", "Mostrar", nullptr));
        btnActualizar->setText(QCoreApplication::translate("MainWindow", "Actualizar", nullptr));
        btnBuscar->setText(QCoreApplication::translate("MainWindow", "Buscar", nullptr));
        btnEliminar->setText(QCoreApplication::translate("MainWindow", "Eliminar", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "GESTION DE SERIES", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
