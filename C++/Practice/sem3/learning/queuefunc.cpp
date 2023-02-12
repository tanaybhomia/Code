#include <iostream>
using namespace std;
#define Max 50

int iqueue[Max];
int front=-1;
int rear=-1;
void display();
void insert();
void remove();

int main()
{
    int choice;
    while (1)  
    {
        cout<<"Queue Operations :\n";
        cout<<"1. Insert\n";
        cout<<"2. Remove\n";
        cout<<"3. Display\n";

        cout<<"\nEnter Your Choice :";
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
    int add_item;
    if (rear==Max-1)
    {
        cout<<"Memory Overflow";
    }
    else 
    {
        if (front == -1)
        {
            front = 0;
            cout<<"\nEnter Your Value :";
            rear=rear+1;
            cin>>add_item;
            iqueue[rear]=add_item;
        }   
    }
}
    
void remove()
{
    if (front == -1 || front > rear)
    {
        cout<<"\nMemory Underflow";
    }       
    else 
    {
        cout<<"Element deleted from the Queue is"<<iqueue[front];
        front=front+1;
    }
}

void display()
{

}
