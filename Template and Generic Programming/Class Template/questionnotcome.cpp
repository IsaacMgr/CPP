/*WAP to define a class Template Box with data members length,breadth, and height of multiple generic
type and appropriate member function to calculate volume of the Box.*/
#include <iostream>
using namespace std;
template <typename T1,typename T2,typename T3>
class Box
{
    T1 length;
    T2 breadth;
    T3 height;
    public:
        Box(){};
        Box(T1 l,T2 b,T3 h);
        T1.volume();
};
template <typename T1,typename T2,typename T3>
Box<T1,T2,T3>::Box(T1 l,T2 b,T3 h)
{
    length=l;
    breadth=b;
    height=h;
}
template <typename T1>
T1 Box<T1,T2,T3>::volume()
{
    return (length*breadth*height);
}
int main()
{
    Box <int,int,int>obj1(10,20,3);
    cout<<"\nVolume="<<obj1.volume();
    return 0;
}
