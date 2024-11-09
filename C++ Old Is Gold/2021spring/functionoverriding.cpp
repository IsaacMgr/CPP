#include <iostream>
using namespace std;
class Base
{
    public:
        void message()
        {
            cout<<"\nThis is inside base"<<endl;
        }
};
class Derived:public Base
{
    void message()
    {
        cout<<"\nThis is Inside derived"<<endl;
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
    delete bptr;
    return 0;

}
