#include <iostream>
using namespace std;

class Example
{
    int id;
    public:
    Example()
    {

    }
    Example(int id)
    {
        this->id=id;
    }
    void set()
    {
        cout<<"Enter id:";
        cin>>this->id;
    }
    void display()
    {
        cout<<endl<<"id="<<this->id;
    }
};
int main()
{
    Example eobj1;
    eobj1.set();
    eobj1.display();
    Example eobj2(10);
    eobj2.display();
    return 0;
}