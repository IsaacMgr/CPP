#include <iostream>
using namespace std;
class Time
{
    int hour,min,sec;
    public:
        void setdetails()
        {
            cout<<"Enter the time in hour:"<<endl;
            cin>>hour;
            cout<<"Enter the time in minute:"<<endl;
            cin>>min;
            cout<<"Enter the time in seconds:"<<endl;
            cin>>sec;
        }
        void displaydetails()
        {
            cout<<"Hour:"<<hour<<endl;
            cout<<"Minute:"<<min<<endl;
            cout<<"Seconds:"<<sec<<endl;
        }
        void add(Time t2)
        {
            Time result;
            result.sec=sec+t2.sec;
            result.min=result.sec/60;
            result.sec=result.sec%60;
            result.min+=min+t2.min;
            result.hour=result.min/60;
            result.min=result.min%60;
            result.hour=hour+t2.hour;
            result.displaydetails();
        }

};
int main()
{
    Time t1,t2;
    cout<<"For the first time"<<endl;
    t1.setdetails();
    cout<<"For the second time"<<endl;
    t2.setdetails();
    cout<<"The given input first time is"<<endl;
    t1.displaydetails();
    cout<<"The given input second time is"<<endl;
    t2.displaydetails();
    t1.add(t2);
    return 0;
}