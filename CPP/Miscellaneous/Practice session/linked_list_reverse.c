#include<stdio.h>
#include<malloc.h>

struct node
{

    int data;
    struct node *next;

};
struct node *head=NULL;

void insert(int val)
{

   struct node  *newnode,*ptr;
   newnode=(struct node *)malloc(sizeof(struct node));
   if(head==NULL)
    {
        newnode->data=val;
        newnode->next=NULL;
        head=newnode;
   }
   else
   {
       ptr=head;
       newnode->data=val;
       newnode->next=ptr;
       head=newnode;

   }



}
void reverse_iter()
{

    struct node *prev_ptr,*curr_ptr,*next_ptr;
    prev_ptr=NULL;
    next_ptr=head;
    curr_ptr=head;
    while(next_ptr!=NULL)
    {

        next_ptr=next_ptr->next;
        curr_ptr->next=prev_ptr;
        prev_ptr=curr_ptr;
        curr_ptr=next_ptr;

    }
    head=prev_ptr;



}
void display()
{
    struct node *ptr;
    ptr=head;
    while(ptr)
    {

        //cout<<ptr->data<<" ";
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }



}


int main()
{

    insert(10);
    insert(25);
    insert(20);
    insert(28);
    insert(13);
    display();
    //cout<<endl;
    printf("\n");
    reverse_iter();
    display();
    //cout<<endl;
     printf("\n");
    reverse_iter();
    display();
}
