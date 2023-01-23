//2019 spring
/*Create a class called Person with suitable data members to represtnt their name and age.Use member
functions to display this information.Derive Student and Employee from Person class with their unique
features.Initialize object of these classes using constructor and display information.*/
#include <iostream>
#include <string.h>
using namespace std;
class Person
{   protected:
        char name[20];
        int age;
    public:
        Person()
        {

        }
        Person(char uname[20],int age)
        {
            strcpy(name,uname);
            this->age=age;
            cout<<"\nInside parametarized constructor of Person";
        }
        void display()
        {
            cout<<"\nName="<<name<<endl<<"Age="<<age<<endl;
        }
};
class Student:public Person
{
    int rollno;
    public:
        Student()
        {

        }
        Student(char uname[20],int age,int rollno):Person(uname,age)
        {
            this->rollno=rollno;
            cout<<"\nInside para constructor of student"<<endl;
        }
        void displays()
        {
            display();
            cout<<"\nRollno:"<<rollno<<endl;
        }
};
class Employee:public Person
{
    int salary;
    public:
        Employee()
        {

        }
        Employee(char uname[50],int age,int salary):Person(uname,age)
        {
            this->salary=salary;
            cout<<"\nInside parametarized constructor of Employee"<<endl;
        }
        void displaye()
        {
            display();
            cout<<"\nSalary:"<<salary<<endl;
        }
};
int main()
{
    Student s1("Gaurav",19,27);
    s1.displays();
    Employee e1("Ayush",18,50000);
    e1.displaye();
    return 0;
}
