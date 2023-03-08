//WAP to define a class String that has a data member to represent a character array(string).
//Overload binary plus operator to concatenate two strings using member function
//such that stringthree=stringone+stringtwo
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
        String(char str[])
        {
            strcpy(this->str,str);
        }
        void display()
        {
            cout<<"\nThe string is:"<<str<<endl;
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
    String S1("Software"),S2("Engineering"),S3;
    S1.display();
    S2.display();
    S3=S1+S2;
    S3.display();
    //equivalent S3=S1.operator +(S2);
    return 0;
    
}