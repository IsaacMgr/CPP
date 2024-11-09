//dynamic constructor



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
        ~Test()
        {
            delete x;
            delete y;
        }
        void display()
        {
            cout<<"The value of x is:"<<*x<<"The value of y is:"<<*y<<endl;
        }
};
int main()
{
    Test *ptr;
    ptr=new Test(10,20);
    ptr->display();
    return 0;
}
