//wap to define a class template rectangle with dm l,b of generic datatype and app mf to calculate area

#include <iostream>

using namespace std;
template<typename T>
class Template

{
    int length,breadth;
    public:
        Template()
        {
            length=0;
            breadth=0;
        }
        Template(T l,T b);
        T area();

};
template<typename T>
Template<T>::Template(T l,T b)
{
    length=l;
    breadth=b;
}
template<typename T>
T Template<T>::area()
{
    return length*breadth;
}
int main()
{
    Template<int> T(5,10);
    cout<<"\nThe product of two numbers is:"<<T.area()<<endl;
    return 0;
}
