//WAP to overload multiplication operator showing multiplication of two objects.
#include <iostream>
using namespace std;

class Number
{
    int num;
    public:
        void setnum()
        {
            cout<<"\nEnter the number:";
            cin>>num;
        }
        void display()
        {
            cout<<"\nThe number is:"<<num;
        }
        Number operator*(Number n)
        {
            Number temp;
            temp.num=num*n.num;
            return temp;
        }
};
int main()
{
    Number n1,n2,n3;
    n1.setnum();
    n2.setnum();
    n3=n1*n2;
    n1.display();
    n2.display();
    n3.display();
    return 0;
}