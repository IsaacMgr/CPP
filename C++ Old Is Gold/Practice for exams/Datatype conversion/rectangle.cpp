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
        void displaypol()
        {
            cout<<"Radius:"<<radius<<endl<<"Angle:"<<angle<<endl;
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
        Rectangle(){
            xcoor=0;
            ycoor=0;
        }
        Rectangle(double x,double y)
        {
            xcoor=x;
            ycoor=y;
        }
        Rectangle(Polar p)
        {
            xcoor=p.getradius()*cos(p.getangle());
            ycoor=p.getradius()*cos(p.getangle());
        }
        void displayrec()
        {
            cout<<"xcoordinate:"<<xcoor<<endl<<"ycoordinate:"<<ycoor<<endl;
        }
};
int main()
{
    Polar pobj(10.9,5.6);
    Rectangle robj;
    robj=pobj;
    robj.displayrec();
    pobj.displaypol();
    return 0;

}
