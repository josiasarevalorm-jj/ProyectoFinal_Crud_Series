#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QList>
#include "datos.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnAgregar_clicked();

    void on_btnMostrar_clicked();

    void on_btnActualizar_clicked();

    void on_btnBuscar_clicked();

    void on_btnEliminar_clicked();

private:
    Ui::MainWindow *ui;
    QList<datos> listaSeries;

};
#endif // MAINWINDOW_H
