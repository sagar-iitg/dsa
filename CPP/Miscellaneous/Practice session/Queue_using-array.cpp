#include<iostream>
using namespace std;
#define size 4

int queue[size];
int rear=-1;
int front=-1;


void insert(int val)
{
    if(rear==size-1)
    {
        cout<<"Qeueue full\n";

    }
    else if(front==-1 && rear==-1)
    {


        rear++;
        front++;
        queue[rear]=val;

    }
    else
    {
         rear++;
         queue[rear]=val;
    }

}


void display()
{
   int i;
   if(front==-1 && rear==-1)
     cout<<"NO. elements in queue";
   else
    {
         for(i=front;i<=rear;i++)
        cout<<queue[i]<<" ";
    }


}


void delet()
{
    int i,item;
    if(rear==-1 && front==-1)
    {
        cout<<"Empty Queue";

    }
    else if(front==rear)
    {

        item=queue[front];
        cout<<"deleted item\n"<<item;

        front=rear=-1;
    }
    else
    {
        item=queue[front];
        cout<<"deleted item\n"<<item;
        front++;


    }


}
int main()
{

    int ch;
    int n;
    while(1)
    {
        cout<<"\n1.insert\n2.delete\n3.display\n4.exit";
        cout<<"\nchosse option\n";
        cin>>ch;

        switch(ch)
        {

            case 1: cout<<"Enter no\n";
                    cin>>n;
                    insert(n);
                    break;
            case 2: delet();
                    break;
            case 3: display();
                    break;
            case 4:exit(0);
            default:
                cout<<"Invalid choice";


        }

    }


}
