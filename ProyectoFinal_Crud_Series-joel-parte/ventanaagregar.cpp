#include "ventanaagregar.h"
#include "ui_ventanaagregar.h"
#include "datos.h"

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

datos VentanaAgregar::obtenerSerie() const{
    int id=ui->spinId->value();
    QString nombreSerie=ui->txtNombre->text();
    QString genero=ui->txtGenero->text();
    int temTotal=ui->spinTemTotal->value();
    int epTotal=ui->spinEpTotal->value();
    QString estado=ui->cmbEstado->currentText();
    int tem=ui->spinTemActual->value();
    int ep=ui->spinEpActual->value();
    return datos(id,nombreSerie,genero,temTotal,epTotal,estado,tem,ep);
}
void VentanaAgregar::on_btnVolver_clicked()
{
    reject();
}


void VentanaAgregar::on_btnGuardar_clicked()
{
    int id=ui->spinId->value();
    QString nombreSerie=ui->txtNombre->text();
    QString genero=ui->txtGenero->text();
    int temTotal=ui->spinTemTotal->value();
    int epTotal=ui->spinEpTotal->value();
    QString estado=ui->cmbEstado->currentText();
    int tem=ui->spinTemActual->value();
    int ep=ui->spinEpActual->value();
    datos d(id,nombreSerie,genero,temTotal,epTotal,estado,tem,ep);
    datos::guardarEnArchivo(d);
    accept();
}


