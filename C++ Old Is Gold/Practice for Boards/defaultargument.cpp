#include <iostream>
using namespace std;

int add(int x,int y,int z=0,int w=0)
{
    return (x+y+z+w);
}
int main()
{
    int a,b,c,d;
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"\nEnter the value of b:";
    cin>>b;
    cout<<"\nEnter the value of c:";
    cin>>c;
    cout<<"\nEnter the value of d:";
    cin>>d;
    cout<<"\nThe sum of two numbers is:"<<add(a,b)<<endl;
    cout<<"\nThe sum of four numbers is: "<<add(a,b,c,d)<<endl;
    return 0;


}