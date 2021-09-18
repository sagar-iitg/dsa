#include<iostream>
using namespace std;
struct node
{
    char data;
    node *next;
};

node *head=NULL;

void insert(char val)
{
        node *newnode;
        newnode= new node;
        if(head==NULL)
        {
                newnode->data=val;
                newnode->next=NULL;
                head=newnode;


        }
        else
       {
           newnode->data=val;
           newnode->next=head;
           head=newnode;
        }

}

void middle()
{

    node *ptr;
    ptr=head;
    int c1=0;
    node *ptr1;
    ptr1=head;

    while(ptr!=NULL)
    {


        ptr=ptr->next;
        c1=c1+1;
    }

    if(c1%2==0)
    {
        c1=c1/2;
    }
    else
        c1=(c1/2)+1;




    while(c1!=1)
    {


        ptr1=ptr1->next;
        c1=c1-1;
    }

    cout<<endl<<"Middle Element :"<<ptr1->data;

}
void display()
{

    node *ptr;
    ptr=head;
    while(ptr!=NULL)
    {

        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }

}

int main()
{

        insert('g');
    insert('f');


    insert('e');
    insert('d');
    insert('c');
    insert('b');
    insert('a');

    display();
    middle();




}
