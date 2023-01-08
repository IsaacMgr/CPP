#include <iostream>
using namespace std;

int main()
{
    int *ptr=NULL;
    ptr=new int;
    cout<<"Enter a variable:";
    cin>>*ptr;
    int *ptr1=NULL;
    ptr1=new int(500);
    cout<<"The value at address pointed by the pointer is"<<*ptr<<endl;
    cout<<"The value at address pointed by the pointer is"<<*ptr1<<endl;
    delete ptr;
    delete ptr1;
    ptr=NULL;
    ptr1=NULL;
    return 0;
    
}