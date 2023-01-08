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
    friend void Total :: calculate(Practical,Theory);
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
        cout<<"The theory marks is:"<<tmarks;
    }
    friend void Total::calculate(Practical,Theory);
};
void Total::calculate(Practical x,Theory y)
{
    totalmarks=x.pmarks+y.tmarks;
    cout<<"The total marks is:"<<totalmarks;
}
int main()
{
    Practical pmarks;
    Theory tmarks;
    Total totalmarks;
    pmarks.setdetails();
    tmarks.setdetails();
    pmarks.displaydetails();
    tmarks.displaydetails();
    totalmarks.calculate(pmarks,tmarks);
    return 0;
}

