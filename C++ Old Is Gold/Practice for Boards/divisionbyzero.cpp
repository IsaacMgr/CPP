//Example program to handle "division/0 exception"
#include <iostream>
using namespace std;

int main()
{
    int num,denum;
    cout<<"\nEnter the value of the numerator:";
    cin>>num;
    cout<<"\nEnter the value of the denominator:";
    cin>>denum;
    try
    {
        if(denum==0)
        {
            throw "division by zero";
        }
        cout<<"\nThe result after divison is:"<<double(num)/denum<<endl;
    }
    catch(char a[])
    {
        cout<<"\nException caught due to "<<a<<endl;
    }
    return 0;
}