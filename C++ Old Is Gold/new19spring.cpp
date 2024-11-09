/*2019 3bfall*/
#include <iostream>
using namespace std;
class Base;
void display(Base);
class Base
{
    protected:
    int x,y;
    public:
        void setbase()
        {
            cout<<"\nEnter the value of the xcoordinate:";
            cin>>x;
            cout<<"\nEnter the value of the ycoordinate:";
            cin>>y;
        }
        friend void display(Base);
};
class Derived:public Base
{
    public:
        void add_vector(Base b1)
        {
            x+=b1.x;
            y+=b1.y;
        }
};
void display(Base b)
{
    cout<<"\nThe values are:"<<b.x<<"and"<<b.y<<endl;
}

int main()
{
    Derived dobj1,dobj2;
    dobj1.setbase();
    dobj2.setbase();
    dobj1.add_vector(dobj2);
    return 0;
}