#include <iostream>
using namespace std;

template<typename T1,typename T2>
void testfunction(T1 a,T2 b)
{
    T1 result1,result2;
    result1=a*b;
    result2=a+b;
    cout<<"\nThe sum of the values is:"<<result2<<endl;
    cout<<"\nThe multiplication of the values is:"<<result1<<endl;
}
int main()
{
    int a=10;
    double b=20.5;
    testfunction<int,double>(a,b);
    return 0;
}