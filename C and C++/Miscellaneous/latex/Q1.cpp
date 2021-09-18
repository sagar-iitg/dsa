/*Find the middle of a given linked list*/

#include<iostream>
#include<cstdlib>
using namespace std;

struct node
{

    int data;
    node *next;
};

node *head=NULL;

void insert(int new_data)
{
    node *new_node=new node;
    new_node->data=new_data;
    new_node->next=head;
    head=new_node;
}

void display() {
    node* ptr;
    ptr = head;
    while (ptr != NULL)
    {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
    }

}

int main()
{
    insert(4);
    //display();
    insert(3);
    insert(1);
    insert(8);
    display();

}
