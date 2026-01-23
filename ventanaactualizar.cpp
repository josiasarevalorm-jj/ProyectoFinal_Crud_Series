#include "ventanaactualizar.h"
#include "ui_ventanaactualizar.h"

VentanaActualizar::VentanaActualizar(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::VentanaActualizar)
{
    ui->setupUi(this);
}

VentanaActualizar::~VentanaActualizar()
{
    delete ui;
}

void VentanaActualizar::on_btnVover_clicked()
{
    close();
}

