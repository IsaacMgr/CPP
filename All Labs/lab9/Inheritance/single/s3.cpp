/*WAP to create a class Person with attributes name and age and methods to read and 
display information.Create another class student derived from class person to use the
features of base class.Student class has additional attributes
and features appropriate to student.*/
#include <iostream>
using namespace std;
class Person
{
    private:
        char name[50];
        int age;
    public:
        void set()
        {
            cout<<"Enter the name of the person:";
            cin>>name;
            cout<<"Enter age:";
            cin>>age;
        }
        void display()
        {
            cout<<"Name:"<<name<<endl<<"Age:"<<age<<endl;
        }
};
class Student:private Person
{
    private:
        int rollno;
    public:
        void sets()
        {
            set();
            cout<<"Enter the roll no:";
            cin>>rollno;
        }
        void displays()
        {
            display();
            cout<<"Rollno:"<<rollno<<endl;
        }
};
int main()
{
    Student s1;
    s1.sets();
    s1.displays();
    return 0;
}