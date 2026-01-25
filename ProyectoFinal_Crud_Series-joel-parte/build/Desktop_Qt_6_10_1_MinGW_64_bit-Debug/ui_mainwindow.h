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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *btnAgregar;
    QPushButton *btnMostrar;
    QPushButton *btnBuscar;
    QPushButton *btnActualizar;
    QPushButton *btnEliminar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(502, 438);
        MainWindow->setStyleSheet(QString::fromUtf8("/* ===== FONDO GENERAL ===== */\n"
"QMainWindow {\n"
"    background: qlineargradient(\n"
"        x1:0, y1:0,\n"
"        x2:0, y2:1,\n"
"        stop:0 rgb(15, 15, 15),\n"
"        stop:1 rgb(35, 35, 35)\n"
"    );\n"
"}\n"
"\n"
"/* ===== TITULO (GESTOR DE SERIES) ===== */\n"
"QLabel#label {\n"
"    background-color: rgb(229, 9, 20); /* Rojo Netflix */\n"
"    color: white;\n"
"    font: bold 18pt \"Arial Black\";\n"
"    letter-spacing: 2px;\n"
"    padding: 12px;\n"
"    border-radius: 8px;\n"
"}\n"
"\n"
"/* ===== LABELS NORMALES ===== */\n"
"QLabel {\n"
"    color: rgb(220, 220, 220);\n"
"    font: bold 11pt \"Arial\";\n"
"}\n"
"\n"
"/* ===== BOTONES ===== */\n"
"QPushButton {\n"
"    background-color: rgb(40, 40, 40);\n"
"    color: white;\n"
"    font: bold 11pt \"Arial Black\";\n"
"    border-radius: 18px;\n"
"    padding: 10px;\n"
"    text-align: center;\n"
"    padding-left: 20px;\n"
"}\n"
"\n"
"/* ===== BOTONES HOVER ===== */\n"
"QPushButton:hover {\n"
"    background-color: rgb(229, 9, 20);\n"
"  "
                        "  color: white;\n"
"}\n"
"\n"
"/* ===== BOTONES PRESIONADOS ===== */\n"
"QPushButton:pressed {\n"
"    background-color: rgb(180, 8, 16);\n"
"}\n"
"\n"
"/* ===== INPUTS ===== */\n"
"QLineEdit {\n"
"    background-color: rgb(30, 30, 30);\n"
"    color: white;\n"
"    border: 1px solid rgb(80, 80, 80);\n"
"    border-radius: 10px;\n"
"    padding: 6px;\n"
"}\n"
"\n"
"/* ===== TABLAS ===== */\n"
"QTableWidget {\n"
"    background-color: rgb(20, 20, 20);\n"
"    color: white;\n"
"    gridline-color: rgb(80, 80, 80);\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: rgb(229, 9, 20);\n"
"    color: white;\n"
"    font: bold 10pt \"Arial\";\n"
"    padding: 6px;\n"
"    border: none;\n"
"}"));
        MainWindow->setDocumentMode(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 20, 441, 321));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Black")});
        font.setPointSize(18);
        font.setBold(true);
        font.setItalic(false);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        btnAgregar = new QPushButton(layoutWidget);
        btnAgregar->setObjectName("btnAgregar");
        btnAgregar->setMinimumSize(QSize(0, 0));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        QBrush brush1(QColor(40, 40, 40, 255));
        brush1.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        QBrush brush2(QColor(39, 191, 115, 255));
        brush2.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush2);
        QBrush brush3(QColor(255, 255, 255, 128));
        brush3.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Highlight, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush3);
#endif
        btnAgregar->setPalette(palette);
        btnAgregar->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(btnAgregar);

        btnMostrar = new QPushButton(layoutWidget);
        btnMostrar->setObjectName("btnMostrar");
        btnMostrar->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(btnMostrar);

        btnBuscar = new QPushButton(layoutWidget);
        btnBuscar->setObjectName("btnBuscar");
        btnBuscar->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(btnBuscar);

        btnActualizar = new QPushButton(layoutWidget);
        btnActualizar->setObjectName("btnActualizar");
        btnActualizar->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(btnActualizar);

        btnEliminar = new QPushButton(layoutWidget);
        btnEliminar->setObjectName("btnEliminar");
        btnEliminar->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(btnEliminar);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 502, 26));
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
        label->setText(QCoreApplication::translate("MainWindow", "GESTION DE SERIES", nullptr));
        btnAgregar->setText(QCoreApplication::translate("MainWindow", "Agregar", nullptr));
        btnMostrar->setText(QCoreApplication::translate("MainWindow", "Mostrar", nullptr));
        btnBuscar->setText(QCoreApplication::translate("MainWindow", "Buscar", nullptr));
        btnActualizar->setText(QCoreApplication::translate("MainWindow", "Actualizar", nullptr));
        btnEliminar->setText(QCoreApplication::translate("MainWindow", "Eliminar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
