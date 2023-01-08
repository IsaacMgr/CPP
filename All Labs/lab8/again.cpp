//page no 4 qsn no 1

#include<iostream>
#include<string.h>
using namespace std;
class Bank
    {
            private:
                char accountHolderName[20];
                int accountNumber;
                int balance;
                int size,i;
            public:
                    void openAccount();
                    void depositMoney();
                    void withdrawMoney();
                    void depoWithdraw();
                    void displayInfo();
                    int exit();
    };
void Bank::openAccount()
    {
        cout<<"Opening bank account"<<endl;
        cout<<endl<<"Enter name of Account HOlder : ";
        cin>>accountHolderName;
        cout<<endl<<"Enter account number : ";
        cin>>accountNumber;
        cout<<endl<<"Enter balance you want to deposit initially : ";
        cin>>balance;
        
    }
void Bank::depositMoney()
    {
        int depo;
        cout<<endl<<"How much money you want to deposit? : ";
        cin>>depo;
        balance+=depo;
        cout<<endl<<"balance withdrawed succesfully!"<<endl;
        cout<<endl<<"Your current balance is : "<<balance<<endl;
    }
void Bank::withdrawMoney()
    {
        int with;
        cout<<endl<<"How much money you want to withdraw : ";
        cin>>with;
        if(balance>=with)
            {
                cout<<endl<<"Balance withdrawed succesfully!"<<endl;
                balance-=with;
                cout<<endl<<"Your new balance is : "<<balance;
            }
        else    
            {
                cout<<endl<<"Not enough balance"<<endl;
            }
    }
void Bank::displayInfo()
    {
        cout<<endl<<"Account holder name = "<<accountHolderName<<endl
            <<"Account number = "<<accountNumber<<endl
            <<"Balance amount = "<<balance<<endl;
    }
void Bank::depoWithdraw()
    {
        top:
        int num,choice;
        cout<<endl<<"Enter your account number to goto to your account: ";
 

int main()
    { 
        Bank b[40];
        int num;
        cout<<endl<<"Enter your account number to goto to your account: ";
        int size;
        cout<<"Enter the number of customers present in the bank:"<<endl;

       for(int i=0;i<=size-1;i++)
                        {
                            if(num==accountNumber)
                                {
                                    cout<<endl<<"What do you want to do  "<<endl
                                    <<"1. Deposit Money "<<endl<<"2. Withdraw money "<<endl<<"3. Display your acc info "<<endl
                                    <<"4. exit "<<endl;
                                    cin>>choice;
                                    if(choice==1)
                                        {
                                            depositMoney();
                                            displayInfo();
                                        }
                                    else if(choice==2)
                                        {
                                            withdrawMoney();
                                            displayInfo();
                                        }
                                    else if(choice==3)
                                        {
                                            displayInfo();
                                        }
                                    else if(choice==4)
                                        {
                                            exit();
                                        }
                                
                                }
                            else 
                                {
                                    cout<<endl<<"Please enter valid account number!"<<endl;
                                    goto top;
                                }
                        }
                
    return 0;
 }
    
    