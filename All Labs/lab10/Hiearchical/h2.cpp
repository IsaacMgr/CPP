/*Create a class called Student with two date members to represent name and afe of the student.Use member function to read
and print these data.From these class derive a class called Boarder with data member to represent room 
number.Derive another class called Dayscholar from class Student datamembers to represent address and busno of the student.In
both derived classes,use member function to read and print the respective data.*/

#include <iostream>
using namespace std;
class Student
{
    protected:
        char name[50];
        int age;
    public:
        void set()
        {
            cout<<"\nEnter the name of the student:";
            cin>>name;
            cout<<"\nEnter the age of the student:";
            cin>>age;
        }
        void display()
        {
            cout<<"\nName="<<name<<endl<<"Age="<<age<<endl;
        }

};
class Border:public Student
{
    int roomno;
    public:
        void setb()
        {
            cout<<"\nEnter the room number:";
            cin>>roomno;
        }
        void displayb()
        {
            cout<<"\nRoomno="<<roomno;
        }
};
class Dayscholar:public Student
{
    char address[50];
    int busno;
    public:
        void setd()
        {
            cout<<"\nEnter the address:";
            cin>>address;
            cout<<"\nEnter the busno:";
            cin>>busno;
        }
        void displayd()
        {
            cout<<"\nAddress:"<<address<<"\nBusno:"<<busno;
        }
};
int main()
{
    Border B;
    B.set();
    B.setb();
    B.display();
    B.displayb();
    Dayscholar C;
    C.set();
    C.setd();
    C.display();
    C.displayd();
    return 0;
}
