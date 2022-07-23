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
    cout<<"Enter node value after whic h u want to insert";
    cin>>x;
    node *newnode;
    newnode=new node;


    node *ptr;
    ptr=head;


    if(ptr->data==x)
    {
        newnode->data=x;
        ptr->next=newnode;



    }
    else
        ptr=ptr->next;
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
        insert_last(7555);
        insert_front(10);
        insert_front(0);
        insert_front(20);
        insert_front(37);
        insert_front(29);
        insert_last(69);
        insert_last(75);
        display();

}
