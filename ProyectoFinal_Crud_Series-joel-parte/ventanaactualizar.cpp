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


void VentanaActualizar::on_btnActualizar_clicked()
{
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

