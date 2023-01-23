#include <iostream>
using namespace std;

class Shape
{
    protected:
        int width,height,area1;
    public:
        void setDimension()
        {
            cout<<"\nEnter width and height:";
            cin>>width>>height;
        }
        virtual void area()=0;//pure virtual function
        
};
class Rectangle:public Shape
{
    public:
        void area()
        {
            area1=width*height;
            cout<<"area="<<area1;
        }
};
class Triangle:public Shape
{
    public:
        void area()
        {
            area1=(1/2)*width*height;
            cout<<"Area:"<<area1;

        }
};
int main()
{   
    Shape *sptr;
    Rectangle robj;
    Triangle tobj;
    sptr=&robj;
    sptr->setDimension();
    sptr->area();
    sptr=NULL;
    sptr=&tobj;
    sptr->setDimension();
    sptr->area();
    sptr=NULL;
    return 0;
}