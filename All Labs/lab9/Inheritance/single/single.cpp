//single inheritance
//public mode

#include <iostream>
using namespace std;
class Base
{
    protected:
        int x;
    public:
        void set1()
        {
            cout<<"Enter the value of x:";
            cin>>x;
        }
        void display1()
        {
            cout<<"x="<<x<<endl;
        }
};
class Derived:public Base
{
    private:
        int y;
    public:
        void set2()
        {
            cout<<"Enter the value for y:";
            cin>>y;
        }
        void display2()
        {
            cout<<"y="<<y<<endl;
        }
};
int main()
{
    Derived obj;
    obj.set1();
    obj.set2();
    obj.display1();
    obj.display2();
    return 0;
}