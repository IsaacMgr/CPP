#include <iostream>
using namespace std;
class Rational
{
    private:
    int num,den;
    float x;
    public:
    void assignvalue();
    void displayvalue();
    void invert();

};
void Rational :: assignvalue()
{
    num=22;
    den=7;
    x=num*1.0/den;
    
}

void Rational:: displayvalue()
{
    cout<<"The rational number is:"<<x<<endl;

}
void Rational:: invert()
{
    swap(num,den);
    cout<<"After swapping numerator and denominator the value of x is:"<<num<<"/"<<den<<endl;
}
void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;

}
int main()
{
    Rational r1,r2;
    r1.assignvalue();
    r1.displayvalue();
    r1.invert();
    return 0;
}