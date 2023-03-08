/*WAP to calculate the multiplication and division of values of different type using function template
*/
#include <iostream>
using namespace std;

template <typename T1,typename T2>
void testfunction(T1 a,T2 b)
{
    T1 result1,result2;
    result1=a*b;
    result2=a/b;
    cout<<"\nThe multiple of values is:"<<result1<<endl;
    cout<<"\nThe division of the values is:"<<result2<<endl;

}
int main()
{
    int x=10;
    float y=5;
    testfunction<int,float>(x,y);
    return 0;
}
