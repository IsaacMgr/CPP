#include <iostream>
#include <string.h>
using namespace std;

class String
{
    char str[50];
    public:
        String()
        {
            strcpy(str," ");
        }
        String(char string[])
        {
            strcpy(str,string);
        }
        void display()
        {
            cout<<"The string is:"<<str<<endl;
        }
        friend int operator==(String,String);
        // {
        //     if(strcmp(str,S.str)==0)
        //     {
        //         cout<<"They are identical";
        //     }
        //     else 
        //     {
        //         cout<<"They are not identical";
        //     }
        // }
};
int operator==(String S1,String S2)
{
    {
            if(strcmp(S1.str,S2.str)==0)
            {
                cout<<"They are identical";
            }
            else 
            {
                cout<<"They are not identical";
            }
        }
}
int main()
{
    String S1("Gaurav"),S2("Gaurav");
    S1==S2;
    return 0;
}