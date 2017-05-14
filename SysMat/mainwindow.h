#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "globaldefines.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionConsultar_Alun_triggered();
    void on_actionConsultar_Prof_triggered();
    void on_actionConsultar_Disc_triggered();
    void on_actionAddRem_Alun_triggered();
    void on_actionAddRem_Prof_triggered();
    void on_actionAddRem_Disc_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
