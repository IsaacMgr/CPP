#include <iostream>
using namespace std;

template<typename T1,typename T2,typename T3>
T1 maximum(T1 a,T2 b,T3 c)
{
    if(a>b&&b>c)
    {
        return a;
    }
    else if(b>c)
    {
        return b;
    }
    else 
    {
        return c;
    }
}
template<typename T>
T display(T x)
{
    cout<<"Maximum is:"<<x<<endl;
}
int main()
{
    int moone=maximum(10,20,30);
    display(moone);
    return 0;
}