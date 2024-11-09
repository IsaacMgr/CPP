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
            cout<<"Number:"<<number<<endl;
        }
        void displaycount()
        {
            cout<<"count:"<<count<<endl;
        }
};
int Test::count=60;
int main()
{
    Test t1,t2,t3;
    t1.setdetails();
    t1.displaycount();
    t1.displaynumber();
    t2.setdetails();
    t2.displaynumber();
    t2.displaycount();
    return 0;
}