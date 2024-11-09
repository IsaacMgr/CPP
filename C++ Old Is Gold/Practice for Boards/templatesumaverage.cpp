#include <iostream>
using namespace std;
template <typename T1,typename T2>
int sum(T1 a,T2 b)
{
    return a+b;
}
template <typename T>
void display(T x)
{
    cout<<"\nThe result is:"<<x<<endl;
}
int main()
{
    float mmone=sum(10,20.5);
    display(mmone);
    return 0;
}