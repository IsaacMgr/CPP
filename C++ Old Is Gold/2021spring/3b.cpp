//example program to show overridden function
#include <iostream>
using namespace std;
class Base
{
    protected:
        int x;
    public:
        void example()
        {
            cout<<"Inside base\n";
        }
};
class Derived:public Base
{
    protected:
        int x;
    public:
        void example()
        {
            cout<<"Inside child\n";
        }
};
int main()
{
    Derived dobj;
    dobj.example();
    //to call the base class function we have to use class name followed by scope resolution operator
    dobj.Base::example();
    return 0;
}
