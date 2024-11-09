#include <iostream>
using namespace std;
class Shape
{
    protected:
        int width,height;
    public:
        void setdimension()
        {
            cout<<"\nEnter the width:";
            cin>>width;
            cout<<"\nEnter the height:";
            cin>>height;
        }
        
        virtual void area()=0;

};
class Rectangle:public Shape
{
    public:
        void area()
        {
           
            cout<<"\nThe area is:"<< width*height<<endl;
        }
};
class Triangle:public Shape
{
    
    public:
        void area()
        {
            cout<<"\nThe area is:"<<1/2*width*height<<endl;
        }

};
int main()
{
    Shape *sptr;
    Rectangle robj;
    Triangle tobj;
    sptr=&robj;
    sptr->setdimension();
    sptr->area();
    sptr=NULL;
    sptr=&tobj;
    sptr->setdimension();
    sptr->area();
    sptr=NULL;
    return 0;
}