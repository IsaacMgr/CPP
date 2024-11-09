#include <iostream>
using namespace std;

//constructor with single parameter 
//overloaded assignment operator

//Time program
//Example program to convert duration in seconds integer type to userdefined type
class Time

{
    int hour,min,sec;
    public:
        Time()
        {
            hour=0;
            min=0;
            sec=0;
        }
        Time(int h,int m,int s)
        {
            hour=h;
            min=m;
            sec=s;
        }
        void display()
        {
            cout<<"\nHour:"<<hour<<endl<<"Minute:"<<min<<endl<<"Second:"<<sec<<endl;
        }
        Time(int duration)
        {
            hour=duration/3600;
            min=(duration%3600)/60;
            sec=(duration%3600)%60;
        }
    
};
int main()
{
    Time t1;
    int duration=3750;
    t1=3750;
    t1.display();
    return 0;
}