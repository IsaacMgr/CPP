/*Design a class Player that includes three interger fields;A player's jerseyno,no of goals,no of 
assists,and necessary constructors to initialize the data members.Overload greater than (>)
operator.One player is considered greater thatn another if the sum of goals plus assists is greater
than that of others .Create an array of 11 players, than use the overloaded greater than operator
to find player who has greatest total of goals+assists.*/
#include <iostream>
using namespace std;

class Player
{
    int jerseyno,no_of_goals,no_of_assists;
    public:
        void setplayer()
        {
            cout<<"\nEnter the jersey no of the player:";
            cin>>jerseyno;
            cout<<"\nEnter the no of goals of the player:";
            cin>>no_of_goals;
            cout<<"\nEnter the no of assists:";
            cin>>no_of_assists;
        } 
        void displayplayer()
        {
            cout<<"\nJersey no:"<<jerseyno<<endl<<"No of goals:"<<no_of_goals<<endl<<"No of assists:"<<no_of_assists;
        }
        Player int operator>(Player,Player)
        {
            
        }
};