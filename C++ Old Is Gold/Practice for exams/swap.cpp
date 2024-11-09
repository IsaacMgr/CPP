#include <iostream>
using namespace std;

template<typename T>
void swapValues(T &a,T &b)
{
    T temp;
    temp=a;
    a=b;
    b=temp;

}

int main()
{
    int a=10,b=20;
    cout<<"The value before swapping is:"<<a<<"and"<<b<<endl;

    swapValues<int>(a,b);
    cout<<"The value after swapping is:"<<a<<"and"<<b<<endl;

    return 0;
}