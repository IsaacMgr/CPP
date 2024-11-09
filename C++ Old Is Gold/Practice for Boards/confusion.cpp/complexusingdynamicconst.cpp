#include <iostream>
using namespace std;
class Complex
{
    int *real,*imaginary;
    public:
        Complex()
        {
            real=new int;
            imaginary=new int;
            *real=0;
            *imaginary=0;
        }
        Complex(int r,int i)
        {
            real=new int;
            imaginary=new int;
            *real=r;
            *imaginary=i;
        }
        void display()
        {
            cout<<"\nReal="<<*real<<"\nImaginary:"<<*imaginary<<endl;
        }
        ~Complex()
        {
            delete real;
            delete imaginary;
        }
        void add(Complex &C1,Complex &C2)
        {
            *real=*C1.real+*C2.real;
            *imaginary=*C1.imaginary+*C2.imaginary;
            cout<<"\nReal="<<*real<<"\nImaginary:"<<*imaginary<<endl;

        }
};
int main()
{
    Complex *ptr1;
    ptr1=new Complex(10,20);
    Complex *ptr2;
    ptr2=new Complex(10,30);
    Complex pobj;
    pobj.add(*ptr1,*ptr2);
    return 0;
}