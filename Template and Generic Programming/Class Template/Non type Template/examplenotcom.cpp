//Implementing stack using class Template
#include <iostream>
using namespace std;
#include <stdlib.h>
template <typename T,int max>
class Stack
{
    T stk[max];
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
template<typename T,int max>
void Stack<T,max>::push(T data)
{
    if(top==max-1)
    {
        cout<<"Stack is full and no more insertion are allowed";
    }
    else
    {
        top++;
        stk[top]=data;
    }
}
template<typename T,int max>
void Stack<T,max>::pop()
{
    if(top==-1)
    {
        cout<<"\nStack is empty \nNo data can be removed"<<endl;

    }
    else
    {
        cout<<stk[top]<<"is popped out"<<endl;
        top--;
    }
}
template<typename T,int max>
void Stack<T,max>::display()
{
    for(int i=top;i>=0;i--)
    {
        cout<<"Stack["<<i<<"]"<<"="<<stk[i]<<endl;
    }
}
int main()

{
    Stack<int,10>objs1;
    int choice;
    int data;
    while(1)
    {
        cout<<"\nMenu\nChoose any one\n1.Push data\n2.Pop data\n3.Display data\n\n4.Exit";
        cout<<"Enter choice:";
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"Enter data to be pushed:";
                cin>>data;
                objs1.push(data);
                break;
            case 2:
                objs1.pop();
                break;
            case 3:
                objs1.display();
                break;
            case 4:
                exit(0);
            default:
                cout<<"Wrong input";

        }
    }
    return 0;
}
