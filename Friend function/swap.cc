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
        cout<<"Enter the number:"<<endl;
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
        cout<<"Enter the number:"<<endl;
        cin>>num2;
    }
    void displaydetails()
    {
        cout<<"The seocnd number is:"<<num2<<endl;
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
    One objone;
    Two objtwo;
    cout<<"For the first number"<<endl;
    objone.setdetails();
    cout<<"For the second number"<<endl;
    objtwo.setdetails();
    objone.displaydetails();
    objtwo.displaydetails();
    swap(objone,objtwo);
    cout<<"After swapping the number is:"<<endl;
    objone.displaydetails();
    objtwo.displaydetails();
    return 0;
}