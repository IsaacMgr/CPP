//Polar to rectangular
//conversion routine in destination
#include <iostream>
#include <math.h>
using namespace std;

class Polar
{
    double radius,angle;
    public:
        Polar()
        {
            radius=0;
            angle=0;
        }
        Polar(double r,double a)
        {
            radius=r;
            angle=a;
        }
        void displaypolar()
        {
            cout<<"\nRadius:"<<radius<<"\nAngle="<<angle<<endl;
        }
        double getradi()
        {
            return radius;
        }
        double getangle()
        {
            return angle;
        }
};
class Rectangle
{
    int xcoor,ycoor;
    public:
        Rectangle()
        {
            xcoor=0;
            ycoor=0;
        }
        Rectangle(int x,int y)
        {
            xcoor=x;
            ycoor=y;
        }
        void displayrectangle()
        {
            cout<<"\nXcoordinate:"<<xcoor<<endl<<"\nYcoordinate:"<<ycoor<<endl;
        }
        Rectangle(Polar P)
        {
            xcoor=P.getradi()*cos(P.getangle());
            ycoor=P.getradi()*sin(P.getangle());
        }
};
int main()
{
    Polar p(10,20);
    Rectangle r;
    r=p;
    p.displaypolar();
    r.displayrectangle();
    return 0;
}
