#ifndef IMPRESORAS_H
#define IMPRESORAS_H

#include <QObject>

class Impresoras : public QObject
{
    Q_OBJECT
    /*Q_PROPERTY(int codigo READ codigo);
    Q_PROPERTY(QString marca READ marca WRITE setMarca)
    Q_PROPERTY(QString modelo READ modelo WRITE setModelo)
    Q_PROPERTY(QString serie READ serie WRITE setSerie)
    Q_PROPERTY(char tipocl READ tipocl WRITE setTipocl)
    Q_PROPERTY(QString contador READ contador WRITE setContador)
    Q_PROPERTY(float precio READ precio WRITE setPrecio)*/


public:
    explicit Impresoras(QObject *parent = nullptr);
    /*Impresoras(int codigo, QString marca, QString modelo, QString serie, char tipocl, QString contador, float Precio);

    //Getters
    int codigo()const;
    QString marca();
    QString modelo();
    QString serie();
    char tipocl();
    QString contador();
    float precio();

    //Setters
    void setPrecio(float precio);*/


signals:

/*private:
    int m_codigo;
    QString m_marca;
    QString m_modelo;
    QString m_serie;
    char m_tipocl;
    QString m_contador;
    float m_precio;*/

};

#endif // IMPRESORAS_H
