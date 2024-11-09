#include <iostream>
using namespace std;

template <typename T1,typename T2,typename T3>
class Box
{
    T1 length;
    T2 breadth;
    T3 height;
    public:
        Box()
        {
            length=0;
            breadth=0;
            height=0;
        }
        Box(T1 l,T2 b,T3 h);
        T1 volume();
};
template<typename T1,typename T2,typename T3>
Box<T1,T2,T3>::Box(T1 l,T2 b,T3 h)
{
    length=l;
    breadth=b;
    height=h;
}
template<typename T1,typename T2,typename T3>
T1 Box<T1,T2,T3>::volume()
{
    return (length*breadth*height);
}
int main()
{
    Box <int,float,int> bobj(10,5.5,2);
    cout<<"\nThe volume is:"<<bobj.volume()<<endl;
    return 0;
}