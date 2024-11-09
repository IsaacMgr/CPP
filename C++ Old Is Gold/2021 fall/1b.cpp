#include <iostream>
using namespace std;

int add(int w,int x,int y=0,int z=0)
{
    return (w+x+y+z);
}
int main()
{
    int a,b,c,d;
    cout<<"\nEnter the value for a:";
    cin>>a;
    cout<<"\nEnter the value for b:";
    cin>>b;
    cout<<"\nEnter the value for c:";
    cin>>c;
    cout<<"\nEnter the value for d:";
    cin>>d;
    cout<<"\nThe sum of a and b is:"<<a+b<<endl;
    cout<<"\nThe sum of a,b and c is:"<<a+b+c<<endl;//value of y=0 overrided by value of c
    cout<<"\nThe sum of a,b,c and d is:"<<a+b+c+d<<endl;//value of y=0 overrided by value of c
    return 0;
}