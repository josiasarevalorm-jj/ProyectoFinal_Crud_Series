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

    listaSeries=datos::cargarDesdeArchivo();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnAgregar_clicked()
{
    VentanaAgregar v(this);
    v.exec();
}


void MainWindow::on_btnMostrar_clicked()
{
    ventanaMostrar v(this);
    v.exec();
}


void MainWindow::on_btnActualizar_clicked()
{
    VentanaActualizar v(listaSeries,this);
    v.exec();
}


void MainWindow::on_btnBuscar_clicked()
{
    VentanaBuscar v(listaSeries,this);
    v.exec();
}


void MainWindow::on_btnEliminar_clicked()
{
    VentanaEliminar v(listaSeries,this);
    v.exec();
}

