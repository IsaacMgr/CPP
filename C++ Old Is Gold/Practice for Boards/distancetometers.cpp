//WAP to convert Distance into meters
#include <iostream>
using namespace std;
class Distance
{
    int feet;
    float inches;
    public:
        Distance()
        {
            feet=0;
            inches=0;
        }
        Distance(int f,int i)
        {
            feet=f;
            inches=i;
        }
        void display()
        {
            cout<<"\nFeet:"<<feet<<"\nInches:"<<inches<<endl;
        }
        operator float()
        {
            float meters;
            meters=(feet+(inches/12))/3.28034;
            return meters;
        }
};
int main()
{
    Distance d1(6,5.3);
    float meters;
    meters=d1;
    d1.display();
    cout<<"\nThe value of meters after type casting is:"<<meters<<endl;
    return 0;
}
