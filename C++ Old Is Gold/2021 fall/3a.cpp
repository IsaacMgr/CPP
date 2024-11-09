//destructor program


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
        Example(int a)
        {
            id=a;
            cout<<"\nConstructor called for object with id:"<<id<<endl;
        }
        ~Example()
        {
            cout<<"\nDestructor called for object with id:"<<id<<endl;
        }
};
int main()
{
    {
        cout<<"\nBlock 1";
        Example eobj1(1),eobj2(2);
        cout<<"\nEnd of block 1";
        {
            cout<<"\nBlock 2";
            Example eobj3(3),eobj4(4);
            cout<<"\nEnd of block 2";
        }
        cout<<"\nEnd of block 1";
    }
    return 0;
}
/*output:
Block 1
Constructor called for object with id:1
Constructor called for object with id:2
End of block 1
Block 2
Constructor called for object with id:3
Constructor called for object with id:4
End of block 2
Destructor called for object with id:4
Destructor called for object with id:3
End of block 1
Destructor called for object with id:2
Destructor called for object with id:1




*/