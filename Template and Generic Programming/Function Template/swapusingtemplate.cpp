/*Syntax to define generic datatype:
template<typename generic datatype_name>
Syntax to define function with generic datatype
returntype functionname(argument_lists_of typegeneric datatype)
{
    //function body with generic datatype
    //wherever appropriate
}
*/
#include <iostream>
using namespace std;
template <typename T>
void swap(T &a,T &b)
{
    T temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
    int x=10,y=20;
    swap(x, y);
    cout<<"\nThe value of a="<<a<<"b="<<b;
    double x=10.5,y=60.49;
    swap<double>(x,y);
    cout<<"\nThe value of x="<<x<<"y="<<y;

    swap<char>(r,s);
    return 0;
}