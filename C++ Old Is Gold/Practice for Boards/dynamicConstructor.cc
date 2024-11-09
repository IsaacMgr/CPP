#include<iostream>
using namespace std;
class Test
    {
        int *x,*y;
        public:
            Test()
                {
                    x=new int;
                    y=new int;
                    x=0;
                    y=0;
                }
            Test(int a, int b)
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

                    cout<<*x<<endl<<*y<<endl;
                }
    };
int main()
    {
        Test *ptr= NULL;
        ptr = new Test(1,2);
        ptr->display();
        delete ptr;
        ptr=NULL;
        return 0;
    }