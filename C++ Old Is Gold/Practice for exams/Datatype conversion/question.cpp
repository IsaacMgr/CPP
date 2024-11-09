/*Define a class to represent rectangular coordinates and another class to represent polar coordinates.Convert polar coordinate
into rectangular coordinates using conversion routine in destination class.*/
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
            cout<<"\nRadius="<<radius<<endl<<"Angle="<<angle<<endl;
        }
        double getradius()
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
    double xcoor,ycoor;
    public:
        Rectangle()
        {
            xcoor=0;
            ycoor=0;
        }
        Rectangle(double x,double y)
        {
            xcoor=x;
            ycoor=y;
        }
        void displayrectangle()
        {
            cout<<"\nX-coordinate="<<xcoor<<endl<<"Y-coordinate="<<ycoor<<endl;
        }
        Rectangle(Polar p)
        {
            xcoor=p.getradius()*cos(p.getangle());
            ycoor=p.getradius()*sin(p.getangle());
        }
};
int main()
{
    Polar pobj(10.9,5.6);
    Rectangle robj;
    robj=pobj;
    //equivalent robj=pobj.operator Rectangle();
    robj.displayrectangle();
    pobj.displaypolar();
    return 0;
}