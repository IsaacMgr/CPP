#include <iostream>
using namespace std;
class Myclass
{
    int x;
    public:
        Myclass(int a)
        {
            x=a;
        }
        friend void print(Myclass);
};
void print(Myclass m1)
{
    cout<<"The value of x is:"<<m1.x<<endl;
}
