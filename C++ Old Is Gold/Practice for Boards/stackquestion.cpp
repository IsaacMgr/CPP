//implementing stack using template
#include <iostream>
#include <stdlib.h>
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
        T pop();
        void display();
};
template<typename T,int size>
void Stack<T,size>::push(T data)
{
    if(top==size-1)
    {
        cout<<"\nStack is full and no more insertion is allowed";

    }
    else
    {
        top++;
        stk[top]=data;
    }
}
template<typename T,int size>
T Stack<T ,size>::pop()
{
    if(top==-1)
    {
        cout<<"\nStack is empty \nNo more data is removed";
    }
    else
    {
        cout<<stk[top]<<"is popped out"<<endl;
        top--;
    }
}
template<typename T,int size>
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
    Stack <int ,10> obj;
    int data;
    while(1)
    {
        cout<<"\nMENU\nChoose any one\n1.Push data\n2.Pop data\n3.Display data\n4.Exit\n";
        cout<<"\nEnter choice:";
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"\nEnter data to be pushed\n";
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
                cout<<"Wrong input";
            
        }

    }
    return 0;
}