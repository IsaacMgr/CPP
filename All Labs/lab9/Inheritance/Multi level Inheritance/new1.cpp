//multi level inheritance with public mode
/*Define a class student which has  name and rollno and member functions to input and display student details.Derive a class
Examination from class student which has marks of 6 subjects and member functions to initialize and display marks.Derive a class
result from class examination that has member functions to calculate total marks and display the result.*/
#include <iostream>
using namespace std;
class Student
{
    protected:
        char name[50];
        int rollno;
    public:
        void set()
        {
            cout<<"Enter the name of the student:";
            cin>>name;
            cout<<"Enter rollno:";
            cin>>rollno;
        }
        void display()
        {
            cout<<"Name:"<<name<<endl<<"Rollno:"<<rollno<<endl;

        }

};
class Examination:private Student
{
    private:
        int m1;
        int m2;
        int m3;
        
        int i;
    public:
        void setm()
        {
            set();
            cout<<"Enter the marks of first subject:";
            cin>>m1;
            cout<<"Enter the marks of second subject:";
            cin>>m2;
            cout<<"Enter the marks of third subject:";
            cin>>m3;
        }
        void displaym()
        {
            display();
            cout<<"The marks of 3 subjects are\n";
            cout<<"subject1:"<<m1<<endl<<"Subject 2:"<<m2<<endl<<"Subject 3:"<<m3<<endl;
        }
        
        int getm1()
        {
            return m1;
        }
        int getm2()
        {
            return m2;
        }
        int getm3()
        {
            return m3;
        }
};
class Result:public Examination
{
    int totalmarks;
    int i;
    public:
        void calculate()
        {
            totalmarks=getm1()+getm2()+getm3();
            
        }
        void displayr()
        {
            cout<<"The total marks of the student is:"<<totalmarks<<endl;
        }
};
int main()
{
    Result r1;
    r1.setm();
    r1.displaym();
    r1.calculate();
    r1.displayr();
    return 0;
}



