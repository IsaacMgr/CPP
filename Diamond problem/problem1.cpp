//diamond problem using constructor
#include <iostream>
#include <string.h>
using namespace std;
class UNIVERSITY
{
    protected:
        char name[50],location[50];
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
        void displayUniversity()
        {
            cout<<"Name:"<<name<<endl<<"Location:"<<location<<endl;
        }
};
class AFFILIATED_COLLEGE:virtual public UNIVERSITY
{
    protected:
        char name[50],address[50];
        int no_of_programs;
    public:
        AFFILIATED_COLLEGE()
        {

        }
        AFFILIATED_COLLEGE(char Uname[],char Ulocation[],char Aname[],char Aaddress[],int Ano_of_programs):UNIVERSITY(Uname,Ulocation)
        {
            strcpy(name,Aname);
            strcpy(address,Aaddress);
            no_of_programs=Ano_of_programs;
        }
        void displayAcollege(){
            cout<<"Affiliated College:"<<name<<endl<<"Affiliated College address:"<<address<<endl;
        }
};
class CONSTITUENT_COLLEGE:virtual public UNIVERSITY
{
    protected:
        char school[50],dean[50],name_of_program[50];
    public:
        CONSTITUENT_COLLEGE()
        {

        }
        CONSTITUENT_COLLEGE(char Uname[],char Ulocation[],char Cschool[],char Cdean[],char Cname__of_program[]):UNIVERSITY(Uname,Ulocation)
        {
            strcpy(school,Cschool);
            strcpy(dean,Cdean);
            strcpy(name_of_program,Cname__of_program);
        }
        void displayCcollege()
        {
            cout<<"Constituent college:"<<school<<endl<<"Dean of college:"<<dean<<endl<<"Name of the program:"<<name_of_program<<endl;
        }
};
class STUDENT:public AFFILIATED_COLLEGE,public CONSTITUENT_COLLEGE
{
        char name[50],program[50];
        int enrolled_year;
    public:
        STUDENT()
        {

        }
        STUDENT(char Uname[],char Ulocation[],char Aname[],char Aaddress[],int Ano_of_programs,char Cschool[],char Cdean[],char Cname_of_program[],char Sname[],char Sprogram[], int enrolled_year):AFFILIATED_COLLEGE(Uname,Ulocation,Aname,Aaddress,Ano_of_programs),CONSTITUENT_COLLEGE(Uname,Ulocation,Cschool,Cdean,Cname_of_program)
        {
            strcpy(name,Sname);
            strcpy(program,Sprogram);
            this->enrolled_year=enrolled_year;
        }
        void displayStudent()
        {
            cout<<"Name of the student:"<<name<<endl<<"Program of the student:"<<program<<endl<<"Enrolled year:"<<enrolled_year<<endl;

        }
};
int main()
{
    STUDENT s1("Pokhara University","Lekhnath","Ncit","Balkumari","5","Engineering","Dean","Science and Technology","Gaurav","BESE",2021);
    s1.displayUniversity();
    s1.displayAcollege();
    s1.displayCcollege();
    s1.displayStudent();
    return 0;

}


