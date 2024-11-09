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
            cout<<"\nReal="<<real<<"\nImg="<<img<<endl;
        }
        friend Complex operator +(Complex,Complex);

};

Complex operator +(Complex C1,Complex C2)
{
    Complex temp;
    temp.real=C1.real+C2.real;
    temp.img=C1.img+C2.img;
    return temp;
}

int main()
{
    Complex C1(10,20),C2(20,30),C3;
    C3=C1+C2;
    C3.display();
    return 0;
}
