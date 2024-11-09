#include <iostream>
using namespace std;
class A
{
    public:
        void message()
        {
            cout<<"I am in A";
        }
};
class B:public A
{
    public:
        void message()
        {
            cout<<"I am in B";
        }
};
void functionone(A a)
{
    a.message();
}
void functiontwo()
{
    B obj;
    cout<<"\nCalling functionone() passing object of function B instead of A"<<endl;
    functionone(obj);
}
int main()
{
    functiontwo();
    return 0;
}
