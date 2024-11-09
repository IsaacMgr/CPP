//Example program to handle division/0 exception
#include <iostream>
using namespace std;
int main()
{
    int num,denum;
    cout<<"\nEnter the value for the numerator:";
    cin>>num;
    cout<<"\nEnter the value for the denominator:";
    cin>>denum;
    try
    {
        if(denum==0)
        {
            throw "division by zero";

        }
        cout<<"\nDivision of "<<num<<"and "<<denum<<"is "<<double(num)/denum<<endl;
    }
    catch(char a[])
    {
        cout<<"\nException caught :"<<a<<endl;
    }
    return 0;
}