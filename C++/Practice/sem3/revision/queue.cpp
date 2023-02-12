#include <iostream>
using namespace std;
#define Max 50

int arqueue[Max];
int i,j,k;
int temp;
int front = -1;
int rear = -1;
int choice;
int val;
void insert();
void remove();
void display();

int main()
{
    while (1) 
    {
        cout<<"***** STACK OPERATIONS ******\n";
        cout<<"\n1. Insert";
        cout<<"\n2. Delete";
        cout<<"\n3. Display";
        cout<<"\n4. Quit";

        cout<<"Enter Your Choice : \n";
        cin>>choice;

        switch(choice)
        {
            case 1: insert();
            break;

            case 2: remove();
            break;

            case 3: display();
            break;
        }
    }
}

void insert()
{
    if (rear==Max-1)
    { 
        cout<<"Queue is Full \n";
    }
    else 
    {
        if (front == -1)
        {
            front = 0;
            int val;
            cout<<"Enter the Element : \n";
            cin>>val;
            rear = rear + 1;
            arqueue[rear]=val;
            cout<<"\nValue Successfully Entered\n";
        }
    }
}

void remove()
{
    if (rear == -1 || front > rear)
    {   
        cout<<"The Queue is Empty\n";
    }
    else 
    {
        int val1;
        val1=arqueue[front];
        front = front + 1;
        cout<<"\nValue Successfully Deleted\n";
    }
}

void display()
{
    
}