//in non type template the argument is replaced with value instead of any particular datatype
#include <iostream>
using namespace std;
template <typename T,int size>
void testarray(T x[])
{
    cout<<"Enter "<<size<<"value:"<<endl;
    for(int i=0;i<=size-1;i++)
    {
        cin>>x[i];
    }
    cout<<"Array is:"<<endl;
    for(int i=0;i<=size-1;i++)
    {
        cout<<x[i]<<" ";
    }
}
int main()
{
    int x[5];
    testarray<int,5>(x);
    return 0;
}
// #include <iostream>
// using namespace std;

// template <typename T,int size>
// void testarray(T x[])
// {
//     cout<<"\nEnter "<<size<<"Value:";
//     for(int i=0;i<=size-1;i++)
//     {
//         cin>>x[i];
//     }
//     cout<<"\nArray is:"<<endl;
//     for(int i=0;i<=size-1;i++)
//     {
//         cout<<x[i]<<"\n";

//     }
// }
// int main()
// {
//     int x[5];
//     testarray <int,5>(x);
//     return 0;
// }