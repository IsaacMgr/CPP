/*Create a class Mountain with data mambers name,height,and location.A friend function cmpHeight to 
compare height of two objects and member functions displayinfo to display information of mountain.In 
main create two objects of class mountain and display information of mountain with greatest height*/
#include <iostream>
using namespace std;
class Mountain;
void cmpHeight(Mountain,Mountain);
class Mountain
{
    char name[20];
    int height;
    char location[30];
    public:
        void setdetails()
        {
            cout<<"Enter the name of the mountain:";
            cin.getline (name,20);
            cout<<"Enter the height of the mountain:";
            cin>>height;
            cout<<"Enter the location of the mountain:";
            cin.getline (location,30);
        }
        void displaydetails()
        {
            cout<<"Mountain name:"<<name<<endl;
            cout<<"Mountain height:"<<height<<endl;
            cout<<"Mountain location:"<<location<<endl;
        }
        friend void cmpHeight(Mountain,Mountain);
};
void cmpHeight(Mountain m1,Mountain m2)
{
    if(m1.height>m2.height)
    {
        cout<<"The mountain with the greater height is:"<<m1.name<<endl;
    }
    else
    {
        cout<<"The mountain with the greater height is:"<<m2.name<<endl;
    }
}
int main()
{
    Mountain m1,m2;
    cout<<"---Enter the details of the first mountain---"<<endl;
    m1.setdetails();
    cout<<"---The details of the first mountain are:---"<<endl;
    m1.displaydetails();
    cout<<endl<<"---Enter the details of the second mountain---"<<endl;
    m2.setdetails();
    cout<<"---The details of the second mountain are:---"<<endl;
    m2.displaydetails();
    cmpHeight(m1,m2);
    return 0;
}