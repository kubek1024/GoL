#ifndef ZYCIE_H
#define ZYCIE_H

#include <QWidget>

class Zycie : public QWidget
{
    Q_OBJECT
public:
    explicit Zycie(QWidget *parent = 0);

private:
    bool tablicaKomurek[100][100];
    QTimer* timer;
    
signals:
    
public slots:
    
};

#endif // ZYCIE_H
