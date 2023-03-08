//PROGRAM TO OVERLOAD UNARY ++ OPERATOR
#include <iostream>
using namespace std;

class Distance
{
    int kilometer,meters;
    public:
        Distance()
        {
            kilometer=0;
            meters=0;
        }
        Distance(int k,int m)
        {
            kilometer=k;
            meters=m;
        }
        void display()
        {
            cout<<"Kilometer:"<<kilometer<<endl<<"Meters:"<<meters<<endl;
        }
        void operator++()
        {
            kilometer=++kilometer;
            meters=++meters;
        }

};
int main()
{
    Distance d1(10,20);
    d1.display();
    ++d1;
    d1.display();
    return 0;
    

}