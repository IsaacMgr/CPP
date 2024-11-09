#include <iostream>
using namespace std;
class Person
{
    protected:
        char name[50];
        int age;
    public:
        void setp()
        {
            cout<<"\nEnter the name:";
            cin>>name;
            cout<<"\nEnter the age:";
            cin>>age;
        }
        void displayper()
        {
            cout<<"\nName:"<<name<<"\nAge:"<<age<<endl;
        }
};
class Student:public Person
{
    protected:
        int rollno;
    public:
        void sets()
        {
            cout<<"\nEnter the roll no:";
            cin>>rollno;
        }
        void displaystud()
        {
            cout<<"\nRollno:"<<rollno<<endl;
        }


};
int main()
{
    Student s1;
    s1.setp();
    s1.sets();
    s1.displayper();
    s1.displaystud();
    return 0;
}