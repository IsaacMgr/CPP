#include <iostream>
using namespace std;


class Complex
{
    int real,img;
    public:
        Complex
        {

        }
        Complex(int x,int i)
        {
            real=x;
            img=i;
        }
        void display()
        {
            cout<<"\nReal="<<real<<endl<<"Img="<<img<<endl;
        }
        friend Complex operator -(Complex );
};

Complex operator -(Complex C)
{
    Complex temp;
    temp.real=C.real;
    temp.img=C.img;
    return temp;
}

int main()
{
    Complex C1(10,20),C2;
    C1.display();
    C2=-C1;
    cout<<"\nAfter Negation";
    C2.display();
    return 0;
}



