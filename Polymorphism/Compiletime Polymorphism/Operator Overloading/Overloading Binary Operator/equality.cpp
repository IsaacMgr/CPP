//WAP to defrine a class string with an attribute to repersent a character array (string).
//OVerload equality operator to compare two strings to check if they same or not.


#include <iostream>
#include <string.h>
using namespace std;

class String
{
    char str[50];
    public:
        void setstring()
        {
            cout<<"\nEnter the string:";
            cin>>str;
        }
        void displaystring()
        {
            cout<<"\nString is:"<<str;
        }
        int operator==(String s)
        {
            if(strcmp(str,s.str)==0)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }

};
int main()
{
    String s1,s2;
    s1.setstring();
    s2.setstring();
    if(s1==s2)
    {
        cout<<"\nThey are identical"<<endl;
    }
    else
    {
        cout<<"They are not identical"<<endl;
    }
    return 0;
}
