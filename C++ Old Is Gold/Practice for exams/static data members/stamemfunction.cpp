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
            cout<<"number:"<<number<<endl;
        }
        static void displaycount()
        {
            cout<<"count:"<<count<<endl;
        }
};
int Test::count=60;
int main()
{
    Test::displaycount();
    Test t1,t2,t3;
    t1.setdetails();
    Test::displaycount();
    t2.setdetails();
    Test::displaycount();
    t3.setdetails();
    t1.displaynumber();
    t2.displaynumber();
    t3.displaynumber();
    return 0;
}