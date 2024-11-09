#include <iostream>
using namespace std;
template<typename T,int size>
class Stack
{
    T stk[size];
    int top;
    public:
        Stack()
        {
            top=-1;
        }
        void push(T data);
        void pop();
        void display();

};
template <typename T,int size>
void Stack<T,size>::push(T data)
{
    if(top=size-1)
    {
        cout<<"\nNo data can be inserted";
    }
    else
    {
        top++;
        stk[top]=data;
    }
}
template <typename T,int size>
void Stack<T,size>::pop()
{
    if(top=-1)
    {
        cout<<"\nNo data is popped out";
    }
    else
    {
        cout<<stk[top]<<"is popped out"<<endl;
        top--;
    }
}
template <typename T,int size>
void Stack<T,size>::display()
{
    for(int i=top;i>=0;i--)
    {
        cout<<"Stack["<<i<<"]"<<"="<<stk[i]<<endl;
    }
}
int main()
{
    int choice;
    Stack<int,10>obj;
    int data;
    while(1)
    {
        cout<<"\nMENU\nChoose any one\n1.Push data\n2.Pop data\n3.Display data\n4.Exit\n";
        cout<<"\nEnter choice:";
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"\nEnter data to be pushed:";
                cin>>data;
                obj.push(data);
                break;
            case 2:
                obj.pop();
                break;
            case 3:
                obj.display();
                break;
            case 4:
                exit(0);
            default:
                cout<<"\nWrong input";
        }

    }
    return 0;
}