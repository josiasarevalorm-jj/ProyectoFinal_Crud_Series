#ifndef VENTANABUSCAR_H
#define VENTANABUSCAR_H

#include <QDialog>
#include "datos.h"

namespace Ui {
class VentanaBuscar;
}

class VentanaBuscar : public QDialog
{
    Q_OBJECT

public:
    explicit VentanaBuscar(QList<datos> &listaSeries,QWidget *parent = nullptr);
    ~VentanaBuscar();

private slots:
    void on_btnVolver_clicked();

    void on_btnBuscar_clicked();

private:
    Ui::VentanaBuscar *ui;
    QList<datos> &listaSeries;
    void llenarTabla();
};

#endif // VENTANABUSCAR_H
