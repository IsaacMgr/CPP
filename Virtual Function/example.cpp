#include <iostream>
using namespace std;
class Base
{
    protected:
        int x;
    public:
        virtual void example()
        {
            cout<<"\nInside Base";
        }
};
class Derived:public Base   
{
    int y;
    public: 
        void example()
        {
            cout<<"\n Inside Child";
        }
};
int main()
{
    Base *bptr;
    Base obj;
    bptr=&obj;
    bptr->example();
    bptr=NULL;
    Derived dobj;
    bptr=&dobj;
    bptr->example();
    return 0;

}