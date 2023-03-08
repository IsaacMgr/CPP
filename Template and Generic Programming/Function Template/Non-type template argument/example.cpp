/*Non type template argument is replaced with value instead of any particular datatype.
*/
#include <iostream>
using namespace std;

template <typename T,int size>
void testarray(T x[])
{
    cout<<"\nEnter "<<size<<"Value:";
    for(int i=0;i<=size-1;i++)
    {
        cin>>x[i];
    }
    cout<<"\nArray is:"<<endl;
    for(int i=0;i<=size-1;i++)
    {
        cout<<x[i]<<"\n";

    }
}
int main()
{
    int x[5];
    testarray <int,5>(x);
    //T is replaced with int
    //size is replace with 5;
    double y[15];
    testarray<double,15>(y);//T is replaced with double
    //size is replace with 15
    char z[20];
    testarray<char,20>(z);//T is replaced with char
    //size is replaced with 20
    return 0;
}