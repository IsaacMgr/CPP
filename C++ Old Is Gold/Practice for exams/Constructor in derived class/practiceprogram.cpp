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
            cout<<"Inside default constructor of the parent\n";
        }
        Alpha(int a)
        {
            this->a=a;
            cout<<"Inside para constructor of the parent\n";
        }
        void displayalpha()
        {
            cout<<"the value of a:"<<this->a<<endl;
        }

};
class Beta:public Alpha
{
    protected:
        int b;
    public:
        Beta()
        {
            b=0;
            cout<<"Inside default constructor of the beta\n";
        }
        Beta(int a,int b):Alpha(a)
        {
            this->b=b;
            cout<<"inside para constructor of beta\n";
        }
        void displaybeta()
        {
            cout<<"the value of b:"<<this->b<<endl;
        }
};
class Gamma:public Alpha,public Beta
{
    protected:
        int c;
    public:
        Gamma()
        {
            c=0;
            cout<<"inside default constructor of gamma\n";

        }
        Gamma(int a,int b,int c):Alpha(a),Beta(a,b)
        {
            this->c=c;
            cout<<"inside para constructor of gamma\n";
        }
        void display()
        {
            cout<<"The value of c:"<<this->c<<endl;
        }
};
int main()
{
    Gamma g1(20,30,40);
    g1.display();
    return 0;
}