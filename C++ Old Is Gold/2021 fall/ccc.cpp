#include <iostream>
using namespace std;
class Rectangle;
void area(Rectangle);
class Rectangle
{
    int length,breadth;
    public:
        void set()
        {
            cout<<"\nEnter length:";
            cin>>length;
            cout<<"\nEnter breadth:";
            cin>>breadth;

        }
        void display()
        {
            cout<<"\nLength:"<<length<<"\nBreadth:"<<breadth<<endl;
        }
        friend void area(Rectangle);
};
void area(Rectangle r)
{
    cout<<"\nThe area of rectangle is:"<<r.length*r.breadth<<endl;
}
int main()
{
    Rectangle robj;
    robj.set();
    robj.display();
    area(robj);
    return 0;
}