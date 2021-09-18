#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
class llist
{
	private:
		node *head;
	public:
		llist()
		{
			head=NULL;
		}
		void addnote(int val)
		{
			node *p=new node;
			p->data=val;
			p->next=NULL;
			if(head==NULL)
			head=p;
			else
			{
				p->next=head;
				head=p;
				
			}
		}
		
	
		
}


