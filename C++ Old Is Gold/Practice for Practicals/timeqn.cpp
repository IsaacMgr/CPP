//write a program to define class Time with datamembers hour,minute and seconds.
//define a member function to add two times
#include <iostream>
using namespace std;
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
        void addTime(Time t2)
        {
            
            sec=sec+t2.sec;
            min=sec/60;
            sec=sec%60;
            min+=min+t2.min;
            hour=min/60;
            min=min%60;
            hour+=hour+t2.hour;
        }
};
int main()
{
    Time t1,t2;
    cout<<"Enter the first time in hour ,min and in seconds:"<<endl;
    t1.setdetails();
    cout<<"Enter the second time in hour,min,sec:"<<endl;
    t2.setdetails();
    cout<<"The first time is:";
    t1.display();
    cout<<"The second time is:";
    t2.display();
    t2.addTime(t1);
    cout<<"The added time is:";
    t2.display();
    return 0;
}