#include <iostream>
using namespace std;

class Example
{
    int a,b;
    public:

        Example()
        {
            a=0;
            b=0;
        }
        Example(int x,int y)
        {
            a=x;
            b=y;
        }
        void display()
        {
            cout<<"A="<<a<<endl<<"B="<<b<<endl;
        }
        Example(Example &e)
        {
            a=e.a;
            b=e.b;
        }
};
int main()
{
    Example eobj1(10,20);
    eobj1.display();
    Example eobj2(eobj1);
    eobj2.display();
    return 0;

}