#include <iostream>
using namespace std;
class Base
{
    public:
        virtual void message()
        {
            cout<<"\nThis is inside base"<<endl;
        }
};
class Derived:public Base
{
    public: 
    void message()
    {
        cout<<"\nThis is inside derived"<<endl;
    }
};
int main()
{
    Base *bptr;
    Base bobj;
    bptr=&bobj;
    bptr->message();
    bptr=NULL;
    Derived dobj;
    bptr=&dobj;
    bptr->message();
    return 0;

}