#include "impresora.h"
#include "ui_impresora.h"
#include "impresoras.h"
#include <QDebug>
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QFileDialog>

Impresora::Impresora(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Impresora)
{
    ui->setupUi(this);
   // inicializarDatos();
    connect(ui->mnuGuardar, SIGNAL(triggered(bool)), this, SLOT(guardar()));


}

Impresora::~Impresora()
{
    delete ui;
}

void Impresora::guardar()
{
    QString fileName = QFileDialog::getSaveFileName(this,"Guardar datos", QDir::home().absolutePath() , "Archivo de Texto (*.txt, *csv)");
    QFile data(fileName);
    if (data.open(QFile::WriteOnly | QFile::Truncate)) {
        QTextStream salida(&data);
        //salida << ui->outDetalle.;
        ui->statusbar->showMessage("Datos almacenados en: " + fileName, 5000);
    }
    data.close();
}

/*void Impresora::inicializarDatos()
{
    m_impresoras.append(new Impresora());
    m_productos.append(new Producto(3,"Queso",2.50));
    m_productos.append(new Producto(4,"Gaseosa",3.00));
    m_productos.append(new Producto(5,"Cubeta de huevos",2.80));
}*/




void Impresora::on_actionC_digo_triggered()
{
    Enlacegit *ventana1 = new Enlacegit(this);
    ventana1->setModal(true);
    ventana1->show();
}
