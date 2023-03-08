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
        operator int()
        {
            int duration;
            duration=hour*3600+minute*60+second;
            return duration;
        }
};
int main()
{
    int totalduration;
    Time tobj(1,2,30);
    totalduration=tobj;
    tobj.display();
    cout<<"\nEquivalent duration in seconds is:"<<totalduration<<endl;
    return 0;
}