/*Create a class mountain with data members name,height,and location.Define constructor to construct
the initial value of mountain.A friend function cmpheight to compare height of two objects and member functino
to display info of the mountain.In main creaete two objects of class mountain and display information of mountain
with gratest height.*/
#include <iostream>
#include <string.h>
using namespace std;
class Mountain;
void cmpHeight(Mountain,Mountain);
class Mountain
{
    char name[40];
    int height;
    char location[50];
    public:
        Mountain()
        {
            strcpy(name,"");
            height=0;
            strcpy(location,"");
        }
        Mountain(char Uname[],int h,char Ulocation[])
        {
            strcpy(name,Uname);
            height=h;
            strcpy(location,Ulocation);
        }
        friend void cmpHeight(Mountain,Mountain);

};
void cmpHeight(Mountain m1,Mountain m2)
{
    if(m1.height>m2.height)
    {
        cout<<"The height of first mountain is bigger";
    }
    else
    {
        cout<<"The height of " <<m2.name<<" is bigger";
    }
}
int main()
{
    Mountain m1("kumbakarn",10,"taplejung"),m2("sagarmatha",20,"namche bazer");

    cmpHeight(m1,m2);
    return 0;
    
}