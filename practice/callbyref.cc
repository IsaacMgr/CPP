#include <iostream>
using namespace std;
int swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
    int x,y;
    x=50;
    y=60;
    cout<<"The value of x before call is:"<<x<<endl;
    cout<<"The value of y before call is:"<<y<<endl;
    swap(x,y);
    cout<<"The value of x after call is:"<<x<<endl;
    cout<<"The value of y after call is:"<<y<<endl;
    return 0;
    
}