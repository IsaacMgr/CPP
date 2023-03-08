#include <iostream>
using namespace std;

class Time
{
    int hour,minute,second;
    public:
        Time()
        {
            hour=0;
            minute=0;
            second=0;
        }
        Time(int h,int m,int s)
        {
            hour=h;
            minute=m;
            second=s;
        }
        void display()
        {
            cout<<"\nHour="<<hour<<"\nMinute="<<minute<<"\nSecond="<<second<<endl;
        }
        Time(int duration_in_sec)
        {
            hour=duration_in_sec/3600;
            minute=(duration_in_sec%3600)/60;
            second=(duration_in_sec%3600)%60;
        }
};
int main()
{
    int duration_in_seconds;
    Time tobj;
    duration_in_seconds=3750;
    tobj=duration_in_seconds;
    tobj.display();
    return 0;
}