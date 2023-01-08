#include<iostream>
using namespace std;
class Bank
{
	private:
	char name[20];
	int acno;
	int balance;
	public:
		void openaccount();
		void deposit();
		void withdraw();
		static int count;
		void displaydetails();
		int getacc()
		{
			return acno;
		}
};
// member functions
void Bank :: openaccount()
{
cout<<"Enter your name: ";
cin>>name;
cout<<"Enter account number:"<<endl;
cin>>acno;
cout<<"Enter the Amount to Deposit initially: ";
cin >>balance;
cout<<"\nYou have created an account successfully\n";
}
void Bank :: deposit()
{
int money;
cout<<"Enter the amount to deposit : ";
cin>>money;
while(money<=0)
    {
        cout<<"Invalid input\nEnter again:";
        cin>>money;
    }
balance+=money;
    cout<<"Your resulting balance is:"<<balance;

}
void Bank :: withdraw()
{
int amt;
cout<<"Enter the amount to withdraw : ";
cin>>amt;
while(amt>balance)
    {
        cout<<"You don't have enough balance in your account\nPlease enter again:";
        cin>>amt;
    }
balance-=amt;
    cout<<"YOur resulting balance is:"<<balance;

}
void Bank :: displaydetails()
{
cout<<"The Account Details are:"<<endl;
cout<<"Name of the depositor : "<<name<<endl;
cout<<"Account Number        : "<<acno<<endl;
cout<<"Balance               : $"<<balance<<endl;
}
int Bank::count=0;
int main()
{
Bank obj[9]; //declaring an array of objects
int choice;
int i,accno;

// user must enter 0 to exit

while (1)
{
	cout<<"\n-----Welcome to NIC ASIA Bank-----"<<endl;
	cout<<endl<<"MENU\n1. Open Account"<<endl<<"2. Deposit"<<endl<<"3.Withdraw"<<endl<<"4.See account status"<<endl<<"5.Exit"<<endl;

	cin>>choice;

switch(choice)
{
	case 1 :
	if(obj[0].count==9)
                {
                    cout<<"No account space available";
                    break;
                }
		for(i=0;i<=9;i++)
		{
			if(obj[i].getacc()==0){
				obj[i].openaccount();
				break;
			}
		} 
		break;
		
	case 2: 
		cout<<"Enter the bank account number:"<<endl;
		cin>>accno;
		for(i=0;i<=9;i++){
		
		if(obj[i].getacc()==accno){
			obj[i].deposit();
			break;
			}
		}
		break;
	case 3 : 
		
		cout<<"Enter the bank account number:"<<endl;
		cin>>accno;
		for(i=0;i<=9;i++){
			if(obj[i].getacc()==accno){
			obj[i].withdraw();
			break;
			}
		}
		break;
	case 4: 
		cout<<"Enter account number:";
		cin>>accno;
		for(i=0;i<=9;i++){
			if(obj[i].getacc()==accno)
			{
				obj[i].displaydetails();
				break;
			}
		}
		break;
	case 5 :
		cout<<"EXITING PROGRAM.....";
		return 1;
		
		}
	}	
return 0;
}