#include <iostream>
using namespace std;
class Student
{
    private:
        char name[50];
        char address[50];
        int rollno;
        int regno;
    public:
        void setdetails();
        void displaydetails();;

};
void Student :: setdetails()
{
    cout<<"Enter the name of the student:";
    cin>>name;
    cout<<"Enter the address of the student:";
    cin>>address;
    cout<<"Enter the roll no of the student:";
    cin>>rollno;
    cout<<"Enter the registration number of the student:";
    cin>>regno;

}
void Student :: displaydetails()
{
    cout<<"The details of the student are:";
    cout<<"The name of the student is:"<<name<<endl;
    cout<<"The address of the student is:"<<address<<endl;
    cout<<"The rollno of the student is:"<<rollno<<endl;
    cout<<"The regno of the student is:"<<regno<<endl;
}

int main()
{
    Student S[50];
    int size,i;
    cout<<"Enter the total number of the student:";
    cin>>size;
    for(i=0;i<=size-1;i++)
    {
        S[i].setdetails();
        S[i].displaydetails();
    }
    return 0;
}
