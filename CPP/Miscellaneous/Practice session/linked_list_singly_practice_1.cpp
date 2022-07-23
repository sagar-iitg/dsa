#include<iostream>
#include<cstdio>
using namespace std;
struct node
{

    int data;
    node *next;

};

struct node *head=NULL;

void insert_last(int val)
{
        node *newnode;
        newnode=new node;

       // cout<<newnode->data<<endl;
        //cout<<newnode->next<<endl;

        node *ptr;
        ptr=head;
        //cout<<ptr;
        //cout<<(**ptr);
        //printf("%d",**ptr);

        if(ptr==NULL)
        {
            newnode->data=val;
            newnode->next=NULL;
            head=newnode;


        }
        else
        {
            while(ptr->next!=NULL)
            {
                ptr=ptr->next;
            }

            ptr->next=newnode;
            newnode->data=val;
            newnode->next=NULL;
        }


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


    insert_last(90);
    insert_last(280);
    insert_last(300);
    insert_last(56);
    insert_last(24);
    display();
    return 0;
}




