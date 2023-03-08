//WAP to find maximum of three integer numbers, three character values and three doublr values using 
//function template
#include <iostream>
using namespace std;
template<typename T>
void maximum(T a,T b,T c)
{
    if(a>b&&a>c)
    {
        cout<<"\nMaximum is:"<<a<<endl;
    }
    else if(b>c)
    {
        cout<<"\nMaximum is:"<<b<<endl;
    }
    else
    {
        cout<<"\nMaximum is:"<<c<<endl;
    }
}
int main()
{
    int a=10,b=20,c=30;
    maximum<int>(a,b,c);
    return 0;
}