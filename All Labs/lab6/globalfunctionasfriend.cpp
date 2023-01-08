//global function as friend (totalmarks=practicalmarks+theorymarks)
#include <iostream>
using namespace std;
class Practical;
class Theory;
void calculate(Practical,Theory);
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
        cout<<"Enter the practical marks:"<<endl;
        cin>>pmarks;

    }
    void displaydetails()
    {
        cout<<"The practical marks is:"<<pmarks<<endl;
    }
    friend void calculate(Practical,Theory);
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
    friend void calculate(Practical,Theory);
};
void calculate(Practical x,Theory y)
{
    int total;
    total=x.pmarks+y.tmarks;
    cout<<"The total marks is:"<<total<<endl;
}
int main()
{
    Practical pmarks;
    Theory tmarks;
    pmarks.setdetails();
    tmarks.setdetails();
    pmarks.displaydetails();
    tmarks.displaydetails();
    calculate(pmarks,tmarks);
    return 0;
}