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
            cout<<"\nEnter the size of array:";
            cin>>size;
            cout << "Enter the elements of array:\n";
            for (int i = 0; i < size; i++) {
            cin >> array[i];
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
        void displayarray()
        {   
            for(int i=0;i<size;i++)
            {
                cout<<array[i]<<endl;
            }
        }

};
int main()
{
    Array<int> a;
    a.set();
    a.sortarray();
    cout<<"\nThe sorted elements in an array is:\n";
    a.displayarray();
    Array<char>b;
    b.set();
    b.sortarray();
    cout<<"\nThe sorted elements in an array is:\n";
    b.displayarray();
    
    return 0;

}
