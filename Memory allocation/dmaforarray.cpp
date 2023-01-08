#include <iostream>
using namespace std;
int main()
{
    int *ptr=NULL;
    int size;
    cout<<"Enter size:";
    cin>>size;
    ptr=new int[size];
    cout<<"Enter"<<size<<"values"<<endl;
    for(int i=0;i<=size-1;i++)
    {
        cin>>*(ptr+i);
    }
    cout<<"\nThe value are:\n";
    for(int i=0;i<=size-1;i++)
    {
        cout<<*(ptr+i)<<endl;
        
    }
    delete[]ptr;
    return 0;
}