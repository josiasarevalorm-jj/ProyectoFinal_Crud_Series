#include "ventanaactualizar.h"
#include "ui_ventanaactualizar.h"
#include <QList>
#include "datos.h"
#include <QMessageBox>


VentanaActualizar::VentanaActualizar(QList<datos> &listaSeries,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::VentanaActualizar)
    , listaSeries(listaSeries)
{
    ui->setupUi(this);
    on_cmbEstado_currentTextChanged(ui->cmbEstado->currentText());
}

VentanaActualizar::~VentanaActualizar()
{
    delete ui;
}

void VentanaActualizar::on_btnVover_clicked()
{
    close();
}


void VentanaActualizar::on_btnBuscar_clicked()
{
    int id=ui->txtId->text().toInt();
    for (const auto &s:listaSeries){
        if(s.getId()==id){
            QMessageBox::information(this,"Encontrado","La serie existe, puedes actualizar");
            return;
        }
    }
    QMessageBox::warning(this,"No encontrado","No existe una serie con ese ID");
}

bool VentanaActualizar::validarRangoTemporadas()
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

void VentanaActualizar::on_cmbEstado_currentTextChanged(const QString &estado)
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

void VentanaActualizar::on_btnActualizar_clicked()
{
    if(!validarRangoTemporadas())
        return;

    int id=ui->txtId->text().toInt();
    for (auto &s:listaSeries ){
        if(s.getId()==id){
            s.setnombreSerie(ui->txtNombre->text());
            s.setgenero(ui->txtGenero->text());
            s.settemTotal(ui->spinTemTotal->value());
            s.setepTotal(ui->spinEpTotal->value());
            s.setestado(ui->cmbEstado->currentText());
            s.settem(ui->spinTemActual->value());
            s.setep(ui->spinEpActual->value());
            datos::guardarTodoEnArchivo(listaSeries);
            QMessageBox::information(this,"Listo","Serie actualizada y guardada");
            return;
        }
    }

}

