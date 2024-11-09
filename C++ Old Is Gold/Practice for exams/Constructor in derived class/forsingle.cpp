#include <iostream>
using namespace std;

class Parent
{
    protected:
        int a;
    public:
        Parent()
        {
            a=0;
            cout<<"Inside default constructor of the parent class"<<endl;
        }
            Parent(int a)
            {
                this->a=a;
                cout<<"Inside parametarized constructor of the parent class"<<endl;
            }
            void displayparent()
            {
                cout<<"The value of a:"<<this->a<<endl;
            }
        
};
class Child:public Parent
{
    protected:
        int b;
    public:
        Child()
        {
            b=0;
            cout<<"Inside default constructor of the child class"<<endl;

        }
        Child(int a,int b):Parent(a)
        {
            this->b=b;
            cout<<"Inside parametarized constructor of the child class"<<endl;
        }
        void displaychild()
        {
            cout<<"The value of the b:"<<this->b<<endl;
        }
};
int main()
{
    Parent pobj(50);
    pobj.displayparent();
    Child cobj(55,65);
    cobj.displaychild();
    Child cobj2;
    cobj2.displaychild();
    return 0;
}