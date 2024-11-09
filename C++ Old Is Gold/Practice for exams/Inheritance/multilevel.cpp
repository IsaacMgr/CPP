#include <iostream>
using namespace std;
class Base
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
class Child:public Base
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
class Anochild:public Child{
    protected:
        int c,result;
    public:
        void set2()
        {
            cout<<"Enter the value for c:";
            cin>>c;
        }
        void calculate()
        {
            result=a*b*c;
            cout<<"The multiplication of three numbers is:"<<result<<endl;
        }
};
int main()
{
    Anochild obj1;
    obj1.set();
    obj1.set1();
    obj1.set2();
    obj1.calculate();
    return 0;
}