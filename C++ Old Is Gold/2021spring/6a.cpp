/*Write a function template to find the product of two numbers*/


#include <iostream>
using namespace std;
template<typename T>
void add(T a,T b)
{
    T product;
    product=a*b;
    cout<<"The product of the two numbers is:"<<product<<endl;
}
int main()
{
    int a=10,b=20;
    add<int>(a,b);
    return 0;
}