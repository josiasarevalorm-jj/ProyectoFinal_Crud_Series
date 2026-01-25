#include "ventanaeliminar.h"
#include "ui_ventanaeliminar.h"

VentanaEliminar::VentanaEliminar(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::VentanaEliminar)
{
    ui->setupUi(this);
}

VentanaEliminar::~VentanaEliminar()
{
    delete ui;
}

void VentanaEliminar::on_btnVolver_clicked()
{
    close();
}

