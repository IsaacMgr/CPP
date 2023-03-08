/*WAP to convert Distance (feet,inches) into meters(float)*/
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
        Distance(int f,float i)
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
    float meters;
    Distance dobj(6,1);
    meters=dobj;
    dobj.display();
    cout<<"\nEquivalent distance in meters is:"<<meters<<endl;
    return 0;
}