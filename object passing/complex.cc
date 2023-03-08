//WAP to define a class complex sith datamembers real and imaginary.Define appropriate member fuction to
//input and display the complex numbers.Also define a member function that takes two object of complex as 
//arguments and adds them.
#include <iostream>
using namespace std;
class Complex
{
    int real;
    int imaginary;
    public:
    void setdetails();
    void displaydetails();
    void add(Complex,Complex);
};
void Complex::setdetails()
{
    cout<<"Enter the real number:"<<endl;
    cin>>real;
    cout<<"Enter the imaginary number:"<<endl;
    cin>>imaginary;
}
void Complex::displaydetails()
{
    cout<<"The real number is:"<<endl;
    cin>>real;
    cout<<"The imaginary number is:"<<endl;
    cin>>imaginary;
}
void Complex::add(Complex c1,Complex c2)
{
    real=c1.real+c2.real;

    
    
    imaginary=c1.imaginary+c2.imaginary;
}
