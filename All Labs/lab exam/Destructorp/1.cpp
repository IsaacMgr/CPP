#include <iostream>
using namespace std;
class Cube
{
    private:
        int length;
    public:
        Cube()
        {
            length=0;

        }
        void setcube()
        {
            cout<<"Enter the length of the cube:";
            cin>>length;
        }
        void displaycube()
        {
            cout<<"The area of the cube is:"<<length*length*length<<endl;
        }
        ~Cube()
        {
            cout<<"Destructor called for cube with length "<<length<<endl;
        }
};
int main()
{
    Cube c1;
    Cube c2;
    {
    c2.setcube();
    c2.displaycube();
    c1.setcube();
    c1.displaycube();
    }
    return 0;
}