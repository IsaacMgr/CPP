//example program
//write a program with reference to the given diagram

#include <iostream>
using namespace std;
class Person
{
    protected:
        char  name[50];
        int age;
    public:
        void setperson()
        {
            cout<<"\nEnter the name of the person:";
            cin>>name;
            cout<<"\nEnter the age of the person:";
            cin>>age;
        }
        void displayperson()
        {
            cout<<"\nName:"<<name<<endl<<"\nAge:"<<age<<endl;
        }
};

class Student:public Person
{
    protected:
        int rollno;
    public:
        void setstudent()
        {
            setperson();
            cout<<"\nEnter the rollno of the student:";
            cin>>rollno;
        }
        void displaystudent()
        {   
            displayperson();
            cout<<"\nRollno:"<<rollno;
        }
};
class Employee:public Person
{
    protected:
        char destination[50];
        int id;
        int salary;
    public:
        void setemployee()
        {
            setperson();
            cout<<"\nEnter the destination:";
            cin>>destination;
            cout<<"\nEnter the id:"<<endl;
            cin>>id;
            cout<<"\nEnter the salary:"<<endl;
            cin>>salary;
        }
        void displayemployee()
        {
            displayperson();
            cout<<"\nDestination:"<<destination<<endl<<"Id:"<<id<<endl<<"Salary:"<<salary<<endl;
        }
};
class Examination:public Student
{
    protected:
        int practicalmarks;
        int theorymarks;
    public:
        void setexam()
        {
            cout<<"\nEnter the practical marks:";
            cin>>practicalmarks;
            cout<<"\nEnter the theory marks:";
            cin>>theorymarks;
        }
        void displayexam()
        {
            cout<<"\nPracticalmarks:"<<practicalmarks<<endl<<"Theorymarks:"<<theorymarks<<endl;
        }
};
class Result:public Examination
{
    int totalmarks;
    public: 
        void calculateresult()
        {
            setstudent();
            setexam();
            totalmarks=practicalmarks+theorymarks;
        }
        void displayresult()
        {
            displaystudent();
            displayexam();
            cout<<"\nThe total marks is:"<<totalmarks;
        }
};
int main ()
{
    Employee e1;
    e1.setemployee();
    e1.displayemployee();
    Result r1;
    r1.calculateresult();
    r1.displayresult();
    return 0;
}

