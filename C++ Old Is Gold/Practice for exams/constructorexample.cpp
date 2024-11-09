#include <iostream>
using namespace std;
class Example
{
    int x,y;
    public:
        Example()
        {
            x=0;
            y=0;
        }
        Example(int a,int b)
        {
            x=a;
            y=b;
        }
        Example (Example &e)
        {
            x=e.x;
            y=e.y;
        }
        void display()
        {
            cout<<"The value of x:"<<x<<endl<<"The value of y:"<<y<<endl;
        }
};
int main()
{
    Example e1;//default constructor called
    Example e2(10,20);//parametarized constructor called
    Example e3(e2);
    e1.display();
    e2.display();
    e3.display();
    return 0;
}