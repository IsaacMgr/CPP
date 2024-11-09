#include <iostream>
#include <string.h>

using namespace std;
class String
{
    char str[50];
    public:
        String()
        {
            strcpy(str,"");
        }
        String(char str[])
        {
            strcpy(this->str,str);
        }
        void display()
        {
            cout<<"\nThe string:"<<str;
        }
String operator +(String S)
{
    String temp;
    strcpy(temp.str,str);
    strcat(temp.str,S.str);
    return temp;
}
};
int main()
{
    String s1("hello"),s2("world"),s3;
    s3=s1+s2;
    s3.display();
    return 0;

}