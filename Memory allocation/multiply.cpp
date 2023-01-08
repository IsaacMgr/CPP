/*WAP to multiply values of two double variable using DMA*/
#include <iostream>
using namespace std;
int main()
{
    double *ptr1=NULL;
    double *ptr2=NULL;
    ptr1=new double;
    ptr2=new double;
    cout<<"Enter the first value:";
    cin>>*ptr1;
    cout<<"Enter second value:";
    cin>>*ptr2;
    cout<<"The multiplication is"<<*(ptr1) * *(ptr2)<<endl;
    delete ptr1;
    delete ptr2;
    ptr1=NULL;
    ptr2=NULL;
    return 0;
    
}
