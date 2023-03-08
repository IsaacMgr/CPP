//university ,affiliated college problem
//using constructor
#include <iostream>
#include <string.h>
using namespace std;

class University
{
    protected:
        char name[50];
        char location[50];
    public:
        University()
        {
            strcpy(name," ");
            strcpy(location," ");  
        }
        University(char Uname[],char Ulocation[])
        {
            strcpy(name,Uname);
            strcpy(location,Ulocation);
        }
        void displayuniversity()
        {
            cout<<"University Name:"<<name<<"University Location:"<<location<<endl;
        }
};

class Affiliated_college:virtual public University
{
    protected:
        char name[50];
        char address[50];
    public:
        Affiliated_college()
        {
            strcpy(name," ");
            strcpy(address," ");
        }
        Affiliated_college(char Uname[],char Ulocation[],char Aname[],char Aaddress[]):University(Uname,Ulocation)
        {
            strcpy(name,Aname);
            strcpy(address,Aaddress);
        }
        void displayaffiliated()
        {
            cout<<"Affiliated college name:"<<name<<endl<<"Affiliated college address:"<<address<<endl;

        }
};

class Constituent_college:virtual public University
{
    protected:
        char school[50];
        char dean[50];
        char nameof_program[50];
    public:
        Constituent_college()
        {
            strcpy(school," ");
            strcpy(dean," ");
            strcpy(nameof_program," ");

        }
        Constituent_college(char Uname[],char Ulocation[],char Cschool[],char Cdean[],char Cnameof_program[]):University(Uname,Ulocation)
        {
            strcpy(school,Cschool);
            strcpy(dean,Cdean);
            strcpy(nameof_program,Cnameof_program);
        }
        void displayconstituent()
        {
            cout<<"Constituent school:"<<school<<endl<<"Constituent college dean:"<<dean<<endl<<"Constituent college name of program:"<<nameof_program<<endl;

        }

};

class Student:public Affiliated_college,public Constituent_college
{
    protected:
        char name[50];
        char program[50];
        int enrolled_year;
    public:
        Student()
        {
            strcpy(name," ");
            strcpy(program," ");
            enrolled_year=0;
        }
        Student(char Uname[],char Ulocation[],char Aname[],char Aaddress[],char Cschool[],char Cdean[],char Cnameof_program[],char Sname[],char Sprogram[],int Senrolled_year):Affiliated_college( Uname, Ulocation, Aname, Aaddress),Constituent_college(Uname, Ulocation, Cschool, Cdean, Cnameof_program),University(Uname,Ulocation)//University pani lekhnu parchha
        {
            strcpy(name,Sname);
            strcpy(program,Sprogram);
            enrolled_year=Senrolled_year;//esma dhyan dineyy
        }
        void displaystudent()
        {
            displayuniversity();
            displayaffiliated();
            displayconstituent();
            cout<<"Student name:"<<name<<endl<<"Student Program:"<<program<<endl<<"Enrolled year:"<<enrolled_year<<endl;
        }

};

int main()
{
    Student sobj("Pokhara","Lakeside","NCIT","Balkumari","Cosmos","Bibek","engineering","rakesh","software",2021);//2021 lai " "ma halna sakne mistake hunu sakchha
    
    sobj.displaystudent();
    return 0;
}