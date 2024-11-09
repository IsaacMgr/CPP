#include <iostream>
using namespace std;
class A
{
protected:
    int x;
    public:
        void set()
        {
            cout<<"\nEnter the value of x:";
            cin>>x;
        }
        void display()
        {
            cout<<"The value of x is:"<<x<<endl;
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
            cout<<"\nThe value of y is:"<<y<<endl;
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
            cout<<"\nThe result is:"<<result<<endl;
        }
};
int main()
{
    C c1;
    c1.A::set();
    c1.B::set();
    c1.A::display();
    c1.B::display();
    c1.set();
    c1.display();
    return 0;
}