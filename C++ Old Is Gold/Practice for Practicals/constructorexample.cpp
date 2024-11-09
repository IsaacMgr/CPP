#include <iostream>
using namespace std;
class Example
{
    int a,b;
    Example()
    {
        cout<<"Default constructor"<<endl;
        a=0;
        b=0;
    }
    Example(int x,int y)
    {
        cout<<"parametarized constructor"<<endl;
        a=x;
        b=y;
    }
    Example(Example &e)
    {
        a=e.a;
        b=e.b;
    }
    

};
