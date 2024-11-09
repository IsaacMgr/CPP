#include <iostream>
using namespace std;

template<typename T>
class Array
{
    T array[50];
    int size;
    public:
        void set()
        {
            cout<<"\nEnter the size of an array:";
            cin>>size;
            cout<<"\nEnter the array elements:";
            for(int i=0;i<=size-1;i++)
            {
                cin>>array[i];
            }
            
        }
        void display()
        {
            cout<<"\nThe array elements are:";
            for(int i=0;i<=size-1;i++)
            {
                cout<<array[i]<<endl;
            }
        }
        void sort()
        {
            for(int i=0;i<=size-1;i++)
            {
                for(int j=0;j<=size-i-1;j++)
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
};
int main()
{
    Array<int> a;
    a.set();
    a.sort();
    a.display();
    return 0;
}