#include <iostream>
using namespace std;
class Distance;
void add(Distance,Distance);
class Distance
{
    int km,m;
    public:
    void setdetails()
    {
        cout<<"Enter the distance in km:"<<endl;
        cin>>km;
        cout<<"Enter the distance in m:"<<endl;
        cin>>m;
    }
    void displaydetails()
    {
        cout<<"Distance in km is:"<<km<<endl;
        cout<<"Distance in m is:"<<m<<endl;
    }
    friend void add(Distance,Distance);
};
void add(Distance d1,Distance d2)
{
    Distance result;
    result.m=d1.m+d2.m;
    result.km=result.m/1000;
    result.m=result.m%1000;
    result.km+=d1.km+d2.km;
    result.displaydetails();
}
int main()
{
    Distance d1,d2;
    cout<<"For the first distance"<<endl;
    d1.setdetails();
    cout<<"For the second distance"<<endl;
    d2.setdetails();
    cout<<"The first details of the input distance are"<<endl;
    d2.displaydetails();
    cout<<"The second details of the input distance are"<<endl;
    d2.displaydetails();
    add(d1,d2);
    return 0;
}