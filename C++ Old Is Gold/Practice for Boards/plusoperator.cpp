#include <iostream>
using namespace std;

class Complex
{
    int real,img;
    public:
        Complex()
        {
            real=0;
            img=0;
        }
        Complex(int r,int i)
        {
            real=r;
            img=i;
        }
        void display()
        {
            cout<<"\nReal="<<real<<"\nImaginary="<<img<<endl;
        }
        Complex operator +(Complex C1)
        {
            Complex temp;
            temp.real=real+C1.real;
            temp.img=img+C1.img;
            return temp;
        }
};
int main()
{
    Complex c1(10,20),c2(20,30),c3;
    c1.display();
    c3=c1+c2;
    c3.display();
    return 0;
}