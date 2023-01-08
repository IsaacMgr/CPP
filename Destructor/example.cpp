#include <iostream>
using namespace std;
class Example
{
    int id;
    public:
        Example()
        {

        }
        Example(int a)
        {
            id=a;
            cout<<"\nConstructor called for object with id="<<id<<endl;
        }
        ~Example()
        {
            cout<<"Destructor called for object with id="<<id<<endl;
        }

};
int main()
{
    {
    cout<<"Block 1";
    Example eobj1(1),eobj2(2);
    {
        cout<<"Block 2";
        Example eobj3(3),eobj(4);
        cout<<"\nEnd of Block 2";
    }
    Example eobj(5);
    cout<<"\nEnd of block 1";
}
return 0;
}