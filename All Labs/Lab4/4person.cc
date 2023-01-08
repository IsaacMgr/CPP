#include <iostream>
using namespace std;
class Person
{
    private:
    char name[50];
    int age;
    char gender[50];
    int telno;
    public:
    void setdetails();
    void displaydetails();
};
void Person::setdetails()
{
    cout<<"Enter the name:"<<endl;
    cin>>name;
    cout<<"Enter the age:"<<endl;
    cin>>age;
    cout<<"Enter the gender:"<<endl;
    cin>>gender;
    cout<<"Enter the telephone number:"<<endl;
    cin>>telno;
}
void Person::displaydetails()
{
    cout<<"The details of the person are:"<<endl;
    cout<<"Name:"<<name<<endl;
    cout<<"Age:"<<age<<endl;
    cout<<"Gender:"<<gender<<endl;
    cout<<"Telephone number:"<<telno<<endl;
}
int main()
{
    Person P[50];
    int size,i;
    cout<<"Enter the total number of person:"<<endl;
    cin>>size;
    for(i=0;i<=size-1;i++)
    {
        P[i].setdetails();
        P[i].displaydetails();
    }
    return 0;
}