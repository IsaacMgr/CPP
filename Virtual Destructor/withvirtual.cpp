//with virtual destructor of previous program
#include <iostream>
using namespace std;

class Base
{
    protected:
        int x;
    public:
        Base()
        {
            cout<<"\nThis is Base"<<endl;
        }
        virtual ~ Base()
        {
            cout<<"\nDestructor of Base"<<endl;
        }
};
class Derived:public Base
{
    int y;
    public:
        Derived()
        {
            cout<<"\nThis is derived";

        }
        ~ Derived()
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
    return 0;
}