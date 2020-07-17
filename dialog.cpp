#include "dialog.h"
#include "ui_dialog.h"
#include "globalvar.h"
#include <QMessageBox>
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_ente_phone_clicked()
{
    QString q=ui->lineEdit_4->text();
    if(q.size()>0)
    st.insert(ui->lineEdit_4->text());
    ui->lineEdit_4->clear();
}


void Dialog::on_pushButton_clicked()
{
    QString w=ui->lineEdit_4->text();
    if(w.size()>0)
    st.insert(ui->lineEdit_4->text());

    my[ui->lineEdit_2->text()]={{ui->lineEdit->text(),ui->lineEdit_3->text()},st};
    st.clear();
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
}

void Dialog::on_pushButton_2_clicked()
{
    close();
}
