//Virtual destructor is used to deallocate memory allocated by object of derived class pointed by object pointer of base class
//without virtual destructor

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
        ~Base()
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
    return 0;
}
