#include <iostream>
using namespace std;
class Distance
{
    int km,m;
    public:
    void setdetails()
    {
        cout<<"Enter the distance in kilometers:"<<endl;
        cin>>km;
        cout<<"Enter the distance in meter:"<<endl;
        cin>>m;
    }
    void displaydetails()
    {
        cout<<"Distance in km is:"<<km<<endl;
        cout<<"Distance in m is:"<<m<<endl;
    }
    void add(Distance d1,Distance d2)
    {
        Distance result;
        result.m=d1.m+d2.m;
        result.km=result.m/1000;
        result.m=result.m%1000;
        result.km+=d1.km+d2.km;
        result.displaydetails();

    }
};
int main()
{
    Distance d1,d2,d3;
    cout<<"Enter the first distance"<<endl;
    d1.setdetails();
    cout<<"Enter the second distance"<<endl;
    d2.setdetails();
    cout<<"For the first distance"<<endl;
    d1.displaydetails();
    cout<<"For the second distance"<<endl;
    d2.displaydetails();
    cout<<"The total added distance is"<<endl;
    d3.add(d1,d2);
    return 0;
}
