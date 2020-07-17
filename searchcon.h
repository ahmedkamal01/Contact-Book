#ifndef SEARCHCON_H
#define SEARCHCON_H

#include <QDialog>

namespace Ui {
class searchCon;
}

class searchCon : public QDialog
{
    Q_OBJECT

public:
    explicit searchCon(QWidget *parent = 0);
    ~searchCon();

private slots:
    void on_pushButton_clicked();

private:
    Ui::searchCon *ui;
};

#endif // SEARCHCON_H
