/*static member functions are independent on any particular objects of the class
it cannot acess not static class members
static member function can be acessed before any object of the class is created.
It can only acess only another static class members
*/
#include <iostream>
using namespace std;
class Test
{
    int number;
    static int count;
    public:
        void setdetails()
        {
            number=++count;

        }
        void displaynumber()
        {
            cout<<endl<<"Number ="<<number<<endl;
        }
        static void displaycount()
        {
            cout<<"Count="<<count<<endl;
        }
};
int Test::count=60;
int main()
{
    Test t1,t2,t3;
    t1.setdetails();
    Test::displaycount();//61
    t2.setdetails();
    Test::displaycount();//62
    t3.setdetails();
    Test::displaycount();//63
    t1.displaynumber();//61
    t2.displaynumber();//62
    t3.displaynumber();//63
    return 0;
}

