/*WAP to swap two integer valules,two character values and two double values without using function template*/
#include <iostream>
using namespace std;

void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"\nAfter swapping a:"<<a<<"b:"<<b<<endl;

}
void swap(char &a,char &b)
{
    char temp;
    temp=a;
    a=b;
    b=temp;
cout<<"\nAfter swapping a:"<<a<<"b:"<<b<<endl;
}
void swap(double &a,double &b)
{
    double temp;
    temp=a;
    a=b;
    b=temp;
cout<<"\nAfter swapping a:"<<a<<"b:"<<b<<endl;

}


int main()
{
    int a=10,b=20;
cout<<"\nBefore swapping a:"<<a<<"B:"<<b<<endl;
    swap(a,b);
    float c=10.2,d=30.1;
cout<<"\nBefore swapping c:"<<c<<"d:"<<d<<endl;

    swap(c,d);
    char r='a',s='b';
cout<<"\nBefore swapping r:"<<r<<"s"<<s<<endl;
    swap(r,s);
    return 0;
}