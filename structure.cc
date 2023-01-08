//write a program using structure to create a database for a hospital giving details about the patient admitted


#include <iostream>
using namespace std;
struct Date
{
    int year,month,day;
};
struct Hospital
{
    private:
        char patientname[50];
        int age;
        int bedno;
        char natureofillness[50];
        struct Date DOB;
        char gender[50];
        int wardno;
        struct Date DOA; 
    public:
        void setdetails()
        {
            cout<<"Enter the name of the patient:";
            cin>>patientname;
            cout<<endl<<"Enter the age of the patient:";
            cin>>age;
            cout<<endl<<"Enter the bedno of the patient:";
            cin>>bedno;
            cout<<endl<<"For the date of birth:";
            cout<<"Enter year:";
            cin>>DOB.year;
            cout<<endl<<"Enter month:";
            cin>>DOB.month;
            cout<<"Enter day:";
            cin>>DOB.day;
            cout<<endl<<"Enter the gender of the patient:";
            cin>>gender;
            cout<<endl<<"Enter the ward no of the patient:";
            cin>>wardno;
            cout<<endl<<"Enter the date of admission:";
            cout<<endl<<"Enter year:";
            cin>>DOA.year;
            cout<<endl<<"Enter month:";
            cin>>DOA.month;
            cout<<endl<<"Enter the day:";
            cin>>DOA.day;
        } 
        void displaydetails()
        {
            cout<<"The details of the student are:"<<endl;
            cout<<"Name:"<<patientname<<endl;
            cout<<"age:"<<age<<endl;
            cout<<"bedno:"<<bedno<<endl;
            cout<<"Birth year:"<<DOB.year<<endl;
            cout<<"Birth month:"<<DOB.month<<endl;
            cout<<"Birth day:"<<DOB.day<<endl;
            cout<<"Gender:"<<gender<<endl;
            cout<<"Wardno:"<<wardno<<endl;
            cout<<"year of admission:"<<DOA.year<<endl;
            cout<<"month of admission:"<<DOA.month<<endl;
            cout<<"Date of admission:"<<DOA.day<<endl;
        }
};
int main()
{
    struct Hospital H;
    int i,size;
    cout<<"Enter the no of patients:";
    cin>>size;
    for(i=0;i<=size-1;i++)
    {
        H.setdetails();
        H.displaydetails();
    }
    return 0;
}

