#include <iostream>
using namespace std;
#define Max 50

int arstack[Max];
int i,j,k;
int temp;
int top = -1;
int choice;
int val;
void push();
void pop();
void peek();
void display();

int main()
{
    do 
    {
        cout<<"***** STACK OPERATIONS ******\n";
        cout<<"\n1. Push";
        cout<<"\n2. Pop";
        cout<<"\n3. Peek";
        cout<<"\n4. Display";
        cout<<"\n5. Quit";

        cout<<"Enter Your Choice : \n";
        cin>>choice;
        switch(choice)
        {
            case 1: push();
            break;

            case 2: pop();
            break;

            case 3: peek();
            break;

            case 4: display();
            break;
        }
    } while (choice != 5);
    return 0;
}

void push()
{
    if (top==Max-1)
    {
        cout<<"\nYou Might Delete some Elements!, Stack is Full";
    }
    else 
    {
        cout<<"Enter the Value :\n";
        cin>>val;
        ++top;
        arstack[top]=val;
        cout<<"Value Successfully Inserted";
    }
}

void pop()
{
    if (top==-1)
    {
        cout<<"\nYou Might want to Add Elements, Stack is Empty";
    }
    else 
    {
        int test;
        test=arstack[top];
        top--;
        cout<<"\nValue Removed from the Stack is"<<test;
    }
}

void peek()
{
    if (top==Max-1)
    {
        cout<<"\nYou Might want to Add Elements, Stack is Empty";
    }
    else 
    {
        cout<<"Element at the top is "<<arstack[top];
    }
}

void display()
{
    if (top==Max-1)
    {
        cout<<"\nYou Might want to Add Elements, Stack is Empty";
    }
    else 
    {
        cout<<"\n Stack is :";
        for (i=top;i>=-1;i--)
        {
            cout<<arstack[i]<<" ";
        }
    }
}