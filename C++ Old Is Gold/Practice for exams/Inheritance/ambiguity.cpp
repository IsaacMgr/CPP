#include <iostream>
using namespace std;
class A
{
    protected:
        int a;
    public:
        void set()
        {
            cout<<"Enter the value for a:";
            cin>>a;
        }
        void display()
        {
            cout<<"The value for a is:"<<a<<endl;
        }
};
class B
{
    protected:
        int b;
    public:
        void set()
        {
            cout<<"Enter the value for b:";
            cin>>b;

        }
        void display()
        {
            cout<<"The value for b is:"<<b<<endl;
        }

};
class C:public A,public B
{
    protected:
        int result;
    public:
        void calculate()
        {
            result=a*b;
        }
        void display()
        {
            cout<<"The multiplication is:"<<result<<endl;
        }
};
int main()
{
    C obj;
    obj.A::set();
    obj.B::set();
    obj.calculate();
    obj.display();
    obj.display();
    obj.display();

    return 0;
}