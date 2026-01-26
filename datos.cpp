#include "datos.h"
#include <QFile>
#include <QTextStream>

datos::datos(int id,QString nombreSerie,QString genero,int temTotal,int epTotal,QString estado,int tem,int ep){

    this->Id=id;
    this->nombreSerie=nombreSerie;
    this->genero=genero;
    this->temTotal=temTotal;
    this->epTotal=epTotal;
    this->estado=estado;
    this->tem=tem;
    this->ep=ep;
}
int datos::getId() const{
    return Id;
}
QString datos::getnombreSerie() const{
    return nombreSerie;
}
QString datos::getgenero() const{
    return genero;
}
int datos::gettemTotal() const{
    return temTotal;
}
int datos::getepTotal() const{
    return epTotal;
}
QString datos::getestado() const{
    return estado;
}
int datos::gettem() const{
    return tem;
}
int datos::getep() const{
    return ep;
}

void datos::guardarEnArchivo(const datos &d){
    QFile archivo("datosSeries.txt");
    if(!archivo.open(QIODevice::Append | QIODevice::Text))
        return;
    QTextStream out(&archivo);
    out<<d.getId()<<";"
        <<d.getnombreSerie()<<";"
        <<d.getgenero()<<";"
        <<d.gettemTotal()<<";"
        <<d.getepTotal()<<";"
        <<d.getestado()<<";"
        <<d.gettem()<<";"
        <<d.getep()<<"\n";
    archivo.close();
}


void datos::setId(int id){
    this->Id=id;
}
void datos::setnombreSerie(const QString &nombreSerie){
    this->nombreSerie=nombreSerie;
}
void datos::setgenero(const QString &genero){
    this->genero=genero;
}
void datos::settemTotal(int temTotal){
    this->temTotal=temTotal;
}
void datos::setepTotal(int epTotal){
    this->epTotal=epTotal;
}
void datos::setestado(const QString &estado){
    this->estado=estado;
}
void datos::settem(int tem){
    this->tem=tem;
}
void datos::setep(int ep){
    this->ep=ep;
}

QList<datos> datos::cargarDesdeArchivo(){
    QList<datos> lista;
    QFile archivo("datosSeries.txt");
    if(!archivo.open(QIODevice::ReadOnly | QIODevice::Text))
        return lista;
    QTextStream in (&archivo);
    while(!in.atEnd()){
        QString linea=in.readLine();
        QStringList d=linea.split(";");
        if (d.size()==8){
            datos serie(
                d[0].toInt(),
                d[1],
                d[2],
                d[3].toInt(),
                d[4].toInt(),
                d[5],
                d[6].toInt(),
                d[7].toInt()
                );
            lista.append(serie);

        }
    }
    archivo.close();
    return lista;
}

void datos::guardarTodoEnArchivo(const QList<datos> &lista)
{
    QFile archivo("datosSeries.txt");

    if (!archivo.open(QIODevice::WriteOnly | QIODevice::Text))
        return;

    QTextStream out(&archivo);

    for (const datos &d : lista)
    {
        out << d.getId() << ";"
            << d.getnombreSerie() << ";"
            << d.getgenero() << ";"
            << d.gettemTotal() << ";"
            << d.getepTotal() << ";"
            << d.getestado() << ";"
            << d.gettem() << ";"
            << d.getep() << "\n";
    }

    archivo.close();
}

