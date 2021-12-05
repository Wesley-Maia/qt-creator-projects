#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QMessageBox::about(this,"Curso Qt Creator", "Teste da caixa de mensagem");
}


void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::aboutQt(this,"Curso Qt Creator");
}


void MainWindow::on_pushButton_3_clicked()
{
     QMessageBox::critical(this,"Curso Qt Creator", "Exemplo de Erro");
}


void MainWindow::on_pushButton_4_clicked()
{
    QMessageBox::information(this,"Curso Qt Creator", "Information");
}


void MainWindow::on_pushButton_5_clicked()
{
    QMessageBox::question(this,"Curso Qt Creator", "Gostou da aplicação?");
}


void MainWindow::on_pushButton_6_clicked()
{
    QMessageBox::warning(this,"Curso Qt Creator", "Alerta");
}

