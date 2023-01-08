#include <iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cout<<"Enter any three numbers:";
    cin>>n1>>n2>>n3;
    if(n1>n2&&n1>n3)
    {
        cout<<"The maximum among the three numbers is:"<<n1;
    }
    else if(n2>n3)
    {
        cout<<"The maximum among three numbers is:"<<n2;
    }
    else
    {
        cout<<"The maximum among three numbers is:"<<n3;
    }
    return 0;

}