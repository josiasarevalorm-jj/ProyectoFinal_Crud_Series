#include "ventanabuscar.h"
#include "ui_ventanabuscar.h"

VentanaBuscar::VentanaBuscar(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::VentanaBuscar)
{
    ui->setupUi(this);
}

VentanaBuscar::~VentanaBuscar()
{
    delete ui;
}

void VentanaBuscar::on_btnVolver_clicked()
{
    close();
}

