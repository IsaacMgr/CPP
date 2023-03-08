/*Write a program to define a class template Rectangle with data mambers length and breadth of 
generic type and appropriate member function to calculate area
*/
#include <iostream>
using namespace std;

template <typename T>
class Rectangle
{
    T length;
    T breadth;
    public:
        Rectangle()
        {

        }
        Rectangle(T l,T b);
        
        T area();
};
template <typename T>
Rectangle <T>::Rectangle(T l,T b)
{
    length=l;
    breadth=b;
}
template<typename T>
T Rectangle <T>::area()
{
    return (length*breadth);
}
int main()
{
    Rectangle <int>obj1(10,20);
    cout<<"\nArea="<<obj1.area();
    Rectangle<double>obj2(9.6,7.9);
    cout<<"\nArea="<<obj2.area();
    cout<<"\nSize of obj1="<<sizeof(obj1);
    cout<<"\nSize of obj2="<<sizeof(obj2);
    return 0;

}
