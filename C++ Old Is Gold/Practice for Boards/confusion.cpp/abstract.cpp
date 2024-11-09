#include <iostream>
using namespace std;

class Shape
{
    protected:
    int length,breadth;
    public:
        void setshape()
        {
            cout<<"\nEnter length:";
            cin>>length;
            cout<<"\nEnter breadth:";
            cin>>breadth;
        }
        virtual void area()=0;

};
class Rectangle:public Shape
{
    public:
        void area()
        {
            cout<<"\nThe area of rectangle is:"<<length*breadth<<endl;
        }
};
class Triangle:public Shape
{
    public:
        void area()
        {
            cout<<"\nThe area of triangle is:"<<length*breadth*1/2<<endl;
        }
};
int main()
{
    Shape *sptr;
    Rectangle robj;
    sptr=&robj;
    sptr->setshape();
    sptr->area();
    sptr=NULL;
    Triangle tobj;
    sptr=&tobj;
    sptr->setshape();
    sptr->area();
    return 0;
}