#include <iostream>
using namespace std;
class Student
{
    char name[50];
    char address[50];
    int rollno;
    public:
        void set()
        {
            cout<<"Enter the name:";
            cin>>name;
            cout<<"Enter the address:";
            cin>>address;
            cout<<"Enter the rollno";
            cin>>rollno;
        }
        void display()
        {
            cout<<"Name:"<<name<<endl<<"Address:"<<address<<endl<<"Rollno:"<<rollno<<endl;

        }

};
int main()
{
    int size,i;
    cout<<"Enter the size:";
    cin>>size;
    Student *ptr=NULL;
    ptr=new Student[size];
    for(i=0;i<=size-1;i++)
    {
        cout<<"Enter the details of the student"<<i+1<<endl;
        (ptr+i)->set();
    }
    for(i=0;i<=size-1;i++)
    {
        cout<<"The details of the student"<<"i+1"<<endl;
        (ptr+i)->display();
    }
    delete []ptr;
    ptr=NULL;
    return 0;
}