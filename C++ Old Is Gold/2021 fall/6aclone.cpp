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
            cout<<"Real:"<<real<<"Imaginary:"<<imaginary<<endl;
        }
        void operator++()
        {
            real=++real;
            imaginary=++imaginary;
        }

};
int main()
{
    Complex c1(10,20);
    c1.display();
    ++c1;
    c1.display();
    return 0;
}