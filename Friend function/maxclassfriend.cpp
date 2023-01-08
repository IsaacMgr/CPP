/*Create classes called class 1 and class 2 with each having one private member and member function
to set the value(setvalue) on each classes.Add one more function max that is friendly to both classes
Max function should compare two private member of two classes and show max among them.
create one object of each class and set value on them.Display maximum among them.*/
#include <iostream>
using namespace std;
class Class1;
class Class2;
void max(Class1,Class2);
class Class1
{
    int num1;
    public:
    void setvalue()
    {
        cout<<"Enter the first number:";
        cin>>num1;
    }
    friend void max(Class1,Class2);
};
class Class2
{
    int num2;
    public:
    void setvalue()
    {
        cout<<"Enter the second number:";
        cin>>num2;
    }
    friend void max(Class1,Class2);
};
void max(Class1 x,Class2 y)
{
    if(x.num1>y.num2)
    {
        cout<<"The maximum among two number is:"<<x.num1;
    }
    else{
        cout<<"The maximum among two number is:"<<y.num2;
    }
}
int main()
{
    Class1 c1;
    Class2 c2;
    c1.setvalue();
    c2.setvalue();
    max(c1,c2);
    return 0;
}


