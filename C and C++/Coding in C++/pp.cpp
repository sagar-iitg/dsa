#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node *InsertLL(Node *head,int val)
{
    if(head == NULL)
    {
        //or Node *temp = new Node; temp->data = val; return temp;
        return new Node(val);
    }
    Node *temp = new Node(val);
    temp->next = head;
    return temp;
}

void printLL(Node *head)
{
    if(head == NULL)
    {
        return;
    }
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return;
}

int main()
{
    Node *head = NULL;
    head = InsertLL(head,4);
    head = InsertLL(head,5);
    head = InsertLL(head,6);
    printLL(head);
    return 0;
}
