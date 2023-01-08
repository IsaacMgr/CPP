#include <iostream>
#include <string.h>
using namespace std;
class Bank
{
    char name[20];
    int accno;
    int balance;
    int money;

    public:
        void openacc();
        void depositwithdraw();
        void display();
};

void Bank::openacc()
{
    cout<<"--Welcome to NIC ASIA Bank--"<<endl;
    cout<<"--TO open your bank account--"<<endl;
    cout<<"please enter your name:"<<endl;
    cin>>name;
    cout<<"Enter your initial amount to deposit in the bank account:"<<endl;
    cin>>balance;
    cout<<"--You have successfully opened bank account--"<<endl;
    cout<<"--We have sent your bank details on your gmail account--"<<endl;
    
}

void Bank::depositwithdraw()
{
    int input;
    cout<<"Please enter your bank account number:";
    cin>>accno;
    cout<<"For further processing"<<endl;
    cout<<"--Press 1 to deposit money or press 0 to withdraw money--"<<endl;
    cin>>input;
    if(input==1)
    {
        cout<<"Enter the amount of money you want to deposit:"<<endl;
        cin>>balance;
    }
    else if(input==0)
    {
        cout<<"Enter the amount of money to withdraw:";
        cin>>money;
    }
}
void Bank::display()
{
    cout<<"Your account name is:"<<name<<endl;
    cout<<"You have deposited Rs. "<<balance<<" in the bank"<<endl;
    cout<<"You have withdrawn Rs. "<<money<<" from the bank"<<endl;
}
int main()
{
    Bank b1[50];
    int choice,size;
   
    for(int i=0;size<=1;i++)
    {
        b1[i].openacc();
    }
    for(int i=0;i<=size-1;i++)
    {
    cout<<"--Now for further processing you have the following choices--"<<endl;
    cout<<"1.Open an account"<<endl<<"2.Withdraw or Deposit money"<<endl<<"3.Display details of your account"<<endl;
    cout<<"What do you want<"<<endl;
    cin>>choice;
    }
    return 0;
}
