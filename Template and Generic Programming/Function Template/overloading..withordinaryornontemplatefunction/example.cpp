#include <iostream>
using namespace std;
template <typename T>
int maximum(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
template <typename T>
T maximum(T a,T b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
template <typename T1>
T1 maximum(T1 a,T1 b,T1 c)
{
    if(a>b && a>c)
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
template <typename T>
void display(T x)
{
    cout<<"\nMaximum:"<<x<<endl;
}
int main()
{
    int mone=maximum(10,20);//calls ordinary function due to exact match
    double mthree=maximum(5.9,89.6);//gives priority to the template function
    display(mone);
    display(mthree);
    return 0;
}