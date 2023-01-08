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
                cout<<"Name:"<<name<<endl<<"Roll no:"<<roll<<endl;
            }


};
int main()
{
    Student *ptr=new Student;
    cout<<"Enter information of the student"<<endl;
    ptr->set();
    cout<<"The details of the student are:";
    ptr->display();
    delete ptr;
    ptr=NULL;
    return 0;
}
