#include <iostream>
using namespace std;
class Base
{
    protected:
    int x,y;
    public:
        void set()
        {
            cout<<"Enter the value for x and y:";
            cin>>x>>y;
        }
        void display()
        {
            cout<<"The value for x is:"<<x<<endl<<"The value for Y is:"<<y<<endl;

        }


};
class child1:public Base
{
    int resultB;
    public:
        void result()
        {
            resultB=x+y;
            cout<<"The addition is:"<<resultB;
        }
};
class child2:public Base
{
    int resultc;
    public: 
        void res()
        {
            resultc=x*y;
            cout<<"THe multiplication is:"<<resultc;
        }
};
int main()
{
    child1 obj1;
    child2 obj2;
    obj1.set();
    obj1.display();
    obj1.result();
    obj2.set();
    obj2.display();
    obj2.res();
    return 0;
}
