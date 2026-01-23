#ifndef VENTANABUSCAR_H
#define VENTANABUSCAR_H

#include <QDialog>

namespace Ui {
class VentanaBuscar;
}

class VentanaBuscar : public QDialog
{
    Q_OBJECT

public:
    explicit VentanaBuscar(QWidget *parent = nullptr);
    ~VentanaBuscar();

private slots:
    void on_btnVolver_clicked();

private:
    Ui::VentanaBuscar *ui;
};

#endif // VENTANABUSCAR_H
