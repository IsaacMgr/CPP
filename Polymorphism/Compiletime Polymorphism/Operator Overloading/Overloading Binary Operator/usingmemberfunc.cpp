//it takes one argument as the calling object is implicitly passed in the called function.
#include <iostream>
using namespace std;

class Complex
{
    int real,img;
    public:
        Complex()
        {

        }
        Complex(int r,int i)
        {
            real=r;
            img=i;
        }
        void display()
        {
            cout<<"\nReal="<<real<<"\nImg="<<img<<endl;
        }
        Complex operator +(Complex C)
        {
            Complex temp;
            temp.real=real+C.real;
            temp.img=img+C.img;
            return temp;

        }
};
int main()
{
    Complex C1(10,20),C2(30,40),C3;
    C1.display();
    C2.display();
    C3=C1+C2;
    //equivalent C3=C1.operator +(C2);
    C3.display();
    return 0;
}
