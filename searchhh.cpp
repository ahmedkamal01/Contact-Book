#include "searchhh.h"
#include "ui_search.h"
#include "globalvar.h"
search::search(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::search)
{
    ui->setupUi(this);
}

search::~search()
{
    delete ui;
}

void search::on_pushButton_clicked()
{
    ui->lineEdit->clear();
    if(my.find(ui->lineEdit->text())==my.end())
    {
        ui->plainTextEdit->appendPlainText("No such person is found");
    }
    else
    {
        ui->plainTextEdit->appendPlainText(tr("National number is : "+ui->lineEdit->text()+"/n/n"+"Name is : "+my[ui->lineEdit->text()].first.first+"/n/n"+"Address is "+my[ui->lineEdit->text()].first.second+"/n/n"));

    }

}
