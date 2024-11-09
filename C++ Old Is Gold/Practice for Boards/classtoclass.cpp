//example program to convert dollar into rupees using class to class conversion
//conversion routine in destination class
#include <iostream>
using namespace std;

class Dollar
{
    double usd;
    public:
        Dollar()
        {
            usd=0;
        }
        Dollar(double d)
        {
            usd=d;
        }
        void displaydollar()
        {
            cout<<"\nDollar:"<<usd<<endl;
        }
        double getusd()
        {
            return usd;
        }
};
class Rupees
{
    double npr;
    public:
        Rupees()
        {
            npr=0;
        }
        Rupees(double r)
        {
            npr=r;
        }
        void displayrupees()
        {
            cout<<"\nRupees:"<<npr<<endl;
        }
        Rupees(Dollar d)
        {
            npr=d.getusd()*130.48;

        }
};
int main()
{
    Dollar d1(55.5);
    Rupees r1;
    r1=d1;
    d1.displaydollar();
    r1.displayrupees();
    return 0;
}