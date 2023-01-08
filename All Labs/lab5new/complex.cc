/*Write a program to define a class complex with datamembers real and imaginary.Define appropriate member 
function to input and display the  complex function to input and display the complex numbers.Also
define a member function that takes two objects of complex as arguments and adds them.*/
#include <iostream>
using namespace std;
class Complex
{
    private:
    int real;
    int imaginary;
    public:
    void setdetails();
    void displaydetails();
    void addComplex(Complex,Complex);
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
    cout<<"The real number is:"<<real<<endl;
    cout<<"The imaginary number is:"<<imaginary<<endl;
}
void Complex::addComplex(Complex c1,Complex c2)
{
    real=c1.real+c2.real;
    imaginary=c1.imaginary+c2.imaginary;

}
int main()
{
    Complex c1,c2,c3;
    c1.setdetails();
    c1.displaydetails();
    c2.setdetails();
    c2.displaydetails();
    c3.addComplex(c1,c2);
    cout<<"The resultant complex number is:"<<endl;
    c3.displaydetails();
    return 0;
}