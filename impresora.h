#ifndef IMPRESORA_H
#define IMPRESORA_H

#include <QMainWindow>
#include <enlacegit.h>

QT_BEGIN_NAMESPACE
namespace Ui { class Impresora; }
QT_END_NAMESPACE

class Impresora : public QMainWindow
{
    Q_OBJECT

public:
    Impresora(QWidget *parent = nullptr);
    ~Impresora();

private slots:
    void guardar();
    //void mostrarPrecio(int);


    void on_actionC_digo_triggered();

private:
    Ui::Impresora *ui;
    //QList<Impresora*> m_impresoras;

    //void inicializarDatos();

};
#endif // IMPRESORA_H
