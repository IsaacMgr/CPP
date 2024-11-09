#include <iostream>
using namespace std;
class Student
{
    char name[50];
    int roll;
    public:
        void set()
        {
            cout<<"Enter the name of the student:";
            cin>>name;
            cout<<"Enter the roll no of the student:";
            cin>>roll;
        }
        void display()
        {
            cout<<"name:"<<name<<endl<<"Roll:"<<roll<<endl;
        }
        
};
int main()
{
    int size,i;
    cout<<"Enter the size:";
    cin>>size;
    Student *ptr=new Student[size];
    for(i=0;i<=size-1;i++)
    {
        cout<<"Enter the details of the student "<<i+1<<":"<<endl;
        (ptr+i)->set();
    }
    for(i=0;i<=size-1;i++)
    {
        cout<<" the details of the student are:"<<endl;
        (ptr+i)->display();
    }
    delete []ptr;
    ptr=NULL;
    return 0;
    
}