#include <iostream>
using namespace std;
class Class1;
class Class2;
void max(Class1,Class2);

class Class1
{
    int num1;
    public:
        void setclass1()
        {
            cout<<"Enter the value of class 1:";
            cin>>num1;
        }
        friend void max(Class1,Class2);

};

class Class2
{
    int num2;
    public:
        void setclass2()
        {
            cout<<"Enter the value of class 2:";
            cin>>num2;
        }
        friend void max(Class1,Class2);
};
void max(Class1 c1,Class2 c2)
{
    if(c1.num1>c2.num2)
    {
        cout<<"Maximum is:"<<c1.num1<<endl;
    }
    else
    {
        cout<<"Maximum is:"<<c2.num2<<endl;
    }
}
int main()
{
    Class1 c1;
    Class2 c2;
    c1.setclass1();
    c2.setclass2();
    max(c1,c2);
    return 0;
}