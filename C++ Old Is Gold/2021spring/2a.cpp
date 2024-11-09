/*Create classes called classq and class2 with each of having one private member.Add member function
to set a value(say set_value)on each class.Add one more function max()that is friendly to both slasses.The max()
function should compare two private member of the two classes and show maxumum among them.Create one
object for each class then set a value to each object.Display the maximum number among them.*/
#include <iostream>
using namespace std;
class One;
class Two;//forward declaration
void max(One,Two);//global function
class One
{
    int numone;
    public:
        void set_value()
        {   
            cout<<"\nEnter the value of the number:";
            cin>>numone;
        }
        void display_value()
        {
            cout<<"\nThe number is:"<<numone<<endl;
        }
        friend void max(One,Two);
};
class Two
{
    int numtwo;
    public: 
        void set_value1()
        {
            cout<<"\nEnter the value of the another number:";
            cin>>numtwo;
        }
        void display_value1()
        {
            cout<<"\nThe number is:"<<numtwo<<endl;
        }
        friend void max(One,Two);

};
void max(One x,Two y)
{
    if(x.numone>y.numtwo)
    {
        cout<<"\nThe maximum among the numbers is:"<<x.numone<<endl;
    }
    else
    {
        cout<<"\nThe maximum among the numbers is:"<<y.numtwo<<endl;
        
    }
}
int main()
{
    One objone;
    Two objtwo;
    objone.set_value();
    objone.display_value();
    objtwo.set_value1();
    objtwo.display_value1();
    max(objone,objtwo);
    return 0;
}
