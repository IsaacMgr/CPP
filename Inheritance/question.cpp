/* WAP to define class adademic marks and extraactivities which has datamembers for academic marks and 
extra activities.Define appropriate member functions to initialize the marks.Derive a class result
from academic marks and extra activities which calculates the total marks obtained
*/
#include <iostream>
using namespace std;
class Academicmarks
{
    protected:
        int acadmarks;
    public:
        void setacad()
        {
            cout<<"Enter the academic marks:";
            cin>>acadmarks;
        }
        void displayacad()
        {
            cout<<endl<<"The academic marks obtained is:"<<acadmarks<<endl;
        }
};
class Extraactivities
{
    protected:
        int extramarks;
    public:
        void setextra()
        {
            cout<<"Enter the marks of extraactivities:"<<endl;
            cin>>extramarks;
        }
        void displayextra()
        {
            cout<<"The extra activities marks is:"<<extramarks<<endl;
        }
};
class Result:public Academicmarks,public Extraactivities
{
    int total;
    public:
        void calculate()
        {
            total=acadmarks+extramarks;
        }
        void displaytotal()
        {
            cout<<"The total marks obtained is:"<<total<<endl;
        }
};
int main()
{
    Result r1;
    r1.setacad();
    r1.displayacad();
    r1.setextra();
    r1.displayextra();
    r1.calculate();
    r1.displaytotal();
    return 0;
}