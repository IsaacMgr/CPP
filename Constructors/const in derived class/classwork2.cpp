//alpha beta gamma program
#include <iostream>
using namespace std;

class Alpha
{
    protected:
        int a;
    public:
        Alpha()
        {
            a=0;
        }
        Alpha(int a)
        {   
            this->a=a;
            cout<<"\nInside parametarized constructor of Alpha";
        }
        void showa()
        {
            cout<<"\nValue of a="<<a<<endl;
        }

};
class Beta
{
protected:
        int b;
    public:
        Beta()
        {
            b=0;
        }
        Beta(int b)
        {   
            this->b=b;
            cout<<"\nInside parametarized constructor of Alpha";
        }
        void showb()
        {
            cout<<"\nValue of b="<<b<<endl;
        }  
};
class Gamma:public Alpha,public Beta
{
    int c;
    public:
        Gamma()
        {
            c=0;
        }
        Gamma(int a,int b,int c):Alpha(a),Beta(b)
        {
            this->c=c;
            cout<<"\nInside parametarized constructor of gamma";
        }
        void showc()
        {
            showa();
            showb();
            cout<<"\nValue of c="<<c<<endl;
        }
};
int main()
{
    Gamma g1(10,20,30);
    g1.showc();
    return 0;
}