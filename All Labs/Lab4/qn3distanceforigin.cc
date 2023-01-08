#include <iostream>
#include <math.h>
using namespace std;
class Point
{
    private:
    int xcoordinate;
    int ycoordinate;
    int zcoordinate;
    public:
    void assigndetails();
    void calculate();

};
void Point::assigndetails()
{
    cout<<"Enter the value of x coordinate:"<<endl;
    cin>>xcoordinate;
    cout<<"Enter the value of y coordinate:"<<endl;
    cin>>ycoordinate;
    cout<<"Enter the value of z coordintate:"<<endl;
    cin>>zcoordinate;

}
void Point::calculate()
{
    cout<<"Distance from the origin to the point is:"<<sqrt(pow(xcoordinate,2)+pow(ycoordinate,2)+pow(zcoordinate,2))<<endl;   
}
int main()
{
    Point p1;
    p1.assigndetails();
    p1.calculate();
    return 0;
}
