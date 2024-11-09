//enter the size of an array and display its componentes




#include <iostream>
using namespace std;
template <typename T,int size>
void testarray(T x[])
{
    cout<<"\nEnter "<<size<<"values"<<endl;
    for(int i=0;i<=size-1;i++)
    {
        cin>>x[i];
    }
    cout<<"\nArray is:";
    for(int i=0;i<=size-1;i++)
    {
        cout<<x[i]<<",";
    }
}
int main()
{
    int x[5];
    testarray<int,5>(x);
    return 0;
}