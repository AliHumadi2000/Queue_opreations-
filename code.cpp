#include <iostream>
#include<cstdlib>

//declare queue ,size and pointers
#define MAX 5
int Q[MAX];
int front=-1,rear=-1;
using namespace std;
//add an element to queue
void addelement(int data)
{
    if(front==0 && rear==MAX-1)
    {
        cout<<"Queue is Full"<<endl;
    }
    else
    {
        Q[++rear]=data;
    }
    if(front==-1)
    {
        front=0;
    }

}
//Dequeue an element from queue
void dequeue()
{
    if(front==-1|| front>rear)
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        cout<<" queue "<<Q[front]<<" Dequeue"<<endl;
        front++;
    }
}
//print all element of queue
void display()
{
    if(front==-1)
    {
        cout<<"Q is empty"<<endl;
    }
    else
    {
        for(int i=front;i<=rear;i++)
        {
            cout<<Q[i]<<" ";
        }
    }
}
//print the first element in queue
void peak()
{
    if(front==-1||front>rear)
    {
         cout<<"Q is empty"<<endl;
    }
    else
    {
        cout<<"peak is "<<Q[front]<<endl;
    }
}
//check if the queue is empty
bool isempty()
{
    if(front==-1 || front>rear)
    {
        return true;
    }
    else
        return false;
}
//check if the queue is full
bool isFull()
{
    if(front==0 && rear==MAX-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    while(true)
    {
        cout<<"\n1-add\n2-dequeue\n3-display\n4-Peak\n5-isempty\n6-isfull\n7-exit"<<endl;
        int n;cin>>n;
        switch(n)
        {
        case 1:
            int x;
            cout<<"Enter an element"<<endl;
            cin>>x;
            addelement(x);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            peak();
            break;
        case 5:
            if(isempty())
            {
                cout<<"Q is empty"<<endl;
            }
            else
            {
                cout<<"Q is not Empty"<<endl;
            }
            break;
        case 6:
             if(isFull())
            {
                cout<<"Q is full"<<endl;
            }
            else
            {
                cout<<"Q is not Full"<<endl;
            }
            break;
        case 7:
            exit(0);
            break;
        default:
            cout<<"Enter no between 1-4"<<endl;
        }
    }
    return 0;
}
