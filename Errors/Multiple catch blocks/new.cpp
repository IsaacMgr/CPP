/*Multiple catch blocks are defined when a program segment can have multiple conditions to
 throw multiple different types of exception
 When the exception is thrown,all the catch statements are inspected in order and the first
 one whose exception type matches the thrown expection gets executed and all the other catch block
 are ignored.
*/
#include <iostream>
using namespace std;
int main()
{
    int a[10]={1,2,3,9,4,5};
    int size,denum;
    cout<<"\nEnter size:";
    cin>>size;
    try
    {
        if(size>10)
        {
            throw 1;
        }
        cout<<"\nEnter the value of the denominator:";
        cin>>denum;
        if(denum==0)
        {
            throw "division by zero!!";
        }
        for(int i=0;i<=size-1;i++)
        {
            cout<<double(a[i]/denum)<<endl;
        }
    }
    catch(int x)
    {
        cout<<"Exception caught:"<<x;
    }
    return 0;
}

//for catching all types of exception
//catch(...)
// {
    // appropriate actions to handle all the exceptions
// }
