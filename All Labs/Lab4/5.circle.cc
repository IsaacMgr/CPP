#include <iostream>
#define pi 3.14
using namespace std;
class Circle
{
    private:
    int radius;
    float area;
    float perimeter;
    public:
    void setdetails();
    void displaydetails();
};
void Circle::setdetails()
{
    cout<<"Enter the radius of the circle:"<<endl;
    cin>>radius;
}
void Circle::displaydetails()
{
    area=pi*radius*radius;
    perimeter=2*pi*radius;
    cout<<"The area of the circle is:"<<area<<endl;
    cout<<"The perimeter of the circle is:"<<perimeter<<endl;
}
int main()
{
    Circle c1;
    c1.setdetails();
    c1.displaydetails();
    return 0;
}
