#include <iostream>
using namespace std;
class Example
{
    int a,b;
    public:
        Example();
        Example(int,int);
        Example(Example &);
        void display();
};
Example::Example()
{
    cout<<"Default Constructor called"<<endl;
    a=0;
    b=0;
}
Example::Example(int x,int y)
{
    a=x;
    b=y;
}
Example::Example(Example &e)
{
    a=e.a;
    b=e.b;
};
void Example::display()
{
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;

}
int main()
{
    Example obj;
    
    obj.display();
    Example obj2(10,102);
    Example obj3(obj2);
    obj3.display();
    return 0;
}