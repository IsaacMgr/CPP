#include <iostream>
using namespace std;
class A
{
    public:
        void message()
        {
            cout<<"I am in A\n";

        }
};
class B:public A
{
    public:
        void message()
        {
            cout<<"I am in B\n";
        }

};
void functionone(A a)
{
    a.message();
}
void functiontwo()
{
    B objb;
    functionone(objb);
}
int main()
{
    functiontwo();
    return 0;
}