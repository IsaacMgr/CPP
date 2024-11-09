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
        Distance(float meters)
        {
            float f=feet*3.28;
            feet=int(f);
            inches=(f-feet)*12;
        }
};
int main()
{
    Distance d1;
    float meters=3.55691;
    d1=meters;
    d1.display();
    return 0;
}