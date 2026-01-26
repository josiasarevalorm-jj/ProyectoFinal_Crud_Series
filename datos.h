#ifndef DATOS_H
#define DATOS_H

#include <QString>
#include <QList>
class datos
{
public:
    void setId(int id);
    void setnombreSerie(const QString &nombreSerie);
    void setgenero(const QString &genero);
    void settemTotal(int temTotal);
    void setepTotal(int epTotal);
    void setestado(const QString &estado);
    void settem(int tem);
    void setep(int ep);

    datos(int id,QString nombreSerie,QString genero,int temTotal,int epTotal,QString estado,int tem,int ep);
    int getId() const;
    QString getnombreSerie() const;
    QString getgenero() const;
    int gettemTotal() const;
    int getepTotal() const;
    QString getestado() const;
    int gettem() const;
    int getep() const;
    static bool existeId(int id);

    static void guardarEnArchivo(const datos &d);

    static QList<datos> cargarDesdeArchivo();

    static void guardarTodoEnArchivo(const QList<datos> &lista);
private:
    int Id;
    QString nombreSerie;
    QString genero;
    int temTotal;
    int epTotal;
    QString estado;
    int tem;
    int ep;
};

#endif // DATOS_H
