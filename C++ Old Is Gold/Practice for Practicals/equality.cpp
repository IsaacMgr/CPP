/*wap to define a class string with an attribute to represent a character array.Overload equality 
operator to compare two string to check if they are same or not*/
#include <iostream>
#include <string.h>
using namespace std;
class String
{
    char str[50];
    public:
        void setstring()
        {
            cout<<"Enter the value of the string:";
            cin>>str;
        }
        int operator ==(String S)
        {
            if(strcmp(str,S.str)==0)
            {
                cout<<"They are identical";

            }
            else
            {
                cout<<"They are not identical";
            }
        }
};
int main()
{
    String s1,s2;
    s1.setstring();
    s2.setstring();
    s1==s2;
    return 0;

}