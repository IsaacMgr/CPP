#include <iostream>
using namespace std;
class Example
{
    int a;
    public:
        void example()
        {
            cout<<"Inside base class"<<endl;
        }
};
class Example1:public Example
{
    public:
        void example()
        {
            cout<<"Inside derived class"<<endl;
        }
};
int main()
{
    Example1 eobj;
    eobj.Example::example();
    eobj.example();
    return 0;
    
}