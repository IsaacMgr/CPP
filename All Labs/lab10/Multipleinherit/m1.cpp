/*Write a program to define class Academic marks and Extraactivities marks which has datamembers for
academic marks and extraactivities marks.Define a appropriate member functions to initialize the marks.Derive
a class result from academic marks and extraactivities which calculates the total marks obtained.*/


#include <iostream>
using namespace std;
class Academicmarks
{
    protected:
        int acmarks;
    public:
        void setac()
        {
            cout<<"\nEnter the academic marks:";
            cin>>acmarks;
        }
        void displayac()
        {
            cout<<"\nAcademic marks:"<<acmarks;
        }
};
class Extramarks
{
    protected:
        int exmarks;
    public:
        void setex()
        {
            cout<<"\nEnter the extramarks:";
            cin>>exmarks;
        }
        void displayex()
        {
            cout<<"\nAcademic marks:"<<exmarks;
        }
};
class Result:public Academicmarks,public Extramarks
{
    int total;
    public:
        void calculate()
        {
            setac();
            setex();
            total=exmarks+acmarks;
        }
        void displayr()
        {
            displayac();
            displayex();
            cout<<"\nThe total marks of the student is:"<<total;
        }
};
int main()
{
    Result r1;
    r1.calculate();
    r1.displayr();
    return 0;
}