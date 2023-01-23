//constructor in derived class in single inheritance
#include <iostream>
using namespace std;
class Parent
{
    protected:
        int x;
    public:
        Parent()
        {
            x=0;
            cout<<"\nInside default constructor of parent"<<endl;
        }
        Parent(int x)
        {
            this->x=x;//first x is of protected int x and second x is of parent(int x)
            cout<<"\nInside parametarized constructor of parent"<<endl;
        }
        void displayParent()
        {
            cout<<"\nValue of x="<<x<<endl;
        }
        
};
class Child:public Parent
{
    int y;
    public:
        Child()
        {
            y=0;
            cout<<"Inside default constructor of child"<<endl;
        }

Child(int x,int y):Parent(x)
{
    this->y=y;//first y is of private int y and second y is of Child(int x,int y)
    cout<<"\nInside parametarized constructor of child"<<endl;
}
void displaychild()
{
    displayParent();
    cout<<"\nThe value of y="<<y<<endl;
}
};
int main()
{
    Parent pobj(10);
    pobj.displayParent();
    Child cobj(55,65);
    cobj.displaychild();
    Child cobj2;
    cobj2.displaychild();
    return 0;
}