//Diamond problem and need of Virtual Inheritance
//Virtual Base class
//diamond problem without using constructor

#include <iostream>
using namespace std;

class UNIVERSITY
{
    protected:
        char name[50],location[50];
    public:
        void readuniversity()
        {
            cout<<"\nEnter the name of the University:";
            cin>>name;
            cout<<"\nEnter the location:";
            cin>>location;
        }
        void displayuniversity()
        {
            cout<<"\nName:"<<name<<"\nLocation:"<<location<<endl;
        }
};
class AFFILIATED_COLLEGE:virtual public UNIVERSITY
{
    protected:
        char name[50],address[50];
    public:
        void readaffiliatedcollege()
        {
            readuniversity();
            cout<<"\nEnter the name of the affiliated college:";
            cin>>name;
            cout<<"\nEnter the address:";
            cin>>address;
        }
        void displayaffiliateccollege()
        {
            displayuniversity();
            cout<<"\nName:"<<name<<endl<<"Address:"<<address<<endl;
        }
};
class CONSTITUENT_COLLEGE:virtual public UNIVERSITY
{
    protected:
        char name[50],dean[50];
        int name_of_program;
    public:
        void readconstituentcollege()
        {
            readuniversity();
            cout<<"\nEnter the name of the constituent college:";
            cin>>name;
            cout<<"\nEnter the dean :";
            cin>>dean;
            cout<<"\nEnter the name of the program";
            cin>>name_of_program;
        }
        void displayconstituentcollege()
        {
            displayuniversity();
            cout<<"School name:"<<name<<endl<<"Dean:"<<dean<<endl<<"Name of the program:"<<name_of_program<<endl;
        }
};
class STUDENT:public AFFILIATED_COLLEGE,public CONSTITUENT_COLLEGE
{
    protected:
        char name[50],program[50];
        int enrolled_year;
    public:
        void readstudent()
        {
            readaffiliatedcollege();
            readconstituentcollege();
            cout<<"\nEnter the name of the student:";
            cin>>name;
            cout<<"\nEnter the program of the student:";
            cin>>program;
            cout<<"\nEnter the enrolled year:";
            cin>>enrolled_year;
        }
        void displaystudent()
        {
            displayaffiliateccollege();
            displayconstituentcollege();
            cout<<"\nName:"<<name<<endl<<"Program:"<<program<<"Enrolled year:"<<enrolled_year<<endl;
        }
};
int main()
{
    STUDENT sobj;
    sobj.readstudent();
    sobj.displaystudent();
    return 0;
}