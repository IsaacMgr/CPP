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
            cout<<"\nNumber="<<number<<endl;
        }
        static void displaycount()
        {
            cout<<"\nCount="<<count<<endl;
        }
};
int Test::count=60;
int main()
{
    Test t1,t2;
    Test::displaycount();
    t1.setdetails();
    Test::displaycount();
    t2.setdetails();
    Test::displaycount();
    t1.displaynumber();
    t2.displaynumber();
    return 0;
}