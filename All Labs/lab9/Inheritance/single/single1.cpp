//private mode
#include <iostream>
using namespace std;
class Base
{
    private:
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
class Derived:private Base
{
    private:
        int y;
    public:
    void set2()
    {
        set1();

        cout<<"Enter the value of y:";
        cin>>y;
    }
    void display2()
    {
        display1();
        cout<<"y="<<y<<endl;
    }
};
int main()
{
    Derived obj;
    obj.set2();
    obj.display2();
    return 0;
}