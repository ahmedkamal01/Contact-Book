#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "globalvar.h"
#include "dialog.h"
#include "searchcon.h"
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

void MainWindow::on_pushButton_2_clicked()
{
 Dialog dial(this);
 dial.exec();
}

void MainWindow::on_pushButton_3_clicked()
{
    searchCon se;
    se.exec();
}
