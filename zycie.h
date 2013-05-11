#ifndef ZYCIE_H
#define ZYCIE_H

#include <QWidget>
#include <QPainter>
#include <QColor>

class Zycie : public QWidget
{
    Q_OBJECT
public:
    explicit Zycie(QWidget *parent = 0);

private:
    bool tablicaKomorek[100][100];
    QTimer* timer;

    void malujPiksele(QPainter &p);


protected:
    void mousePressEvent(QMouseEvent *e);
    void paintEvent(QPaintEvent *);
    
signals:
    
public slots:
    
};

#endif // ZYCIE_H
