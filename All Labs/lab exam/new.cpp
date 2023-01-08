//Nesting of member function
/*member function can be called inside the another member function definition which is called nensting of member function*/

#include<iostream>
using namespace std;

class Student 
{
    private:
      char name[10];
      int rollno;
    public:
      void setdetails();
      void display();

};
int main()
{
    Student s1;
    s1.setdetails();
    return 0;
}
void Student::setdetails()
      {
        cout<<"enter the name:"<<endl;
        cin>>name;
        cout<<"enter the rollno:"<<endl;
        cin>>rollno;
        display();
      }
      void Student::display()
      {
          cout<<"name ="<<name<<endl<<"rollno ="<<rollno<<endl;
      }