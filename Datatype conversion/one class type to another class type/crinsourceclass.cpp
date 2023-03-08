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
            cout<<"\nRupees="<<npr<<endl;
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
            cout<<"\nUSD="<<usd<<endl;
        }
        operator Rupees()
        {
            double r;
            r=usd*130.9;
            Rupees robj(r);
            return robj;
        }
        
};

int main()
{
    Dollar dobj(12.43);
    Rupees robj;
    robj=dobj;
    //equivalent robj=dobj operator Rupees();
    robj.displayrupees();
    dobj.displaydollar();
    return 0;
}