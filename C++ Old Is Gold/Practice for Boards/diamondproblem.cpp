//diamond problem 


#include <iostream>
#include <string.h>
using namespace std;
class UNIVERSITY
{
    protected:
        char name[50];
        char location[50];
    public:
        UNIVERSITY()
        {
            strcpy(name,"");
            strcpy(location,"");
        }
        UNIVERSITY(char Uname[],char Ulocation[])
        {
            strcpy(name,Uname);
            strcpy(location,Ulocation);
        }
        void displayuniversity()
        {
            cout<<"\nUniversity name:"<<name<<"\nUniversity location:"<<location<<endl;
        }
};
class AFFILIATED_COLLEGE:virtual public UNIVERSITY
{
    protected:
        char name[50];
        char address[50];
    public:
        AFFILIATED_COLLEGE()
        {
            strcpy(name,"");
            strcpy(address,"");
        }
        AFFILIATED_COLLEGE(char Uname[],char Ulocation[],char Aname[],char Aaddress[]):UNIVERSITY(Uname,Ulocation)
        {
            strcpy(name,Aname);
            strcpy(address,Aaddress);
        }
        void displayaffiliated()
        {
            cout<<"\nAffiliated name:"<<name<<"\nAffiliated address:"<<address<<endl;
        }
};
class CONSTITUENT_COLLEGE:virtual public UNIVERSITY
{
    protected:
        char school[50];
        char name_of_program[50];
    public:
        CONSTITUENT_COLLEGE()
        {
            strcpy(school,"");
            strcpy(name_of_program,"");

        }
        CONSTITUENT_COLLEGE(char Uname[],char Ulocation[],char Cschool[],char Cname_of_program[]):UNIVERSITY(Uname,Ulocation)
        {
            strcpy(school,Cschool);
            strcpy(name_of_program,Cname_of_program);
        }
        void displayconst()
        {
            cout<<"\nName of school:"<<school<<"\nName of program:"<<name_of_program<<endl;
        }
};
class STUDENT:public AFFILIATED_COLLEGE,public CONSTITUENT_COLLEGE
{
    protected:
        char name[50];
        char program[50];
        int enrolledyear;
    public:
        STUDENT()
        {
            strcpy(name,"");
            strcpy(program,"");
            enrolledyear=0;
        }
        STUDENT(char Uname[],char Ulocation[],char Aname[],char Aaddress[],char Cschool[],char Cname_of_program[],char Sname[],char Sprogram[],int Senrolledyear):AFFILIATED_COLLEGE(Uname,Ulocation,Aname,Aaddress),CONSTITUENT_COLLEGE(Uname,Ulocation,Cschool,Cname_of_program),UNIVERSITY(Uname,Ulocation)
        {
            strcpy(name,Sname);
            strcpy(program,Sprogram);
            enrolledyear=Senrolledyear;
        }
        void displays()
        {
            cout<<"\nName of student:"<<name<<"\nProgram :"<<program<<"\nEnrolled year:"<<enrolledyear<<endl;
        }

};
int main()
{
    STUDENT s1("Pokhara","lekhnath","ncit","balkumari","cosmos","software","Vbes","civil",2021);
    s1.displayuniversity();
    s1.displayaffiliated();
    s1.displayconst();
    s1.displays();
    return 0;
}