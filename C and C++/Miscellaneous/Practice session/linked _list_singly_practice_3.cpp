#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;

};
node *head=NULL;

void insert_front(int val)
{
    node *newnode;
    newnode=new node;
    node *ptr;
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

void create_node(int val)
{
        node *newnode;
        newnode=new node;
        newnode->data=val;
        newnode->next=NULL;
        head=newnode;

}

void insert_last(int val)
{
    node *ptr;
    node *newnode;
    newnode=new node;
    if(head==NULL)
    {
        create_node(val);

    }
    else
    {
        ptr=head;
        while(ptr->next)
        {

            ptr=ptr->next;
        }
        newnode->data=val;
        ptr->next=newnode;
        newnode->next=NULL;


    }


}

void insert_afternode(int val)
{
    int x;
    cout<<endl<<"Enter node value after whic h u want to insert";
    cin>>x;
    node *newnode,*temp;
    newnode=new node;
    temp=newnode;


    node *ptr,*ptr1;
    ptr=head;
    ptr1=head;


    while(ptr->data!=x)
    {

        ptr=ptr->next;
        ptr1=ptr1->next;
    }
   // cout<<ptr->data;
    newnode->data=val;
   // ptr->next=temp;
    ptr=ptr->next;
    temp->next=ptr;
    ptr1->next=temp;

}

void insert_beforenode(int val)
{
    int x;
    cout<<"Enter the node value before u want to insert";
    cin>>x;
    node *newnode,*temp;
    newnode=new node;
    temp=newnode;
    node *ptr,*ptr1;
    ptr=head;
    int c=0;
    while(ptr->data!=x)
    {
     ptr=ptr->next;
     //ptr1=ptr1->next;
     c++;
    }
    cout<<c<<endl;
    //c=c-1;
    cout<<c<<endl;
    while(c)
    {
        ptr1=ptr1->next;
        c=c-1;
    }
    cout<<c;
    //ptr1=ptr1->next;

    newnode->data=val;
    cout<<temp<<" "<<ptr<<" "<<ptr1;
 //temp->next=ptr;
  // ptr1->next=temp;







}
void display()
{

    node *ptr;
    ptr=head;
    while(ptr)
    {

        //cout<<"DATA........Address\n";
        cout<<endl;
        cout<<ptr->data<<"\t  "<<ptr->next<<" \t\t "<<&(ptr->data)<<"  ";
        ptr=ptr->next;
    }


}



int main()
{

        cout<<"DATA........Address     and \tBlock address";

        insert_front(10);
        insert_front(20);
        insert_last(25);
        insert_beforenode(13);
        display();

}
