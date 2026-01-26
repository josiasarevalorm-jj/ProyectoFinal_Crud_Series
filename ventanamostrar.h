#ifndef VENTANAMOSTRAR_H
#define VENTANAMOSTRAR_H

#include <QDialog>

namespace Ui {
class ventanaMostrar;
}

class ventanaMostrar : public QDialog
{
    Q_OBJECT

public:
    explicit ventanaMostrar(QWidget *parent = nullptr);
    ~ventanaMostrar();

private slots:
    void on_btnVolver_clicked();

    void on_btnMostrar_clicked();

private:
    void cargarDatos();
    Ui::ventanaMostrar *ui;
};

#endif // VENTANAMOSTRAR_H
