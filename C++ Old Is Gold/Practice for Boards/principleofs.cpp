#include <iostream>
using namespace std;
class A
{
    public:
        void message()
        {
            cout<<"\nInside base";
        }

};
class B:public A
{
    public:
        void message()
        {
            cout<<"\nInside derived";
        }
};
void functionone(A obj)
{
    obj.message();
}
void functiontwo()
{
    B objb;
    cout<<"\nCalling functionone() passing object of B instead of a";
    functionone(objb);
}
int main()
{
    functiontwo();
    return 0;
}