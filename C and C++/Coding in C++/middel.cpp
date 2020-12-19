#include<iostream>
using namespace std;

struct node{

    int data;
    node *next;

    node(int val){

        data=val;
        next=NULL;
    }



};
node *lastinsert(node *head,int val){

    if(head==NULL){
        return new node(val);

    }

    node *ptr;
    while(ptr->next!=NULL){

        ptr=ptr->next;
    }

    node *newnode=new node(val);
    ptr->next=newnode;
    newnode->next=NULL;
    return head;





}

node *insertfront(node *head,int val){

    if(head==NULL){
        return new node(val);

    }
    node *newnode=new node(val);
    //newnode->data=val;
    newnode->next=head;
    return newnode;




}

void printll(node *head){

    if(head==NULL){
        return;
    }
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
node *insertatkthposition(node *head,int val,int pos){

    node *prev,*curr;
    prev=head;
    curr=head;
    //int c=0
    node *ptr;
    ptr=head;
    int n=0;
    while(ptr!=NULL){
        n++;
        ptr=ptr->next;
    }
    if(pos<0 && pos>n){
        cout<<"invalid";
        return head;
    }
    if(pos==0){
        return insertfront(head,val);
    }
    pos=pos-1;

    while(pos!=0){

        prev=prev->next;
        pos--;
    }
    curr=prev->next;
    node *temp;
    temp=new node(val);
    temp->next=curr;
    prev->next=temp;
    return head;



}

int main(){


    node *head;
    head=NULL;


    head=insertfront(head,5);
    head=insertfront(head,7);
    head=insertfront(head,9);
    head=lastinsert(head,10);

    head=insertatkthposition(head,-1,4);
    printll(head);

}
