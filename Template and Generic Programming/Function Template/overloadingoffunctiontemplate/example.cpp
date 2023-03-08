#include <iostream>
using namespace std;

template <typename T>
int compare(T a,T b)
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
    int mone=compare(10,20);
    display(mone);
    double mtwo=maximum(10.5,6.49,7.8);
    display(mtwo);
    double mthree=compare(5.9,89.6);
    display(mthree);
    int mfour=maximum<int>(10,20,90);
    display(mfour);
    return 0;

}