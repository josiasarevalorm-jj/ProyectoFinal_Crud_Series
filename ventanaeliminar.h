#ifndef VENTANAELIMINAR_H
#define VENTANAELIMINAR_H

#include <QDialog>
#include "datos.h"

namespace Ui {
class VentanaEliminar;
}

class VentanaEliminar : public QDialog
{
    Q_OBJECT

public:
    explicit VentanaEliminar(QList<datos> &listaSeries,QWidget *parent = nullptr);
    ~VentanaEliminar();

private slots:
    void on_btnVolver_clicked();

    void on_btnEliminar_clicked();

    void on_btnBuscar_clicked();

private:
    Ui::VentanaEliminar *ui;
    void llenarTabla();
    QList<datos> &listaSeries;
};

#endif // VENTANAELIMINAR_H
