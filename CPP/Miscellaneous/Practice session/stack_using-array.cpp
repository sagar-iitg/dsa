#include<iostream>
#include<cstdlib>
using namespace std;

int top=-1;
#define N 4
int stack[N];

void push(int val)
{



    if(top==N-1)
    {
        cout<<"stack overflow\n";
    }
     else
     {
        top++;
        stack[top]=val;

     }

}

void pop()
{
    int item;

    if(top==-1)
        cout<<"underflow";
    else
    {
        item=stack[top];
        cout<<"Deleted item :"<<item;
        top--;

    }


    cout<<endl;

}

void display()
{
    int i;
    if(top==-1)
        cout<<"no elements in stack\n";
    else
    {

            for(i=top;i>=0;i--)
        cout<<stack[i]<<" ";
        cout<<endl;

    }

}

int main()
{
    int ch;
    int x;
    while(1)
    {

        cout<<"1.push\n2.pop\n3.display\n4.exit";

        cout<<"\nEnter choices"<<" ";
        cin>>ch;
        switch(ch)
        {

        case 1:cout<<"Enter no"<<" ";
               cin>>x;
               push(x);
               break;
        case 2: pop();
                break;
        case 3:display();
                break;
        case 4:exit(0);
        default:
            cout<<"Invalid choices\n";

        }




    }
}
