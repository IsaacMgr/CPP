#include <iostream>
using namespace std;
class Base
{
    protected:
        int x;
    public:
        void setb()
        {
            cout<<"\nENter the value o f x:";
            cin>>x;
            // cout<<"\nEnter the value of y:";
            // cin>>y;
        }
        void display()
        {
            // cout<<"\nThe value of x:"<<x<<"\nThe value of y:"<<y<<endl;
            cout<<"\nThe value of x:"<<x<<endl;
        }
};
class Base1:public Base
{
    protected:
    int y;

};
class Derived:public Base1{
    int result;
    public:
        void calcr()
        {
            result=x*y;

        }
        void dd(){
            cout<<"\nResult:"<<result<<endl;
        }
};
int main()
{
    Derived d1;
    d1.setb();
    d1.display();
    d1.calcr();
    d1.dd();
    return 0;
}