//conversion from basic type to class type 
//conversion of given seconds to time in (hour,min,seconds)


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
            cout<<"Hour:"<<hour<<endl<<"minute:"<<min<<endl<<"seconds:"<<sec<<endl;
        }
        Time(int duration_in_sec)
        {
            hour=duration_in_sec/3600;
            min=(duration_in_sec%3600)/60;
            sec=(duration_in_sec%3600)%60;
        }
};
int main()
{
    int duration_in_sec;
    duration_in_sec=86540;
    Time t1;

    t1=duration_in_sec;
    t1.display();
    return 0;
}
