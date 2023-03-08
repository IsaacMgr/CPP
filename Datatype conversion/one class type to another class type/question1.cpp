/*Define a class to represent rectangular coordinates and another class to represent polar coordinates.Convert polar coordinate
into rectangular coordinates using conversion routine in source class.*/

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
        Rectangle(double x,double y)
        {
            xcoor=x;
            ycoor=y;
        }
        void displayrectangle()
        {
            cout<<"\nX-coordinate:"<<xcoor<<endl<<"\nY-coordinate:"<<ycoor<<endl;
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
            cout<<"\nRadius="<<radius<<endl<<"\nAngle:"<<angle<<endl;
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
    Polar pobj(10.9,5.6);
    Rectangle robj;
    robj=pobj;
    //robj==pobj.operator Rectangle();
    robj.displayrectangle();
    pobj.displaypolar();
    return 0;
}