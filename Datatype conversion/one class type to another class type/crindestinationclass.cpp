//we use either constructor with single argument or 
//conversion function(casting operator function)when converting object of one type to the object of another type


/*Example program to convert Dollar into rupees using class to class conversion implementing conversion routine in destination class*/


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
        void display()
        {
            cout<<"\nUSD="<<usd<<endl;
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
            cout<<"\nRupees="<<npr;
        }
        Rupees(Dollar d)
        {
            npr=d.getusd()*132;
        }
};

int main()
{
    Dollar dobj(12.32);
    Rupees robj;
    robj=dobj;
    //robj=Rupees(dobj);
    robj.displayrupees();
    dobj.display();
    return 0;
}