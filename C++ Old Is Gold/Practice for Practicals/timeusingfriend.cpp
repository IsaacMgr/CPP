//using global function as friend
#include <iostream>
using namespace std;
class Time;
Time add(Time,Time);
class Time
{
    int hour,min,sec;
    public:
        void setdetails()
        {
            cout<<"Enter the time in hour:";
            cin>>hour;
            cout<<"Enter the time in minute:";
            cin>>min;
            cout<<"Enter the time in seconds:";
            cin>>sec;
        }
        void display()
        {
            cout<<"Hour:"<<hour<<endl<<"Minute:"<<min<<endl<<"Seconds:"<<sec<<endl;
        }
        friend Time add(Time,Time);

};
Time add(Time t1,Time t2)
{
    Time result;
    result.sec=t1.sec+t2.sec;
    result.min=result.sec/60;
    result.sec=result.sec%60;
    result.min+=t1.min+t2.min;
    result.hour=result.min/60;
    result.min=result.min%60;
    result.hour=t1.hour+t2.hour;
    return result;
}
int main()
{
    Time t1,t2,t3;
    cout<<"Enter the first time in hour ,min and in seconds:"<<endl;
    t1.setdetails();
    cout<<"Enter the second time in hour,min,sec:"<<endl;
    t2.setdetails();
    t3=add(t1,t2);
    cout<<"The added time is:"<<endl;
    t3.display();
    return 0;
}