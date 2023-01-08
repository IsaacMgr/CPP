#include <iostream>
using namespace std;
class Number;
void maximum(Number,Number);
class Number
{
    int num;
    public:
    void setdetails()
    {
        cout<<"Enter the number:";
        cin>>num;
    }
    void displaydetails()
    {
        cout<<"The number is:"<<num<<endl;
    }
    friend void maximum(Number,Number);
};
void maximum(Number n1,Number n2)
{
    if(n1.num>n2.num)
    {
        cout<<"The maximum among these two is:"<<n1.num;
    }
    else
    {
        cout<<"The maximum among these two is:"<<n2.num;
    }
}
int main()
{
    Number n1,n2;
    cout<<"For first number:"<<endl;
    n1.setdetails();
    cout<<"For second number:"<<endl;
    n2.setdetails();
    cout<<"For first number:"<<endl;
    n1.displaydetails();
    cout<<"For second number:"<<endl;
    n2.displaydetails();
    maximum(n1,n2);
    return 0;
}
