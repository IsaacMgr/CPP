//It takes no arguments as the calling object is implicitly passed to called function 
/*Syntax
    returntype operator existing_operator()

*/
//WAP TO OVERLOAD UNARY MINUS OPERATOR USING MEMBER FUNCTION
#include <iostream>
using namespace std;
class Complex
{
    int real,img;
    public:
        Complex()
        {

        }
        Complex(int x,int i)
        {
            real=x;
            img=i;
        }
        void operator -()
        {
            real=-real;
            img=-img;
        }
        void display()
        {
            cout<<"\nReal="<<real<<endl<<"\nImg="<<img<<endl;
        }
};
int main()
{
    Complex C1(10,20);
    C1.display();
    -C1;
    cout<<"\nAfter negation operator";
    C1.display();
    return 0;
}

