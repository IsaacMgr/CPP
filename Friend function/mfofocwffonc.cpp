//wap to swap data values of private members two different classes where swapping operation is done
//by member function of one class
#include <iostream>
using namespace std;
class Two;
class One
{
    int num1;
    public:
    void setdetails()
    {
        cout<<"Enter the first number to swap:";
        cin>>num1;

    }
    void displaydetails()
    {
        cout<<"The number is:"<<endl;
    }
    void swap(Two&);
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
        cout<<"The number is:"<<num2;
    }
    friend void One::swap(Two&);

};
void One::swap(Two &y)
{
    int temp;
    temp=num1;
    num1=y.num2;
    y.num2=temp;
}
int main()
{
    One num1;
    Two num2;
    num1.setdetails();
    num2.setdetails();
    num1.displaydetails();
    num2.displaydetails();
    num1.swap(num2);
    num1.displaydetails();
    num2.displaydetails();
    return 0;
}

