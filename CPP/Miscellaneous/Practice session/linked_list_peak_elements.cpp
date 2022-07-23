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

void display()
{

    node *ptr;
    ptr=head;
    while(ptr)
    {

        //cout<<"DATA........Address\n";

        cout<<ptr->data<<"->";
        ptr=ptr->next;
    }


}

int peak()
{

        int prev = head->data;
        node *curr;




         // Return -1 to indicate that
        // peak does not exist
            if (head == NULL)
                return -1;

    // If there is only one node
    if (head->next == NULL)
        return head->data;

         for (curr = head->next; curr->next != NULL; curr = curr->next)
        {

        // check if current node is greater
        // than both neighbours

            if (curr->data > curr->next->data && curr->data > prev)
                    return curr->data;

            prev = curr->data;
        }


    // We reach here when curr is last node
    if (curr->data > prev)
        return curr->data;

    // Peak does not exists
    else
        return -1;






}

int main()
{



        /*insert_front(15);
        insert_front(20);
        insert_front(10);
        insert_front(5);*/


        insert_front(12);
        insert_front(4);
        insert_front(8);
        insert_front(6);

        insert_front(1);


        display();
        cout<<endl<<"peak elememt"<<endl;
        cout<<peak();

}
