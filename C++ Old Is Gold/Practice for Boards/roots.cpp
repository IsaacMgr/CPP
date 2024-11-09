#include <iostream>
using namespace std;
#include <math.h>
template <typename T>
void calculate(T a,T b,T c)
{
    T roots=pow(b,2)-4*a*c;
    if(roots>0)
    {
        cout<<"\nThe roots are real and unequal";
        T x1=(-b+sqrt(roots))/2*a;
        T x2=(-b-sqrt(roots))/2*a;
        cout<<"\nx1="<<x1<<endl;
        cout<<"\nx2="<<x2<<endl;

    }
    else if(roots==0)
    {
        cout<<"\nThe roots are real and equal";
        T x1=-b/2*a;
        T x2=-b/2*a;
        cout<<"\nx1="<<x1<<endl;
        cout<<"\nx2="<<x2<<endl;
        

    }
    else
    {
        cout<<"\nThe roots are imaginary and unequal";
        T x1=-b/2*a;
        T x2=sqrt(roots)/2*a;
        cout<<"\nx1="<<x1<<"+"<<x2<<"i"<<endl;
        cout<<"\nx2="<<x1<<"-"<<x2<<"i"<<endl;
    }
    
}
int main()
{
    int a=5,b=10,c=20;
    calculate<int>(a,b,c);
    return 0;
}