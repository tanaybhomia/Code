#include <stdio.h>
#include <iostream>
using namespace std;
# define Max 30

int stack[Max];
void push();
void peek();
void pop();
void display();
int val;
int i;
int top = -1;

int main()
{
    int choice;
    do 
    {
        cout<<"\n Please Select \n";
        cout<<"1. Push\n";
        cout<<"2. Pop\n";
        cout<<"3. Peek\n";
        cout<<"4. Display\n";
        cout<<"Enter Your Choice \n";
        cin>>choice;
        switch(choice)
        {
            case 1 :push();
            break;

            case 2 : pop();
            break;

            case 3: peek();
            break;

            case 4: display();
            break;
        }
    }
    while (choice!=5);
    return 0;
}

void push()
{
    if (top==Max-1)
    {
        cout<<"Stack is FULL !";
    }
    else 
    {
        cout<<"Enter the Value :";
        cin>>val;
        stack[++top]=val;
        cout<<"\nSuccessFully Inserted\n";
    }
}
void pop()
{
    if (top == -1 )
    {
        cout<<"Stack is Empty ";
    }
    else 
    {
        int rem = stack[top];
        top--;
        cout<<"Value removed is"<<rem;
    }
}
void peek()
{
    if (top == -1)
    {
        cout<<"Stack is Empty";
    }
    else 
    {
        int toping = stack[top];
        cout<<"Value at Top is "<<toping;
    }
}
void display()
{
    for (i=top;i>=0;i--)
    {
        cout<<stack[i];
    }
}