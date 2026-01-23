#ifndef VENTANAELIMINAR_H
#define VENTANAELIMINAR_H

#include <QDialog>

namespace Ui {
class VentanaEliminar;
}

class VentanaEliminar : public QDialog
{
    Q_OBJECT

public:
    explicit VentanaEliminar(QWidget *parent = nullptr);
    ~VentanaEliminar();

private slots:
    void on_btnVolver_clicked();

private:
    Ui::VentanaEliminar *ui;
};

#endif // VENTANAELIMINAR_H
