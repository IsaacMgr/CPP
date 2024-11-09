#include <iostream>
using namespace std;
int main()
{
    int a=900;
    int &b=a;
    cout<<"a="<<a<<"b="<<b<<endl;
    b=95;
    cout<<"a="<<a<<"b="<<b<<endl;
    cout<<"address of a="<<&a<<endl;
    cout<<"address of b="<<&b<<endl;
    return 0;
}