#include <iostream>
using namespace std;

int main()
{
    double *ptr1=NULL;
    ptr1=new double;
    cout<<"\nEnter the first value:";
    cin>>*ptr1;
    double *ptr2=NULL;
    ptr2=new double;
    cout<<"\nEnter the second value:";
    cin>>*ptr2;
    cout<<"\nThe value after multiplication is:"<<*ptr1**ptr2<<endl;
    return 0;

}