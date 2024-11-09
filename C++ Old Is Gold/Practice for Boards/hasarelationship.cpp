#include <iostream>
using namespace std;

class Engine
{
    public:
        void startengine()
        {
            cout<<"\nEngine started"<<endl;
        }
        void stopengine()
        {
            cout<<"\nEngine stopped"<<endl;
        }
};
class Car
{
    Engine e;
    public:
        void startcar()
        {
            e.startengine();
            cout<<"\nCar started"<<endl;
        }
        void stopcar()
        {
            e.stopengine();
            cout<<"\nCar stopped"<<endl;
        }
};
int main()
{
    Car C;
    C.startcar();
    C.stopcar();
    return 0;
}
