#include "searchcon.h"
#include "ui_searchcon.h"
#include "globalvar.h"
#include <qiterator.h>
#include <QMessageBox>
searchCon::searchCon(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::searchCon)
{
    ui->setupUi(this);
}

searchCon::~searchCon()
{
    delete ui;
}

void searchCon::on_pushButton_clicked()
{

    ui->plainTextEdit->clear();
    if(my.find(ui->lineEdit->text())==my.end())
    {
        ui->plainTextEdit->appendPlainText("No such person is found \n \n");

        QMessageBox::critical(this,tr("WARNING"),tr("SORRY,\n No Such Person Is Found"));

    }
    else
    {
        ui->plainTextEdit->appendPlainText("National number is : "+ui->lineEdit->text()+"\n\n");
        ui->plainTextEdit->appendPlainText("Name is : "+my[ui->lineEdit->text()].first.first+"\n\n");
        ui->plainTextEdit->appendPlainText("Address is : "+my[ui->lineEdit->text()].first.second+"\n\n");
        int x =my[ui->lineEdit->text()].second.size();
        if(x==0)
        {
            ui->plainTextEdit->appendPlainText("No phones for this person");
        }
        else
        {
            if(x>1)
            ui->plainTextEdit->appendPlainText("Phone numbers are : ");
            else
             ui->plainTextEdit->appendPlainText("Phone number is : ");
            QSet<QString>::Iterator it;
            int i=1;
            for(it=my[ui->lineEdit->text()].second.begin();it!=my[ui->lineEdit->text()].second.end();it++)
            {
                ui->plainTextEdit->appendPlainText("\t"+QString::number(i,10)+"- "+*it+"\n");
                i++;
            }
        }
    }
    ui->lineEdit->clear();
}
