#include <iostream>
using namespace std;
class Time;
void add(Time,Time);//Time add(Time,Time);
class Time
{
    int hour,min,sec;
    public:
    void setdetails()
    {
        cout<<"Enter hour:";
        cin>>hour;
        cout<<"Enter minute:";
        cin>>min;
        cout<<"Enter seconds:";
        cin>>sec;
    }
    void displaydetails()
    {
        cout<<"Hour:"<<hour<<endl;
        cout<<"Minute:"<<min<<endl;
        cout<<"Seconds:"<<sec<<endl;
    }
    friend void add(Time,Time);//friend Time add(Time,Time);
};
void add (Time t1,Time t2)//Time add(Time t1,Time t2)
{
    //Time result;
    int hour,min,sec;//no need
    sec=t1.sec+t2.sec;//result.sec=t1.sec+t2.sec
    min=sec/60;//result.min=result.sec/60;
    sec=sec%60;//result.sec=result.sec%60;
    //and so on
    min+=t1.min+t2.min;
    hour=min/60;
    min=min%60;
    hour+=t1.hour+t2.hour;
    cout<<"The added time is"<<endl;
    cout<<"hour:"<<hour<<endl;
    cout<<"min:"<<min<<endl;
    cout<<"sec:"<<sec<<endl;
}
int main()
{
    Time t1,t2;//t3
    cout<<"Enter the first time"<<endl;
    t1.setdetails();
    cout<<"Enter the details of the second time"<<endl;
    t2.setdetails();
    add(t1,t2);//t3=add(t1,t2);
    //t3.displaydetails();
    return 0;
}
