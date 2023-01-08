//DMA for array of objects
#include <iostream>
using namespace std;
class Student
{
    private:
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
            cout<<"Name:"<<name<<endl<<"Rollno:"<<roll<<endl;
        }
};
int main()
{
    int size;
    int i;
    cout<<"Enter the total number of the student:";
    cin>>size;
    Student *ptr=NULL;
    ptr=new Student[size];
    for(i=0;i<size-1;i++)
    {
        *(ptr+i)->set();
    }
    for(i=0;i<=size-1;i++)
    {
        *(ptr+i)->display();
    }
    delete ptr;
    ptr=NULL;
    return 0;

}