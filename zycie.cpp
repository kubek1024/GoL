#include "zycie.h"

Zycie::Zycie(QWidget *parent) :
    QWidget(parent)
{
    //memset(&tablicaKomorek, false, sizeof(100));

/*
    tablicaKomorek[0][0]=true;
    tablicaKomorek[0][1]=true;
    tablicaKomorek[0][2]=true;
    tablicaKomorek[0][3]=true;
    */
}


void Zycie::mousePressEvent(QMouseEvent *e)
{



}


void Zycie::paintEvent(QPaintEvent *)
{
    QPainter p(this);
    malujPiksele(p);

}


void Zycie::malujPiksele(QPainter &p)
{
    double szerokosc = (double)width()/100;
    double wysokosc= (double)height()/100;

    for(int i=1; i<100;i++)
    {
        for(int j=1; j<100;j++)
        {
            if(tablicaKomorek[i][j]==true)
            {
                qreal left = (qreal)(szerokosc*j-szerokosc); // margin from left
                qreal top  = (qreal)(wysokosc*i-wysokosc); // margin from top
                QRectF r(left, top, (qreal)szerokosc, (qreal)wysokosc);
                p.fillRect(r, QBrush(m_masterColor)); // fill cell with brush of main color

            }

        }
    }

}
