#include "zycie.h"

Zycie::Zycie(QWidget *parent) :
    QWidget(parent)
{
    memset(&tablicaKomorek, false, sizeof(99));

    rozmiar=100;

    for(int k = 0; k < 100; k++) {
        for(int j = 0; j < 100; j++) {
            tablicaKomorek[k][j] = false;
        }
    }

    tablicaKomorek[1][1]=true;
    tablicaKomorek[1][2]=true;
    tablicaKomorek[2][3]=true;
    tablicaKomorek[2][4]=true;


}


void Zycie::mousePressEvent(QMouseEvent *e)
{
    double szer = (double)width()/rozmiar;
    double wys = (double)height()/rozmiar;
    int k = floor(e->y()/wys)+1;
    int j = floor(e->x()/szer)+1;
    tablicaKomorek[k][j] = !tablicaKomorek[k][j];
    update();



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

    for(int i=0; i<100;i++)
    {
        for(int j=0; j<100;j++)
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
