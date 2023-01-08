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
            cout<<endl<<"Number="<<number<<endl;
        }
        void displaycount()
        {
            cout<<endl<<"count="<<count<<endl;
        }

};
int Test::count=60;
int main()
{
    Test t1,t2,t3;
    t1.setdetails();
    t1.displaycount();//61
    t2.displaycount();//61
    t2.setdetails();
    t3.displaycount();//62
    t3.setdetails();
    t1.displaycount();//63
    t2.displaycount();//63
    t3.displaycount();//63
    t1.displaynumber();//61
    t2.displaynumber();//62
    t3.displaynumber();//63
    return 0;
}