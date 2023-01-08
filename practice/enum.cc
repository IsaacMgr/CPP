#include <iostream>
using namespace std;
enum Day
{
    sunday,monday,tuesday,wednesday=7,friday,saturday
};
int main()
{
    Day d1,d2;
    d1=monday;
    d2=friday;
    cout<<"The value of day 1="<<d1<<endl; 
    cout<<"The value of day 2="<<d2<<endl; 
    return 0;
}