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





    Bank::Bank()
{
    strcpy(name," ");
    balance=0;
}