#include <iostream>
using namespace std;
class Base
{
    public:
        virtual void example()
        {
            cout<<"inside base class"<<endl;

        }

};
class Derived:public Base
{
    public:
        void example()
        {
            cout<<"Inside child class"<<endl;
        }

};
int main()
{
    Base *bptr;
    Base bobj;
    bptr=&bobj;
    bptr->example();
    bptr=NULL;
    Derived dobj;
    bptr=&dobj;
    bptr->example();
    return 0;
}