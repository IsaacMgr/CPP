#include <iostream>
using namespace std;
template <typename T>
class Array
{
    T array[50];
    int size;
    public:
        void set()
        {
            cout<<"\nEnter the size of the array:";
            cin>>size;
            cout<<"\nEnter the elements of the array:";
            for(int i=0;i<size;i++)
            {
                cin>>array[i];
            }
        }
        void sortarray()
        {
            for(int i=0;i<size;i++)
            {
                for(int j=0;j<size-i-1;j++)
                {
                    if(array[j]>array[j+1])
                    {
                        T temp;
                        temp=array[j];
                        array[j]=array[j+1];
                        array[j+1]=temp;
                    }
                }
            }
        }
        void display()
        {
            for(int i=0;i<size;i++)
            {
                cout<<array[i]<<endl;
            }
        }

};
int main()
{
    Array<int>a;
    a.set();
    a.sortarray();
    cout<<"\nThe sorted array elements are:\n";
    a.display();
    return 0;
}
