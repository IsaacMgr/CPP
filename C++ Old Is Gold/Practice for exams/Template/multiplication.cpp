#include<iostream>
using namespace std;
template<typename T>
T maximum(T a,T b,T c)
{
    if(a>b&&a>c)
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
void display(T x)
{
    cout<<"The maximum among the numbers is:"<<x<<endl;
}
int main()
{
    int mone=maximum(10,20,30);
    display(mone);
    return 0;
}
