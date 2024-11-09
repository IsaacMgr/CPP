/*WAP to convert meters in float value into object of class distance(feet,inches)
Hint:1m=3.28034*/
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
        Distance(float meters)
        {
            float f=meters*3.28034;
            feet=(int)f;
            inches=(f-feet)*12;

        }

};
int main()
{
    float meters=1.85;
    Distance d1;
    d1=meters;
    d1.display();
    return 0;
}