#include <iostream>
using namespace std;
template <typename T1>
T1 maximum(T1 a,T1 b,T1 c)
{
    if(a>b>c)
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
    cout<<"\nMaximum:"<<T.x<<endl;
}
int main()
{
    int moone=maximum(10,20,30);
    return 0;

}

