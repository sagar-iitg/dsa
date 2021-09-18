#include<iostream>
#include<cstdio>
using namespace std;

struct node
{
    int data;
    struct node *next;          //c
    //node *next                //c++

};

struct node *head =NULL;   //c
                           //node *head=NULL; //c++

node *create_node()
{

    node *n;
    n=(node*)malloc(sizeof(node*));
    return(n);

}

void insert_front( int val)
{
    //struct node* new_node=(struct node*)malloc(sizeof(struct node)); //c
    node *new_node=(node*)malloc(sizeof(node)); //c++
    //node *new_node=new node;  //c++
    new_node->data=val;
    new_node->next=head;
    head=new_node;

}
void insert_last(int val)
{


    node *new_node=new node;
    node *ptr;
    ptr=head;
    while(ptr->next)
    {

        ptr=ptr->next;
    }
    ptr->next=new_node;
    new_node->data=val;
    new_node->next=NULL;

}

void display()
{
   //struct node* ptr;
   node *ptr;
   ptr = head;
    while (ptr)
    {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
    }


}

int main()
{

    insert_front(4);
    insert_last(1);
    insert_last(7);
    insert_last(2);
    insert_last(69);
    /*insert_front(9);
    insert_front(3);
    insert_last(100);*/
    display();
    return 0;

}
