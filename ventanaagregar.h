#ifndef VENTANAAGREGAR_H
#define VENTANAAGREGAR_H

#include <QDialog>

namespace Ui {
class VentanaAgregar;
}

class VentanaAgregar : public QDialog
{
    Q_OBJECT

public:
    explicit VentanaAgregar(QWidget *parent = nullptr);
    ~VentanaAgregar();

public:
    QStringList obtenerSerie() const;

private slots:
    void on_btnVolver_clicked();

    void on_btnGuardar_clicked();
private:
    Ui::VentanaAgregar *ui;
};

#endif // VENTANAAGREGAR_H
