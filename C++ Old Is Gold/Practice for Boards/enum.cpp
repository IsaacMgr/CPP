/*enum
{
    enumerator 1,.....
}*/
#include <iostream>
using namespace std;
enum Day
{
    sunday,monday,tuesday=7,wednesday
};
int main()
{
    Day d1,d2;
    d1=sunday;
    d2=wednesday;
    cout<<"\nThe value of day 1:"<<d1<<endl;
    cout<<"\nThe value of day 2:"<<d2<<endl;


return 0;

}