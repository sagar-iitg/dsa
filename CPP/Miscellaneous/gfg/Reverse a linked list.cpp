#include<iostream>
using namespace std;
#include<cstdlib>

struct node
{
  int data;
  struct node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }

};
struct node *head=NULL;
// Should reverse list and return new head.

node* reverseList(node *head)
{
  // Your code here
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
    return(head);

}

void insert(int l)
{

   struct node  *newnode,*ptr;
   newnode=(struct node *)malloc(sizeof(struct node));
   int val;
   cin>>val;

   if(l>0)
   {
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
        l=l-1;

   }


}
void display()
{
    struct node *ptr;
    ptr=head;
    while(ptr)
    {

        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }



}

int main()
{

    int t;
    cin>>t;
    int l=0;
    //int val;

    while(t--)
    {
        cin>>l;//length of the  linked list
        int x=l;
        while(l--)
        {
            insert(x);

        }
        display();
        cout<<"1";
        reverseList(head);
        display();
    }

        return(0);


}

