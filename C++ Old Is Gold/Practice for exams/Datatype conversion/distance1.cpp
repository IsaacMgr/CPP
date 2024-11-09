#include <iostream>
using namespace std;
class Distance
{
    int feet;
    float inches;
    public:
        Distance(){}
        Distance(int f,float i)
        {
            feet=f;
            inches=i;
        }
        void display()
        {
            cout<<"Feet:"<<feet<<endl<<"Inches:"<<inches<<endl;
        }
        operator float()
        {
            float meters;
            meters=(feet+(inches/12))/3.28;
            return meters;
            
        }
};
int main()
{
    float meters;
    Distance d1(10,20);
    meters=d1;
    d1.display();
    cout<<"The distance in meters is:"<<meters<<endl;
    return 0;
}