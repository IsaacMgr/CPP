#include <iostream>
using namespace std;
class Time
{
    int hour,min,sec;
    public:
    void settime();
    void displaytime();
    void add(Time);
};
void Time::settime()
{
    cout<<"hour:";
    cin>>hour;
    cout<<"Minute:";
    cin>>min;
    cout<<"Second:";
    cin>>sec;
}
void Time::displaytime()
{
    cout<<"Hour:"<<hour;
    cout<<"min:"<<min;
    cout<<"sec:"<<sec;
}
void Time::add(Time t2)
{
    sec=t2.sec+t2.sec;
    min=sec/60;
    sec=sec%60;
    min+=t2.min+t2.min;
    hour=min/60;
    min=min%60;
    hour+=t2.hour+t2.hour;
}
int main()
{
    Time t1,t2;
    cout<<"Enter the first time:"<<endl;
    t1.settime();
    cout<<"Enter the second time:"<<endl;
    t2.settime();
    cout<<"The first time is:"<<endl;
    t1.displaytime();
    cout<<"The second time is:"<<endl;
    t2.displaytime();
    t2.add(t1);
    cout<<"The resultant added time is:";
    t2.displaytime();
    return 0;
}