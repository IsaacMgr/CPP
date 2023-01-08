//define a class Employee with data members name,id,phone number and appropriate member functions to set and 
//display details of employees.Use DMA to perform above operations on n number of employees
#include <iostream>
using namespace std;
class Employee
{
    private:
        char name[50];
        int id;
        int phoneno;
    public:
        void set()
        {
            cout<<"Enter the name:";
            cin>>name;
            cout<<"Enter id";
            cin>>id;
            cout<<"Enter phoneno:";
            cin>>phoneno;
        }
        void display()
        {   
            cout<<"The details of the employee are"<<endl;
            cout<<"Name:"<<name<<endl<<"Id:"<<id<<endl<<"Phoneno:"<<phoneno<<endl;
        }
};
int main()
{
    int n,i;
    cout<<"Enter the number of employees:";
    cin>>n;
    Employee *ptr=NULL;
    ptr=new Employee[n];
    for(i=0;i<=n-1;i++)
    {
        (ptr+i)->set();
    }
    for(i=0;i<=n-1;i++)
    {
        (ptr+i)->display();
    }
    return 0;

}