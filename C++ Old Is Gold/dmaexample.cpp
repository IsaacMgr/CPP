#include <iostream>
using namespace std;
class Student
{
    char name[50];
    int rollno;
    public:
        void set()
        {
            cout<<"\nEnter the name of the student:";
            cin>>name;
            cout<<"\nEnter the roll no of the student:";
            cin>>rollno;
        }
        void display()
        {
            cout<<"Name:"<<name<<endl<<"Rollno:"<<rollno<<endl;
        }

};
int main()
{
    Student *ptr=new Student;//new operator is used to request memory in the heap and returns the address of the first byte of dynamically allocated memory
    
    cout<<"Enter the information of the student:\n";
    ptr->set();
    cout<<"The details of the student are:\n";
    ptr->display();
    delete ptr;//dellocates the dynamically allocated memory
    return 0;
}

