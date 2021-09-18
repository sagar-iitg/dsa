#include<iostream>
using namespace std;
struct node
{

    int data;
    node *prev,*next;
};

node *start=NULL; //global declaration

void insert(int val)
{

    node *newnode;
    newnode=new node;
    if(start==NULL)
    {

        newnode->prev=NULL;
        newnode->next=NULL;
        newnode->data=val;
        start=newnode;


    }
    else
    {



        newnode->data=val;
        newnode->prev=NULL;
        newnode->next=start;
        start->prev=newnode;
        start=newnode;
    }

}

void delete_last()
{
    node *ptr;
    ptr=start;


    while(ptr->next!=NULL)
    {
         ptr=ptr->next;


    }

    ptr->prev->next=NULL;
    free(ptr);


}





void display()
{

    node *ptr;
    ptr=start;
    while(ptr)
    {

          cout<<ptr->data<<" ";
          ptr=ptr->next;

    }

}

int main()
{
    insert(69);
    insert(10);
    insert(20);
    insert(13);
    insert(27);
    display();
    cout<<endl;
    delete_last();
    display();

}
