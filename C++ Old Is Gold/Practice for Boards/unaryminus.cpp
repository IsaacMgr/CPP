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
        Complex operator -()
        {
            Complex temp;
            temp.real=-real;
            temp.img=-img;
            return temp;
        }
};
int main()
{
    Complex c1(10,20),c2;
    c1.display();
    c2=-c1;
    c2.display();
    return 0;
}