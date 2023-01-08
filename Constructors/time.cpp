#include <iostream>
using namespace std;
class Time
{
    int hour,min,sec;
    public:
        void addtime(Time,Time);
        Time();
        Time(int,int,int);
        void display();
};
Time::Time()
{
    hour=0;
    min=0;
    sec=0;
}
Time::Time(int x,int y,int z)
{
    hour=x;
    min=y;
    sec=z;
}
void Time::display()
{
    cout<<"Hour:"<<hour<<endl;
    cout<<"Minute:"<<min<<endl;
    cout<<"Second:"<<sec<<endl;
}
int main()
{
    Time obj;
    Time obj1(1,2,3);
    Time obj2(1,2,3);
    obj1.display();
    return 0;
}