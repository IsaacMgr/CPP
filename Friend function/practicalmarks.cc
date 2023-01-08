#include <iostream>
using namespace std;
class Practical;
class Theory;
void Total(Practical,Theory);
class Practical
{
    int marks1;
    public:
    void setdetails()
    {
        cout<<"Enter the practical marks:";
        cin>>marks1;
    }
    void displaydetails()
    {
        cout<<"The practical marks is:"<<marks1<<endl;
    }
    friend void Total(Practical,Theory);
};
class Theory
{
    int marks2;
    public:
    void setdetails()
    {
        cout<<"Enter the theory marks:";
        cin>>marks2;
    }
    void displaydetails()
    {
        cout<<"The theory marks is:"<<marks2;
    }
    friend void Total(Practical,Theory);
};
void Total(Practical x,Theory y)
{
    int total;
    total=x.marks1+y.marks2;
    cout<<"The total marks is:"<<total;
}
int main()
{
    Practical pmarks;
    Theory tmarks;

    pmarks.setdetails();
    pmarks.displaydetails();
    tmarks.setdetails();
    tmarks.displaydetails();
    Total(pmarks,tmarks);
    return 0;
}