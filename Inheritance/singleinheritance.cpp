//single inheritance using public inheritance mode
#include <iostream>
using namespace std;
class Base
{
    private:
        int x;
    protected:
        int y;
    public:
        int z;
        void set();
        void display();
        void getX();
        

};
void Base::set()
{
    cout<<"Enter 3 values:";
    cin>>x>>y>>z;

}
void Base::display()
{
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    cout<<"z="<<z<<endl;

}
class Derived:public Base
{
    private:
        int result;
    public:
        void calculate();
        void displayresult();
};
void Derived::calculate()
{
    result.getX()+y+z;
}
void Derived::displayresult()
{
    cout<<endl<<"The result is:"<<result<<endl;
}
int main()
{
    Derived obj;
    obj.set();
    obj.display();
    obj.calculate();
    obj.displayresult();
    obj.z=50;
    return 0;
}