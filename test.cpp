//soccer problem

#include<iostream>
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
          void set()
          {

        cout<<"enter jersey: ";
        cin>>jersey;
        cout<<"enter goals: ";
        cin>>goals;
        cout<<"enter assists: ";
        cin>>assists;
          }
          void display()
          {
            cout<<"jersey: "<<jersey<<"\ngoals: "<<goals<<"\nassists: "<<assists<<endl;
          }
          
		  int max()
		  {
		  	return (goals+assists);
		  }
          int operator>(Players p)
          {  
              if (max()>p.max())
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
    int j,g,a;
    Players team[11],p;
    for (int i=0;i<3;i++)
    {   team[i].set();
        team[i].display();
    }
    for (int i=0;i<3;i++)
    {
    	if(team[i]>team[i+1])//if(team[i].operator>(team[i+1]))
    	{
    		p=team[i];
    		team[i]=team[i+1];
    		team[i+1]=p;
		}
	}
	cout<<"greatest player is: "<<endl;
    team[3].display();
    return 0;
}
