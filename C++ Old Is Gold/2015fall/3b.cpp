#include <iostream>
using namespace std;

class Base
{
    protected:
        int x;
    public:
        Base()
        {
            cout<<"\nThis is base"<<endl;
        }
        virtual ~Base()
        {
            cout<<"\nDestructor of base"<<endl;
        }
};
class Derived:public Base
{
    protected:
        int y;
    public:
        Derived()
        {
            cout<<"\nThis is derived"<<endl;

        }
        ~Derived()
        {
            cout<<"\nDestructor of derived"<<endl;
        }
};
int main()
{
    Base *bptr;
    bptr=new Base;
    delete bptr;
    bptr=NULL;
    Derived dobj;
    bptr=&dobj;
    delete bptr;
    return 0;
}