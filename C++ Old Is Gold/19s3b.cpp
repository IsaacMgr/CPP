#include <iostream>
using namespace std;
class Base
{
    protected:
        int cor1,cor2;
    public:
        void setvec()
        {
            cout<<"Enter the x-coordinate:";
            cin>>cor1;
            cout<<"Enter the y-coordinate:";
            cin>>cor2;
        }
        friend class Display;

};
class Display
{
    public:
        void displayresult(Base obj)
        {
            cout<<"Resultant vector:("<<obj.cor1<<","<<obj.cor2<<")"<<endl;
        }
}
class Derived:public Base
{
    
        void addvector(Base obj1,Base obj2)
        {
            cor1=obj1.cor1+obj2.cor1;
            cor2=obj1.cor2+obj1.cor2;
        }
};

