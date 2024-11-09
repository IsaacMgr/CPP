#include <iostream>
using namespace std;
enum Day
{
    sunday,monday,tuesday=45
};
int main()
{

    Day d1,d2,d3;
    d1=sunday;
    d2=monday;
    d3=tuesday;
    cout<<"The value of d1:"<<d1<<endl;
    cout<<"The value of d2:"<<d2<<endl;
    cout<<"The value of d3:"<<d3<<endl;
    return 0;
}