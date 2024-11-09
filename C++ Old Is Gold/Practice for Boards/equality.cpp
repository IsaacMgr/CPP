//==
#include <iostream>
using namespace std;
#include <string.h>

class String
{
    char str[50];
    public:
        void setstring()

        {
            cout<<"\nEnter the string:";
            cin>>str;
        }
        void displaystr()
        {
            cout<<"\nString is:"<<str<<endl;
        }
        void operator ==(String S)
        {
            if(strcmp(str,S.str)==0)
            {
                cout<<"\nBoth are identical";
            }
            else
            {
                cout<<"\nThey are not identical";
            }
        }
};
int main()
{
    String S1,S2;
    S1.setstring();
    S2.setstring();
    S1.displaystr();
    S2.displaystr();
    S1==S2;
    return 0;
}