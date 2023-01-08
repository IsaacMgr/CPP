#include <iostream>
using namespace std;
class Test
{
    private:
        int x,y;
    public:
        Test()
        {
            cout<<"Default constructor called\n";
            x=0;
            y=0;
        }
        Test(int a,int b)
        {
            cout<<"Parametarized constructor called\n";
            x=a;
            y=b;
        }
        
        void display()
        {
            cout<<"\nx="<<x<<"y="<<y<<endl;
        }
        ~Test()
        {
            cout<<"Destructor called"<<endl;
        }
};
int main()
{
    Test *ptr1=new Test;
    Test *ptr2=new Test(100,509);
    ptr1->display();
    ptr2->display();
    delete ptr1;
    ptr1=NULL;
    delete ptr2;
    ptr2=NULL;
    return 0;
}