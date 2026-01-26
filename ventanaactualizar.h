#ifndef VENTANAACTUALIZAR_H
#define VENTANAACTUALIZAR_H

#include <QDialog>
#include <QList>
#include "datos.h"

namespace Ui {
class VentanaActualizar;
}

class VentanaActualizar : public QDialog
{
    Q_OBJECT

public:
    explicit VentanaActualizar(QList<datos> &listaSeries,QWidget *parent = nullptr);
    ~VentanaActualizar();

private slots:
    void on_btnVover_clicked();

    void on_btnBuscar_clicked();

    void on_btnActualizar_clicked();

    void on_cmbEstado_currentTextChanged(const QString &estado);

private:
    Ui::VentanaActualizar *ui;
    QList<datos> &listaSeries;
    bool validarRangoTemporadas();
};

#endif // VENTANAACTUALIZAR_H
