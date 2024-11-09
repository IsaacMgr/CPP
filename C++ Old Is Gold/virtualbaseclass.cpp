#include <iostream>
using namespace std;
class Grandparent
{
    public:
        void display()
        {
            cout<<"\nGrandparent property";
        }
};
class Parent1: virtual public Grandparent//here we must declare virtual
{

};
class Parent2:virtual public Grandparent
{

};
class Child:public Parent1,public Parent2
{

};
int main()
{
    Child cobj;
    cobj.display();
    return 0;
    
}