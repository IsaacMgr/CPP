#include <iostream>
using namespace std;
class Test
{
    int *x,*y;
    public:
        Test()
        {
            x=new int;
            y=new int;
            *x=0;
            *y=0;
        }
        Test(int a,int b)
        {
            x=new int;
            y=new int;
            *x=a;
            *y=b;
        }
        Test(Test &t)
        {
            x=new int;
            y=new int;
            *x=*(t.x);
            *y=*(t.y);
        }
        void display()
        {
            cout<<"\nValue at address pointer by x="<<*x<<endl;
            cout<<"\nValue at address pointed by y="<<*y<<endl;

        }
        ~Test()
        {
            delete x;
            delete y;
            cout<<"\nDestructor called\n";

        }
};
int main()
{
    Test tobj1;//calls default constructor
    Test tobj2(100,509);//calls parametarized constructor
    Test tobj3(tobj2);//calls copy constructor
    tobj1.display();
    tobj2.display();
    tobj3.display();
    return 0;
}