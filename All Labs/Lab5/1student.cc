//WAP to define a class student with appropriate date members. Define a method to fill exam form.
//Count the no of students who have filled the examination form and display that count using static 
//member function
#include <iostream>
using namespace std;
class Student
{
    char name[50];
    int rollno;
    static int count;
    public:
    void fillform();
    void countstudent();
    static void displaycount();

    
};
void Student::fillform()
{
    cout<<"Enter the name of the student:"<<endl;
    cin>>name;
    cout<<"Enter the roll no of the student:"<<endl;
    cin>>rollno;
}
void Student::countstudent()
{
    ++count; 
}
void Student::displaycount()
{
    cout<<"Count="<<count<<endl;
}

int Student::count;
int main()
{
    Student s[50];
    int i,size;
    cout<<"Enter the total number of the student:"<<endl;
    cin>>size;
    for(i=0;i<=size-1;i++)
    {
        s[i].fillform();
        s[i].countstudent();
    }
    Student::displaycount();
    return 0;
}