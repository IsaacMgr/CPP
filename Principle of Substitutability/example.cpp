/*----*/
#include <iostream>
using namespace std;

class A
{
    public:
        void message()
        {
            cout<<"\nI am in A";
        }
};
class B:public A
{
    public:
        void message()
        {
            cout<<"\nI am in B";
        }
};
void functionone(A a)
{
    a.message();

}
void functiontwo()
{
    B objB;
    cout<<"\nCalling functionOne()passing object of B instead of A"<<endl;
    functionone(objB);
}
int main()
{
    functiontwo();
    return 0;
}