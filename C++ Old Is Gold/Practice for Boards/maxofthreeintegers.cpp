#include <iostream>
using namespace std;
template <typename T>
void maximum(T a,T b,T c)
{
    if(a>b>c)
    {
        cout<<"\nMaximum is a";
    }
    else if(b>c)
    {
        cout<<"\nmaximum is b";
    }
    else
    {
        cout<<"\nMaximum is c";
    }
}
int main()
{
    int a=10,b=20,c=30;
    maximum<int>(a,b,c);
    return 0;
}