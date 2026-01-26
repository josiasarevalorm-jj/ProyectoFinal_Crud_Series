#include "ventanamostrar.h"
#include "ui_ventanamostrar.h"
#include <QFile>



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




void ventanaMostrar::on_btnMostrar_clicked()
{
    cargarDatos();
}


void ventanaMostrar::on_btnVolver_clicked()
{
    close();
}
void ventanaMostrar::cargarDatos(){
    QFile archivo("datosSeries.txt");
    if(!archivo.open(QIODevice::ReadOnly | QIODevice::Text))
        return;
    QTextStream in(&archivo);
    ui->tablaMostrar->setRowCount(0);
    while(!in.atEnd()){
        QString linea= in.readLine();
        QStringList datos=linea.split(";");

        if(datos.size()!=8){
            continue;
        }
        int fila=ui->tablaMostrar->rowCount();
        ui->tablaMostrar->insertRow(fila);

        ui->tablaMostrar->setItem(fila,0,new QTableWidgetItem(datos[0]));
        ui->tablaMostrar->setItem(fila,1,new QTableWidgetItem(datos[1]));
        ui->tablaMostrar->setItem(fila,2,new QTableWidgetItem(datos[2]));
        ui->tablaMostrar->setItem(fila,3,new QTableWidgetItem(datos[3]));
        ui->tablaMostrar->setItem(fila,4,new QTableWidgetItem(datos[4]));
        ui->tablaMostrar->setItem(fila,5,new QTableWidgetItem(datos[5]));
        ui->tablaMostrar->setItem(fila,6,new QTableWidgetItem(datos[6]));
        ui->tablaMostrar->setItem(fila,7,new QTableWidgetItem(datos[7]));
    }
    archivo.close();
    ui->tablaMostrar->resizeColumnsToContents();
}
