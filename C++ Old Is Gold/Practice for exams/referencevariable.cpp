//Reference variable


#include <iostream>
using namespace std;

int main()
{
    int a=808;
    int &b=a;
    cout<<"The value of a="<<a<<endl<<"The value of b:"<<b<<endl;
    b=95;
    cout<<"Again the value of a="<<a<<endl<<"Again the value of b:"<<b<<endl;
    cout<<"The address of a:"<<a<<endl;
    cout<<"The address of b:"<<b<<endl;
    return 0;
}