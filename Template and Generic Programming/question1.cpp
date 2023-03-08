/*WAP to calculate multiplication and division of values of different types using function template*/
#include <iostream>
using namespace std;
template <typename T1, typename T2>
void testfunction(T1 a,T2 b)
{
    T1 result;
    T2 result1;
    result=a*b;
    result1=a/b;
    cout<<"\nThe multiplication of the two numbers is:"<<result<<endl;
    cout<<"\nThe division of the two numbers is:"<<result1;

}
int main()
{
    int x=10;
    float y=5.5;
    testfunction<int,float>(x,y);
    return 0;
}