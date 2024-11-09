#include <iostream>
using namespace std;

class Complex
{
    int *real,*img;
    public:
        Complex()
        {
            real=new int;
            img=new int;
            *real=0;
            *img=0;
        }
        Complex(int r,int i)
        {
            real=new int;
            img=new int;
            *real=r;
            *img=i;
        }
        void display()
        {
            cout<<"Real:"<<*real<<"Imaginary:"<<*img<<endl;
        }
        void add(Complex &C1,Complex &C2)
        {
            *real=*C1.real+*C2.real;
            *img=*C1.img+*C2.img;
            cout<<"Real:"<<*real<<"Imaginary:"<<*img<<endl;

        }
        ~Complex()

        {
            delete real;
            delete img;
        }
};
int main()
{
    Complex *ptr;
    ptr=new Complex(10,20);
    Complex *ptr1;
    ptr1=new Complex(20,30);
    Complex pobj;
    pobj.add(*ptr,*ptr1);
    return 0;
}
