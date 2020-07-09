#include "enlacegit.h"
#include "ui_enlacegit.h"

Enlacegit::Enlacegit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Enlacegit)
{
    ui->setupUi(this);
}

Enlacegit::~Enlacegit()
{
    delete ui;
}

