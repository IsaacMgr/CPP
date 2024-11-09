#include <iostream>
using namespace std;

class Example
{
    int a,b;
    public:
        Example()
        {
            a=0;
            b=0;
            //default constructor called

        }
        Example(int x,int y)
        {
            a=x;
            b=y;
            //parametarized constructor called
        }
        void displayexample()
        {
            cout<<"The value of a is:"<<a<<"The value of b is:"<<b<<endl;
        }
        Example (Example &e)
        {
            a=e.a;
            b=e.b;
        }
};
int main()
{
    Example obj1;
    obj1.displayexample();
    Example obj2(10,20);
    obj2.displayexample();
    Example obj3(obj2);
    obj3.displayexample();
    return 0;
    
}
