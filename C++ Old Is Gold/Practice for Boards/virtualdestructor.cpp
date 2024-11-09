#include <iostream>
using namespace std;

class Base
{

    public:
        Base()
        {
            cout<<"\nThis is base";
        }
        virtual ~Base()
        {
            cout<<"\nDestructor of base";
        }
};
class Derived:public Base
{
    public:
        Derived()
        {
            cout<<"\nThis is derived";
        }
        ~Derived()
        {
            cout<<"\nDestructor of derived";
        }
};
int main()
{
    Base *bptr;
    bptr=new Base;
    delete bptr;
    bptr=NULL;
    bptr=new Derived;
    delete bptr;
    bptr=NULL;
    return 0;

}