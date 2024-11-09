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
            cout<<"\nReal:"<<real<<"Imaginary:"<<imaginary<<endl;
        }
        Complex operator+(Complex c)
        {
            Complex temp;
            temp.real=real+c.real;
            temp.imaginary=imaginary+c.imaginary;
            return temp;
        }
};
int main()
{
    Complex C(10,20),C1(15,25),C2;
    C.display();
    C1.display();
    C2=C+C1;
    C2.display();
    return 0;
}