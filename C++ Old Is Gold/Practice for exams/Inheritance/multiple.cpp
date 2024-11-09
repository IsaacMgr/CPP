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
};
class B
{
    protected:
        int b;
    public:
        void set1()
        {
            cout<<"Enter the value for b:";
            cin>>b;

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
            cout<<"The multiplication is:"<<result<<endl;
        }
};
int main()
{
    C obj;
    obj.set();
    obj.set1();
    obj.calculate();
    return 0;
}