#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "consultar.h"
#include "addrem.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionConsultar_Alun_triggered(){
    Consultar *_consult = new Consultar;
    _consult->show();
}

void MainWindow::on_actionConsultar_Prof_triggered(){

}

void MainWindow::on_actionConsultar_Disc_triggered(){

}

void MainWindow::on_actionAddRem_Alun_triggered(){
    AddRem *_addrem = new AddRem(0,Aluno);
    _addrem->show();
}

void MainWindow::on_actionAddRem_Prof_triggered(){

}

void MainWindow::on_actionAddRem_Disc_triggered(){

}