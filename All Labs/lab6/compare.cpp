#include <iostream>
using namespace std;
class One;
class Two;
void compare(One,Two);
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
            cout<<"The first number is:"<<num1<<endl;
        }
        friend void compare(One,Two);
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
        friend void compare(One,Two);
};
void compare(One x,Two y)
{
    if(x.num1>y.num2)
    {
        cout<<"The maximum among two number is:"<<x.num1<<endl;
    }
    else
    {
        cout<<"The maximum among two number is:"<<y.num2<<endl;
    }

}
int main()
{
    One n1;
    Two n2;
    n1.setdetails();
    n2.setdetails();
    n1.displaydetails();
    n2.displaydetails();
    compare(n1,n2);
    return 0;
}