#include "ventanaeliminar.h"
#include "ui_ventanaeliminar.h"
#include <QMessageBox>



VentanaEliminar::VentanaEliminar(QList<datos> &listaSeries,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::VentanaEliminar)
    , listaSeries(listaSeries)
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

void VentanaEliminar::llenarTabla()
{
    ui->tablaEliminar->setRowCount(listaSeries.size());

    for(int i = 0; i < listaSeries.size(); i++)
    {
        const datos &s = listaSeries[i];

        ui->tablaEliminar->setItem(i,0,new QTableWidgetItem(QString::number(s.getId())));
        ui->tablaEliminar->setItem(i,1,new QTableWidgetItem(s.getnombreSerie()));
        ui->tablaEliminar->setItem(i,2,new QTableWidgetItem(s.getgenero()));
        ui->tablaEliminar->setItem(i,3,new QTableWidgetItem(QString::number(s.gettemTotal())));
        ui->tablaEliminar->setItem(i,4,new QTableWidgetItem(QString::number(s.getepTotal())));
        ui->tablaEliminar->setItem(i,5,new QTableWidgetItem(s.getestado()));
        ui->tablaEliminar->setItem(i,6,new QTableWidgetItem(QString::number(s.gettem())));
        ui->tablaEliminar->setItem(i,7,new QTableWidgetItem(QString::number(s.getep())));
        ui->tablaEliminar->resizeColumnsToContents();
    }
}

void VentanaEliminar::on_btnEliminar_clicked()
{
    if(ui->txtId->text().isEmpty()){
        QMessageBox::warning(this,"Error","Ingrese un ID");
        return;
    }

    int idEliminar = ui->txtId->text().toInt();

    for(int i = 0; i < listaSeries.size(); i++)
    {
        if(listaSeries[i].getId() == idEliminar)
        {
            listaSeries.removeAt(i);   // borra de la lista

            datos::guardarTodoEnArchivo(listaSeries); // guarda cambios

            llenarTabla();   // vuelve a cargar la tabla

            QMessageBox::information(this,"OK","Serie eliminada");
            return;
        }
    }

    QMessageBox::information(this,"Resultado","No existe ese ID");
}


void VentanaEliminar::on_btnBuscar_clicked()
{
    if(ui->txtId->text().isEmpty()){
        QMessageBox::warning(this,"Error","Ingrese un ID");
        return;
    }

    int idBuscado = ui->txtId->text().toInt();

    ui->tablaEliminar->setRowCount(0);

    for(int i = 0; i < listaSeries.size(); i++)
    {
        if(listaSeries[i].getId() == idBuscado)
        {
            ui->tablaEliminar->setRowCount(1);

            const datos &s = listaSeries[i];

            ui->tablaEliminar->setItem(0,0,new QTableWidgetItem(QString::number(s.getId())));
            ui->tablaEliminar->setItem(0,1,new QTableWidgetItem(s.getnombreSerie()));
            ui->tablaEliminar->setItem(0,2,new QTableWidgetItem(s.getgenero()));
            ui->tablaEliminar->setItem(0,3,new QTableWidgetItem(QString::number(s.gettemTotal())));
            ui->tablaEliminar->setItem(0,4,new QTableWidgetItem(QString::number(s.getepTotal())));
            ui->tablaEliminar->setItem(0,5,new QTableWidgetItem(s.getestado()));
            ui->tablaEliminar->setItem(0,6,new QTableWidgetItem(QString::number(s.gettem())));
            ui->tablaEliminar->setItem(0,7,new QTableWidgetItem(QString::number(s.getep())));

            return;
        }
    }

    QMessageBox::information(this,"Resultado","No se encontró ese ID");
}

