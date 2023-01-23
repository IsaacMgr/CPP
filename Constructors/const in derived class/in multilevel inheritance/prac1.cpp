//Constructor in derived class in Multilevel inheritance
#include <iostream>
using namespace std;
class Parent
{
    protected:
        int x;
    public:
        Parent()
        {
            cout<<"\nInside default constructor of parent"<<endl;

        }
        Parent(int x)
        {
            this->x=x;//first x is of protected int x and second x is of parent(int x)
            cout<<"\nInside parametarized constructor of parent"<<endl;
        }
        void displayparent()
        {
            cout<<"\nValue of x="<<x<<endl;
        }

};

class Child:public Parent
{
    protected:
        int y;
    public:
        Child()
        {
            y=0;
            cout<<"\nInside default constructor of child"<<endl;
        }
        
        Child(int x,int y):Parent(x)//in this code first Parent(x) will run then only statements inside Child(int x,int y)...
        {
            this->y=y;
            cout<<"\nInside parametarized constructor of child"<<endl;
        }
        void displaychild()
        {
            displayparent();
            cout<<"\nValue of y="<<y<<endl;
        }
};

class Grandchild:public Child
{
    int z;
    public:
        Grandchild()
        {
            z=0;
            cout<<"\nInside default constructor of grandchild"<<endl;
        }
        Grandchild(int x,int y,int z):Child(x,y)//in this code first Parent(x) will run then only statements inside Grandchild(int x,int y)...
        {
            this->z=z;
            cout<<"\nInside default constructor of grandchild"<<endl;
        }
        void displaygrandchild()
        {
            displayparent();
            displaychild();
            cout<<"\nValue of z="<<z<<endl;
        }
};

int main()
{
    Grandchild gobj0;
    Grandchild gobj(55,95,105);
    gobj.displaygrandchild();
    return 0;
}