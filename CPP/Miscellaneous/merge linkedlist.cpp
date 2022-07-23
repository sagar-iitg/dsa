#include<bits/stdc++.h>
using namespace std;



struct node{

    int data;
    node *next;

};

struct node *head=NULL;


void insertatfront(int val){

    node *newnode=new node;


    if(head==NULL){

        newnode->data=val;
        newnode->next=NULL;
        head=newnode;
    }


    else{

        newnode->data=val;
        newnode->next=head;
        head=newnode;


    }



}

void display(){

    node *ptr;
    ptr=head;
    //cout<<"ans";
    //int c=0;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
        //c++;
    }

}
int main(){

    insertatfront(10);
    insertatfront(20);
    insertatfront(40);
    insertatfront(50);

    display();



}
