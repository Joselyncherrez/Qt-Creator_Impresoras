#ifndef ENLACEGIT_H
#define ENLACEGIT_H

#include <QDialog>

namespace Ui {
class Enlacegit;
}

class Enlacegit : public QDialog
{
    Q_OBJECT

public:
    explicit Enlacegit(QWidget *parent = nullptr);
    ~Enlacegit();

private slots:


private:
    Ui::Enlacegit *ui;
};

#endif // ENLACEGIT_H
