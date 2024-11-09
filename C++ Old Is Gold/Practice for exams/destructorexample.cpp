#include <iostream>
using namespace std;

class Example
{
    int id;
    public:
        Example()
        {
            id=0;

        }
        Example(int x)
        {
            id=x;
            cout<<"Parametarized constructor is called for object with id:"<<id<<endl;

        }
        ~Example()
        {
            cout<<"Destructor called for object with id:"<<id<<endl;
        }

};
int main()
{
    {
    cout<<"Block 1"<<endl;
    Example e1(1),e2(2);
    {
    cout<<"Block 2"<<endl;
    Example e3(3),e4(4);
    cout<<"End of block 2"<<endl;
    }
    Example e5(5);
    }
    return 0;

}
// output:
// Block 1
// Parametarized constructor called for object with id:1
// Parametarized constructor called for object with id:2
// Block 2
// Parametarized constructor called for object with id:3
// Parametarized constructor called for object with id:4
// End of block 2
// Destructor called for object with id:4
// Destructor called for object with id:3
// parametarized constructor called for object with id:5
// Destructor called for object with id:2
// Destructor called for object with id:1



