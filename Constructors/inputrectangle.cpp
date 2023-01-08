//Define a class rectangle with data members length and breadth.Use constuctors to construct
//initial value of object of rectangle and appropriate member function to calculate area of rectangle
#include <iostream>
using namespace std;
class Rectangle
{
    int length,breadth,areac; 
    public:
        Rectangle();
        void setdetails();
        void area();
        void display();
};
Rectangle::Rectangle()
{
    cout<<"Default constructor"<<endl;
    length=0;
    breadth=0;
}
void Rectangle::setdetails()
{
    cout<<"Enter the length:";
    cin>>length;
    cout<<"Enter the breadth:";
    cin>>breadth;
}
void Rectangle::area()
{
    areac=length*breadth;
    
}
void Rectangle::display()
{
    cout<<"The area of the rectangle is:"<<areac<<endl;
}
int main()
{
    Rectangle r1;
    r1.setdetails();
    r1.area();
    r1.display();
    return 0;
}

