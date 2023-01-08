#include <iostream>
using namespace std;
class One;
class Two;
void swap(One&,Two&);
class One
{
    int num1;
    public:
        void setdetails()
        {
            cout<<"Enter the first number:";
            cin>>num1;
        }
        void displaydetails()
        {
            cout<<"The first number is:"<<num1;
        }
        friend void swap(One&,Two&);
};
class Two
{
    int num2;
    public:
        void setdetails()
        {
            cout<<"Enter the second number:";
            cin>>num2;
        }
        void displaydetails()
        {
            cout<<"The second number is:"<<num2<<endl;
        }
        friend void swap(One&,Two&);
};
void swap(One &x,Two &y)
{
    int temp;
    temp=x.num1;
    x.num1=y.num2;
    y.num2=temp;
    
}
int main()
{
    One n1;
    Two n2;
    n1.setdetails();
    n2.setdetails();
    n1.displaydetails();
    n2.displaydetails();
    swap(n1,n2);
    cout<<"After swapping the result is:"<<endl;
    n1.displaydetails();
    n2.displaydetails();
    return 0;
}