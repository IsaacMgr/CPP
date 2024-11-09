/*We have a class name COmplex which have a tata member real and imaginary.Default and parametarized
constructor are there to initialize the data member.WAP overloading unary operator '++' where real
and imaginary data member will be incremented and '+' operator to add two complex number*/
#include <iostream>
using namespace std;

class Complex
{
    int real,imaginary;
    public:
        Complex()
        {
            real=0;
            imaginary=0;
        }
        Complex(int r,int i)
        {
            real=r;
            imaginary=i;
        }
        void display()
        {
            cout<<"\nReal="<<real<<"\nImaginary="<<imaginary<<endl;
        }
        void operator ++()
        {
            ++real;
            ++imaginary;
        }
};
int main()
{
    Complex cobj(10,20);
    cobj.display();
    ++cobj;
    cout<<"\nThe result after operator overloading is:"<<endl;
    cobj.display();
    return 0;
}