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
            cout<<"Hour:"<<hour<<"\nMinute:"<<min<<"\nSecond:"<<sec<<endl;
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
    Time obj;
    int duration=3750;
    obj=duration;
    obj.display();
    return 0;
}