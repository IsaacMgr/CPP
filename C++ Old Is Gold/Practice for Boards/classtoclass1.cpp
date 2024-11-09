#include <iostream>
using namespace std;

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

};
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
        operator Rupees()
        {
            double r;
            r=usd*130.55;
            Rupees robj(r);
            return robj;
        }
};

int main()
{
    Rupees robj;
    Dollar d1(55.5);
    robj=d1;
    d1.displaydollar();
    robj.displayrupees();
    return 0;

}
/*
operator Rupees()
{
    double r;
    r=usd*130.95;
    Rupees robj(r);
    return robj;
}


*/