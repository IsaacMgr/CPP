//ambiguity example
#include <iostream>
using namespace std;

class A
{
    protected:
        int x;
    public:
        void set()
        {
            cout<<"\nEnter the value of x:"<<endl;
            cin>>x;
        }
        void display()
        {
            cout<<"\nThe value of x is:"<<x<<endl;
        }
};
class B
{
    protected:
        int y;
    public:
        void set()
        {
            cout<<"\nEnter the value of y:";
            cin>>y;
        }
        void display()
        {
            cout<<"\nTHe value of y is:"<<y<<endl;
        }
};
class C:public A,public B
{
    int result;
    public:
        void set()
        {
            result=x+y;
        }
        void display()
        {
            cout<<"\nThe sum of two value is:"<<result;
        }
};
int main()
{
    C objc;
    objc.A::set();
    objc.A::display();
    objc.B::set();
    objc.B::display();
    objc.set();
    objc.display();
    return 0;
}