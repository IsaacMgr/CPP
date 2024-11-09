//alpha beta gamma problem 17s5b
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
        }
        void showa()
        {
            cout<<"\nvalue of a:"<<a<<endl;
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
        }
        void showb()
        {
            cout<<"\nvalue of b:"<<b<<endl;
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
        }
        Gamma(int a,int b,int c):Alpha(a),Beta(b)
        {
            this->c=c;
        }
        void showg()
        {
            cout<<"\nvalue of c:"<<c<<endl;
        }
};
int main()
{
    Gamma g(1,2,3);
    g.showa();
    g.showb();
    g.showg();
    return 0;
}
