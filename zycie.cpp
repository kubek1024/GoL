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
    double szkerokosc= (double)width()/100;
    double wysokosc= (double)height()/100;

    for(int i=1; i<100;i++)
    {
        for(int j=1; i<100;i++)
        {
            if(tablicaKomorek[i][j]==true)
            {


            }

        }
    }

}
