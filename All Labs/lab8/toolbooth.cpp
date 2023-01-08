#include <iostream>
using namespace std;

class ToolBooth
{
    private:
        unsigned int cars;
        double money;
    public:
        ToolBooth();
        ToolBooth(int,double);
        void payingCar();
        void noPayCar();
        void display();

};
ToolBooth::ToolBooth()
{
    cars=0;
    money=0;
}
ToolBooth::ToolBooth(int a,double b)
{
    cars=a;
    money=b;
}
void ToolBooth::payingCar()
{
    cars+=1;
    money+=5;
}
void ToolBooth::noPayCar()
{
    cars+=1;
    money+=0;
}
void ToolBooth::display()
{
    cout<<"The total number of cars is:"<<cars<<endl;
    cout<<"The total amount of money is:"<<money<<endl;
}
int main()
{
    ToolBooth t1;
    int choice;
    
    while(1){
    cout<<"Press 1 for paying car and press 2 for non paying car or press 3 to exit:"<<endl;
    
    cin>>choice;
    switch(choice)
    {
        case 1:
            cout<<"This car has been added to the list of paying toolbooth"<<endl;
            t1.payingCar();
            t1.display();
            break;
        case 2:
            cout<<"This car has been added to list of non paying toolbooth"<<endl;
            t1.noPayCar();
            t1.display();
            break;
        case 3:
            return 1;
        default:
            cout<<"Please enter correct value"<<endl;
    }
    }
    return 0;
}