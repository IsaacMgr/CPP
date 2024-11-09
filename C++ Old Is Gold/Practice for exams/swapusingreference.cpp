#include <iostream>
using namespace std;
void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"Before swapping the value of a:"<<a<<endl<<"Before swapping the value of b:"<<b<<endl;
}
int main()
{
    int x=10;
    int y=20;
    swap(x,y);
    cout<<"After swapping the value of a:"<<x<<endl<<"After swapping the value of b:"<<y<<endl;
    return 0;
}