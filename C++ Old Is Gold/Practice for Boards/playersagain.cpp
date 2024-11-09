/*Design a soccer player that includes three integer fields:a players's jersy mumber,number of 
goals,number of assists and necessary constructors to initialize the data members .Overload the 
>operator (greater than).One player is considered greater than another if the sum of the goals plus assists 
is greater thatn that of the others.Create an array of 11 soccer players, then use the overload
>operator to find the player who has greates total foals plus assists.*/
#include <iostream>
using namespace std;
class Players
{
    int jersey,goals,assists;
    public:
        Players()
        {
            jersey=0;
            goals=0;
            assists=0;
        }
        void setplayers()
        {
            cout<<"\nEnter the jersey number:";
            cin>>jersey;
            cout<<"\nEnter goal scored:";
            cin>>goals;
            cout<<"\nEnter the assists:";
            cin>>assists;
        }
        void displayplayers()
        {
            cout<<"\nJersey number:"<<jersey<<"\nGoals Scored:"<<goals<<"\nAssists:"<<assists<<endl;
        }
        int max()
        {
            return (goals+assists);
        }
        int operator>(Players p)
        {
            if(max()>p.max())
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
};
int main()
{
    Players team[11],p;
    for(int i=0;i<3;i++)
    {
        team[i].setplayers();
        team[i].displayplayers();
    }
    for(int i=0;i<3;i++)
    {
        if(team[i]>team[i+1])
        {
            p=team[i];
            team[i]=team[i+1];
            team[i+1]=p;
        }
    }
    cout<<"\nThe greatest player is:\n";
    team[3].displayplayers();
    return 0;
}


