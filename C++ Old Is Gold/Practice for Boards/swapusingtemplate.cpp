#include <iostream>
using namespace std;
template<typename T>
void swapf(T &a,T &b)
{
    T temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"\nThe value after swapping is:"<<a<<"and"<<b<<endl;
}
int main()
{
    int x=10;
    int y=20;
    cout<<"\nThe value before swapping is:"<<x<<"and"<<y<<endl;
    swapf<int>(x,y);
    return 0;
}
