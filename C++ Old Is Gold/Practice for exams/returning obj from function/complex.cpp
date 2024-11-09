#include <iostream>
using namespace std;
class Complex
{
    int real,imaginary;
    public:
        void setdetails()
        {
            cout<<"Enter the real value:";
            cin>>real;
            cout<<endl<<"Enter the img:";
            cin>>imaginary;
        }
        void displaydetails()
        {
            cout<<"real:"<<real<<"Imaginary:"<<imaginary;
        }
        Complex addcomplex(Complex C2)
        {
            Complex temp;
            temp.real=real+C2.real;
            temp.imaginary=imaginary+C2.imaginary;
            return temp;
        }

};
int main()
{
    Complex C1,C2,C3;
    C1.setdetails();
    C2.setdetails();
    C1.displaydetails();
    C2.displaydetails();
    C3=C1.addcomplex(C2);
    C3.displaydetails();
    return 0;
}