/*Define a class Rectangle with data members length,and breadth.Derive a class BOx from Rectangle with
data members height and member functions calculatevolume()Use parametarized constructor for initiali
zation in both class*/

#include <iostream>
using namespace std;

class Rectangle
{
    protected:
        int length,breadth;
    public:
        Rectangle()
        {
            length=0;
            cout<<"\nInside default constructor of Rectangle";
        }
        Rectangle(int x,int y)
        {
            this->length=x;
            this->breadth=y;
            cout<<"\nInside parametarized constructor of Rectangle";

        }
        void displayR()
        {
            cout<<"\nLength="<<length<<endl<<"Breadth="<<breadth<<endl;
        }
};
class Box:public Rectangle
{
    int height;
    public:
        Box()
        {
            height=0;
        }
        Box(int x,int y,int z):Rectangle(x,y)
        {
            this->height=z;
            cout<<"\nInside parametarized constructor of Box";
        }
        void displaydetails()
        {
            displayR();
            cout<<"Height="<<height<<endl;
        }
};
int main()
{
    Box b1(10,5,10);
    b1.displaydetails();
    return 0;
}

