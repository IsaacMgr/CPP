#include <iostream>
using namespace std;
int add(int x,int y)
{
    return (x+y);
}
int add(int x,int y,int z)
{
    return x+y+z;
}
int main()
{
    int a,b,c;
    cout<<"\nEnter the value of a,b,c:";
    cin>>a>>b>>c;
    cout<<"\nThe sum of two numbers is:"<<add(a,b)<<endl;
    cout<<"\nThe sum of three numbers is:"<<add(a,b,c)<<endl;
    return 0;
}