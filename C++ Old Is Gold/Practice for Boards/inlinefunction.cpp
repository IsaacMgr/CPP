#include <iostream>
using namespace std;

class Example
{
    int a,b;
    public:
        void set()
        {
            cout<<"\nEnter the value of a:";
            cin>>a;
            cout<<"\nEnter the value of b:";
            cin>>b;
        }
        inline void add()
        {
            cout<<"\nThe addition is:"<<a+b<<endl;
        }
        inline void mul()
        {
            cout<<"nThe multiplication is:"<<a*b<<endl;
        }

};
int main()
{
    Example e1;
    e1.set();
    e1.add();
    e1.mul();
    return 0;

}


/*
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
*/