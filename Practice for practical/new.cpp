/*Write a program to define a class template Rectangle with data mambers length and breadth of 
generic type and appropriate member function to calculate area
*/
#include <iostream>
using namespace std;

template<typename T>
class Rectangle
{
    T length;
    T breadth;
    public:
        Rectangle()
        {
            length=0;
            breadth=0;
        }
        Rectangle(T l, T b)
        {
            length=l;
            breadth=b;
        }
        T area();
};
template<typename T>
T Rectangle <T>::area()
{
    return (length*breadth);
}
int main()
{
    Rectangle <int>obj1(10,20);
    cout<<"Area="<<obj1.area();
    return 0;
}