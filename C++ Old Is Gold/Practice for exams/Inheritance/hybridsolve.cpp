#include <iostream>
using namespace std;

class Person
{
    protected:
        char name[50];
        int age;
    public:
        void setperson()
        {
            cout<<"Enter the name:";
            cin>>name;
            cout<<"Enter the age:";
            cin>>age;
        }
        void displayperson()
        {
            cout<<"Name:"<<name<<endl<<"Age:"<<age<<endl;
        }
};
class Student:public Person
{
    protected:
        int roll;
    public:
        void setstudent()
        {
            cout<<"Enter the roll no of the student:";\
            cin>>roll;
        }
        void displaystudent()
        {
            cout<<"Rollno:"<<roll;
        }
};
class Employee:public Person
{
    protected:
        char designation[50];
        int id;
        int salary;
    public:
        void setemployee()
        {
            cout<<"Enter the designation:";
            cin>>designation;
            cout<<"Enter the id:";
            cin>>id;
            cout<<"ENter the salary:";
            cin>>salary;
        }
        void displayemployee()
        {
            cout<<"Designation:"<<designation<<endl<<"Id:"<<id<<endl<<"Salary:"<<salary<<endl;

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
            cout<<"Enter the practical marks:";
            cin>>practicalmarks;
            cout<<"Enter the theory marks:";
            cin>>theorymarks;
        }
        void displayexam()
        {
            cout<<"Practical marks:"<<practicalmarks<<endl<<"Theorymarks:"<<theorymarks<<endl;

        }
};
class Result:public Examination
{
    protected:
        int totalmarks;
    public:
        void calculateresult()
        {
            totalmarks=practicalmarks+theorymarks;

        }
        void displayresult()
        {
            cout<<"The totalmarks of the student is:"<<totalmarks<<endl;
        }
};
int main()
{
    Result r1;
    r1.setperson();
    r1.setstudent();
    r1.displayperson();
    r1.displaystudent();
    r1.setexam();
    r1.displayexam();
    r1.calculateresult();
    r1.displayresult();
    Employee e1;
    e1.setperson();
    e1.setemployee();
    e1.displayperson();
    e1.displayemployee();
    return 0;
}