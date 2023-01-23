#include <iostream>
using namespace std;
class A
{
    protected:
        int x,y;
    public:
        void setx()
        {
            cout<<"\nEnter the value of x:";
            cin>>x;
            cout<<"\nEnter the value of y:";
            cin>>y;
        }
        
};
class B:public A
{
        int resultB;
    public:
        void calculates()
        {
            setx();
            resultB=x+y;
            cout<<"\nThe sum of two numbers is:"<<resultB<<endl;
        }
};
class C:public A
{
        int resultC;
    public:
        void calculatem()
        {
            setx();
            resultC=x*y;
            cout<<"\nThe product of two numbers is:"<<resultC<<endl;
        }
};

int main()
{
    B objB;
    objB.calculates();
    C objc;
    objc.calculatem();
    return 0;

}