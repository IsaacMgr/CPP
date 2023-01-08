//Define a class rectangle with data members length and breadth.Use constuctors to construct
//initial value of object of rectangle and appropriate member function to calculate area of rectangle
#include <iostream>
using namespace std;
class Rectangle
{
    int length,breadth,areac; 
    public:
        Rectangle();
        Rectangle(int,int);
        void area();
        void display();
};
Rectangle::Rectangle()
{
    cout<<"Default constructor"<<endl;
    length=0;
    breadth=0;
}
Rectangle::Rectangle(int l,int b)
{
    cout<<"Parametarized constructor"<<endl;
    length=l;
    breadth=b;
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
    Rectangle r2(10,5);
    r1.area();
    r2.area();
    r2.display();
    return 0;
}

