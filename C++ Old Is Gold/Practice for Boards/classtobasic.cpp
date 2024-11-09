//class to basic time program
//example program to convert time (hour,min,sec) to integer type duration in seconds
#include <iostream>
using namespace std;
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
            cout<<"\nHour:"<<hour<<"\nMinute:"<<min<<"\nSeconds:"<<sec<<endl;
        }
        operator int()
        {
            int duration;
            duration=hour*3600+min*60+sec;
            return duration;
        }
};
int main()
{
    Time t1(1,2,30);
    int duration;
    duration=t1;
    t1.display();
    cout<<"\nThe value of time in seconds after using casting operator function is:"<<duration<<endl;
}