#include<iostream>
using namespace std;

struct node
{

    int data;
    node *next;
};


node *start=NULL;



int main()
{
    node *newnode,*temp;
    newnode=new node;
    temp=newnode;
    newnode->data=5;
    cout<<temp<<" "<<newnode<<endl;
    cout<<newnode->data;
    cout<<newnode->next;

}

