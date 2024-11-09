#include <iostream>
using namespace std;
class Number
{
    int num;
    public:
        void set()
        {
            cout<<"\nEnter the value:";
            cin>>num;
        }
        Number operator *(Number N)
        {
            Number temp;
            temp.num=num*N.num;
            return temp;
        }
        void display()
        {
            cout<<"\n The value is:"<<num<<endl;
        }
        
};
int main()
{
    Number n1,n2,n3;
    n1.set();
    n2.set();
    n1.display();
    n2.display();
    n3=n1*n2;
    cout<<"The value after multiplication is:"<<endl;
    n3.display();
    return 0;
}