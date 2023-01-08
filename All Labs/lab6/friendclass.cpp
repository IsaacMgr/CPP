#include <iostream>
using namespace std;
class Practical;
class Theory;
class Total
{
    int totalmarks;
    public:
        void calculate(Practical,Theory);

};
class Practical
{
    int pmarks;
    public:
        void setdetails()
        {
            cout<<"Enter the practical marks:";
            cin>>pmarks;
        }
        void displaydetails()
        {
            cout<<"The practical marks is:"<<pmarks;
        }
        friend class Total;
};
class Theory
{
    int tmarks;
    public:
        void setdetails()
        {
            cout<<"Enter the theory marks:";
            cin>>tmarks;
        }
        void displaydetails()
        {
            cout<<"The Theory marks is:"<<tmarks<<endl;
        }
        friend class Total;
};
void Total::calculate(Practical x,Theory y)
{
    totalmarks=x.pmarks+y.tmarks;
    cout<<"The totalmarks is:"<<totalmarks;
}
int main()
{
    Practical pmarks;
    Theory tmarks;
    Total totmarks;
    pmarks.setdetails();
    tmarks.setdetails();
    pmarks.displaydetails();
    tmarks.displaydetails();
    totmarks.calculate(pmarks,tmarks);
    return 0;
}
