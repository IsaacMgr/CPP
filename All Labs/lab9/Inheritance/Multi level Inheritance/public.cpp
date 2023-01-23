#include <iostream>
using namespace std;
class A
{
    protected:
        int a;
    public:
        void seta()
        {
            cout<<"Enter the value of a:";
            cin>>a;
        }

};
class B:public A
{
    protected:
        int b;
    public:
        void setb()
        {
            cout<<"Enter the value of b:";
            cin>>b;
        }

};
class C:public B
{
    protected:
        int c;
    public:
        void setc()
        {
            cout<<"Enter the value of c:";
            cin>>c;
        }
        void calculate()
        {
            cout<<"Result="<<(a*b*c);
        }

};
int main()
{
    C obj;
    obj.seta();
    obj.setb();
    obj.setc();
    obj.calculate();
    return 0;
}
