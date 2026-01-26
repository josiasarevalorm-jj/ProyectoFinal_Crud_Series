#include "ventanabuscar.h"
#include "ui_ventanabuscar.h"
#include <QList>
#include "datos.h"
#include <QMessageBox>

VentanaBuscar::VentanaBuscar(QList<datos> &listaSeries,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::VentanaBuscar)
    , listaSeries(listaSeries)
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

void VentanaBuscar::llenarTabla()
{
    ui->tablaBuscar->setRowCount(listaSeries.size());

    for(int i = 0; i < listaSeries.size(); i++)
    {
        const datos &s = listaSeries[i];


        ui->tablaBuscar->setItem(i,0,new QTableWidgetItem(s.getnombreSerie()));
        ui->tablaBuscar->setItem(i,1,new QTableWidgetItem(s.getgenero()));
        ui->tablaBuscar->setItem(i,2,new QTableWidgetItem(QString::number(s.gettemTotal())));
        ui->tablaBuscar->setItem(i,3,new QTableWidgetItem(QString::number(s.getepTotal())));
        ui->tablaBuscar->setItem(i,4,new QTableWidgetItem(s.getestado()));
        ui->tablaBuscar->setItem(i,5,new QTableWidgetItem(QString::number(s.gettem())));
        ui->tablaBuscar->setItem(i,6,new QTableWidgetItem(QString::number(s.getep())));
        ui->tablaBuscar->resizeColumnsToContents();
    }
}

void VentanaBuscar::on_btnBuscar_clicked()
{
    if(ui->txtId->text().isEmpty()){
        QMessageBox::warning(this,"Error","Ingrese un ID");
        return;
    }

    int idBuscado = ui->txtId->text().toInt();

    ui->tablaBuscar->clearContents();
    ui->tablaBuscar->setRowCount(0);

    for(int i = 0; i < listaSeries.size(); i++)
    {
        if(listaSeries[i].getId() == idBuscado)
        {
            ui->tablaBuscar->setRowCount(1);
            const datos &s = listaSeries[i];


            ui->tablaBuscar->setItem(0,0,new QTableWidgetItem(s.getnombreSerie()));
            ui->tablaBuscar->setItem(0,1,new QTableWidgetItem(s.getgenero()));
            ui->tablaBuscar->setItem(0,2,new QTableWidgetItem(QString::number(s.gettemTotal())));
            ui->tablaBuscar->setItem(0,3,new QTableWidgetItem(QString::number(s.getepTotal())));
            ui->tablaBuscar->setItem(0,4,new QTableWidgetItem(s.getestado()));
            ui->tablaBuscar->setItem(0,5,new QTableWidgetItem(QString::number(s.gettem())));
            ui->tablaBuscar->setItem(0,6,new QTableWidgetItem(QString::number(s.getep())));

            return;
        }
    }

    QMessageBox::information(this,"Resultado","No se encontró esa serie");
}


