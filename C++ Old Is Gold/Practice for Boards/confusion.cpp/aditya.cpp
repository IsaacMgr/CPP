#include <iostream>
using namespace std;

class Time
{
    protected:
        int hour1,minute1,second1;
    public:
        Time()
        {
            hour1=0;
            minute1=0;
            second1=0;
        }
        void settime()
        {
            cout<<"\nEnter the hour:";
            cin>>hour1;
            cout<<"\nEnter minute:";
            cin>>minute1;
            cout<<"\nEnter seconds:";
            cin>>second1;
        }
        int gethour()
        {
            return hour1;
        }
        int getminute()
        {
            return minute1;
        }
        int getsecond()
        {
            return second1;
        }
};
class childtime:public Time
{
    int hour2,minute2,second2;
    public:
        childtime()
        {
            hour2=0;
            minute2=0;
            second2=0;
        }
        childtime(int h,int m,int s)
        {
            hour2=h;
            minute2=m;
            second2=s;
        }
        void addtime()
        {
            second2+=second1;
            minute2/=second2;
            minute2+=minute1;
            second2%=60;
            hour2/=minute2;
            hour2+=hour1;
            minute2%=60;
        }
        void displaychild()
        {
            cout<<"\nTime is:"<<hour2<<":"<<minute2<<":"<<second2<<endl;
        }
        friend class friendchild;

};
class friendchild
{
    int hour3,minute3,second3;
    public:
        friendchild()
        {
            hour3=0;
            minute3=0;
            second3=0;
        }
        friendchild(int h,int m,int s)
        {
            hour3=h;
            minute3=m;
            second3=s;
        }
        void difference(childtime c)
        {
            hour3-=c.gethour();
            minute3-=c.getminute();
            second3=c.getsecond();
        }
        void displayfriend()
        {
            cout<<"\nTime result time is:"<<hour3<<":"<<minute3<<":"<<second3<<endl;
        }
};
int main()
{
    childtime c1(1,20,30);
    c1.settime();
    c1.addtime();
    c1.displaychild();
    friendchild f1(5,20,15);
    f1.difference(c1);
    return 0;
}
