#include "ventanamostrar.h"
#include "ui_ventanamostrar.h"



ventanaMostrar::ventanaMostrar(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ventanaMostrar)
{
    ui->setupUi(this);
}

ventanaMostrar::~ventanaMostrar()
{
    delete ui;
}

void ventanaMostrar::on_btnVolver_clicked()
{
    close();
}

