//using global function Time
#include <iostream>
using namespace std;
class Time
{
    int hour,min,sec;
    public:
        void set()
        {
            cout<<"\nEnter hour:";
            cin>>hour;
            cout<<"\nEnter minute:";
            cin>>min;
            cout<<"\nEnter second:";
            cin>>sec;
        }
        void display()
        {
            cout<<"\nHour="<<hour<<"\nMinute="<<min<<"\nSecond="<<sec<<endl;
        }
        void add(Time t1,Time t2)
        {
                sec=t1.sec+t2.sec;
                min=sec/60;
                sec=sec%60;
                min+=t1.min+t2.min;
                hour=min/60;
                min=min%60;
                hour+=t1.hour+t2.hour;
        }
};

int main()
{
    Time t1,t2,t3;
    t1.set();
    t2.set();
    t1.display();
    t2.display();
    t3.add(t1,t2);
    t3.display();
    return 0;
}