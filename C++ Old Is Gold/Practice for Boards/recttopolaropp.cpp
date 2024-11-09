//polar to rectangle
#include <iostream>
#include <math.h>
using namespace std;
class Rectangle
{
    double xcoor,ycoor;
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

};

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
        operator Rectangle()
        {
            double x,y;
            x=radius*cos(angle);
            y=radius*sin(angle);
        Rectangle robj(x,y);
        return robj;
        }
};
int main()
{
    Polar p(10,20);
    Rectangle r;
    r=p;
    r.displayrectangle();
    p.displaypolar();
    return 0;
}