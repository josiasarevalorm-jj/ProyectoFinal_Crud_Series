#include "ventanaagregar.h"
#include "ui_ventanaagregar.h"


VentanaAgregar::VentanaAgregar(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::VentanaAgregar)
{
    ui->setupUi(this);
}

VentanaAgregar::~VentanaAgregar()
{
    delete ui;
}

void VentanaAgregar::on_btnVolver_clicked()
{
    close();
}


void VentanaAgregar::on_btnGuardar_clicked()
{

}


