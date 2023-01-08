#include <iostream>
using namespace std;
class Time1;
class Time2;
void add(Time1,Time2);
class Time1
{
    int hour,min,sec;
    public:
    void setdetails()
    {
        cout<<"Enter the hour:";
        cin>>hour;
        cout<<"Enter the minute:";
        cin>>min;
        cout<<"Enter the second:";
        cin>>sec;
    }
    void displaydetails()
    {
        cout<<"Hour:"<<hour;
        cout<<"Minute:"<<min;
        cout<<"Second:"<<sec;
    }
    friend void add(Time1,Time2);
};
class Time2
{
    int hour,min,sec;
    public:
    void setdetails()
    {
        cout<<"Enter the hour:";
        cin>>hour;
        cout<<"Enter the minute:";
        cin>>min;
        cout<<"Enter the second:";
        cin>>sec;
    }
    void displaydetails()
    {
        cout<<"Hour:"<<hour;
        cout<<"Minute:"<<min;
        cout<<"Second:"<<sec;
    }
    friend void add(Time1,Time2);

};
void add(Time1 t1,Time2 t2)
{
    Time1 result;
    result.sec=t1.sec+t2.sec;
    result.min=result.sec/60;
    result.sec=result.sec%60;
    result.min+=t1.min+t2.min;
    result.hour=result.min/60;
    result.min=result.min%60;
    result.hour+=t1.hour+t2.hour;
    result.displaydetails();
}
int main()
{
    Time1 t1;
    Time2 t2;
    cout<<"Give input for the first time"<<endl;
    t1.setdetails();
    cout<<"Give input for the second time"<<endl;
    t2.setdetails();
    cout<<"The given input for the first time are"<<endl;
    t1.displaydetails();
    cout<<"The given input for the second time are"<<endl;
    t2.displaydetails();
    add(t1,t2);
    return 0;
}