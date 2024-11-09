#include <iostream>
using namespace std;
class Example
{
    protected:
        int x,y;
    public:
        Example()
        {
            x=0;
            y=0;
        }
        Example(int x,int y)
        {
            this->x=x;
            this->y=y;
        }
        void displayExample()
        {
            cout<<"\nX="<<x<<"\nY="<<y<<endl;
        }
        virtual void area()=0;
};
class Test:public Example
{
    int a,b;
    public:
        Test()
        {
            a=0;
            b=0;
        }
        Test(int x,int y,int a,int b):Example(x,y)
        {
            this->a=a;
            this->b=b;
        }
        void displaytest()
        {
            cout<<"\nA="<<a<<"\nB="<<b<<endl;
        }
        void area()
        {
            cout<<"\nArea="<<x*y*a*b<<endl;
        }

};
int main()
{
    Test t1(2,3,4,5);
    t1.displayExample();
    t1.displaytest();
    t1.area();
    return 0;
}