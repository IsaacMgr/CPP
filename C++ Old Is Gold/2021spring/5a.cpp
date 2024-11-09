//WAP to overload unary minus operator
#include <iostream>
using namespace std;
class Num
{
    int n;
    public:
        Num()
        {
            n=0;
        }
        Num(int n)
        {
            this->n=n;
        }
        void operator -()
        {
            n=-n;
        }
        void display()
        {
            cout<<"\nThe value of n="<<n<<endl;
        }
};
int main()
{
    Num n1(10);
    -n1;
    n1.display();
    return 0;
}
