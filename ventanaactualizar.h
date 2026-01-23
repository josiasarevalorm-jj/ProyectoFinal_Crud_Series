#ifndef VENTANAACTUALIZAR_H
#define VENTANAACTUALIZAR_H

#include <QDialog>

namespace Ui {
class VentanaActualizar;
}

class VentanaActualizar : public QDialog
{
    Q_OBJECT

public:
    explicit VentanaActualizar(QWidget *parent = nullptr);
    ~VentanaActualizar();

private slots:
    void on_btnVover_clicked();

private:
    Ui::VentanaActualizar *ui;
};

#endif // VENTANAACTUALIZAR_H
