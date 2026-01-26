#include "ventanaagregar.h"
#include "ui_ventanaagregar.h"
#include "datos.h"
#include <QMessageBox>

VentanaAgregar::VentanaAgregar(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::VentanaAgregar)
{
    ui->setupUi(this);
    on_cmbEstado_currentTextChanged(ui->cmbEstado->currentText());
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

bool VentanaAgregar::validarRangoTemporadas()
{
    int temTotal = ui->spinTemTotal->value();
    int epTotal  = ui->spinEpTotal->value();
    int temAct   = ui->spinTemActual->value();
    int epAct    = ui->spinEpActual->value();

    if (temAct > temTotal) {
        QMessageBox::warning(
            this,
            "Error de datos",
            "La temporada actual no puede ser mayor que la temporada total"
            );
        return false;
    }

    if (epAct > epTotal) {
        QMessageBox::warning(
            this,
            "Error de datos",
            "El episodio actual no puede ser mayor que el episodio total"
            );
        return false;
    }

    return true; // todo correcto
}

void VentanaAgregar::on_cmbEstado_currentTextChanged(const QString &estado)
{
    if (estado == "Pendiente") {
        ui->spinTemActual->setEnabled(false);
        ui->spinEpActual->setEnabled(false);
        ui->spinTemActual->setValue(1);
        ui->spinEpActual->setValue(1);
    } else if(estado=="Acabada") {
        ui->spinTemActual->setEnabled(false);
        ui->spinEpActual->setEnabled(false);
        ui->spinTemActual->setValue(ui->spinTemTotal->value());
        ui->spinEpActual->setValue(ui->spinEpTotal->value());
    } else if(estado=="Viendo"){
        ui->spinTemActual->setEnabled(true);
        ui->spinEpActual->setEnabled(true);

    }
}

void VentanaAgregar::on_btnGuardar_clicked()
{
    if (!validarRangoTemporadas()) {
        return; // no guarda
    }
    datos d(obtenerSerie());
    datos::guardarEnArchivo(d);
    QMessageBox::information(
        this,
        "Éxito",
        "La serie se guardó correctamente"
        );
    accept();
}


