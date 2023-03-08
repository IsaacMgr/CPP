//Example program to handle "division/0" exception
#include <iostream>
using namespace std;

int main()
{
    int num,denum;
    cout<<"Enter value for numerator:";
    cin>>num;
    cout<<"Enter value for denominator:";
    cin>>denum;
    try
    {
        if(denum==0)
        {
            throw"division by zero!!";
        }
        cout<<"\nDivision of "<<num<<"and"<<denum<<"="<<double(num)/denum;
    }
    catch(char a[])
    {
        cout<<"\nException caught:"<<a<<endl;
    }
    return 0;
    
    
}