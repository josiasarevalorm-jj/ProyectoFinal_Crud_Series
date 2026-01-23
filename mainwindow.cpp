#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ventanaagregar.h"
#include "ventanamostrar.h"
#include "ventanaactualizar.h"
#include "ventanabuscar.h"
#include "ventanaeliminar.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnAgregar_clicked()
{
    VentanaAgregar ventanaAgregar;
    ventanaAgregar.exec();
}


void MainWindow::on_btnMostrar_clicked()
{
    ventanaMostrar ventanaMostrar;
    ventanaMostrar.exec();
}


void MainWindow::on_btnActualizar_clicked()
{
    VentanaActualizar ventanaActualizar;
    ventanaActualizar.exec();
}


void MainWindow::on_btnBuscar_clicked()
{
    VentanaBuscar ventanaBuscar;
    ventanaBuscar.exec();
}


void MainWindow::on_btnEliminar_clicked()
{
    VentanaEliminar ventanaEliminar;
    ventanaEliminar.exec();
}

