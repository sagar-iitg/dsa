#include<iostream>

#define SIZE 5
 
using namespace std;
 
class STACK
{
    private:
        int num[SIZE];
        int top;
    public:
        STACK()
        {
        	top=-1;
		}
        int push(int);
        int pop();
        int isEmpty();
        int isFull();
        void displayItems();
        int peek();
        
};


 
int STACK::isEmpty()
{
    if(top==-1)
        return 1;
    else
        return 0;   
}
int STACK::peek()
{
	if(top<0)
		{
			cout<<"Stack is Empty";
			return 0;
		}
	else
	{
		int x=num[top];
		return x;
	}
}
 
int STACK::isFull()
{
    if(top==(SIZE-1))
        return 1;
    else
        return 0;
}
 
int STACK::push(int n)
{
    
    if(isFull())
	{
        return 0;
    }
    ++top;
    num[top]=n;
    return n;
}
 
int STACK::pop()
{
    
    int temp;
    if(isEmpty())
        return 0;
    temp=num[top];
    --top;
    return temp;
     
}
 
void STACK::displayItems()
{
    int i; 
    cout<<"STACK is: "<<endl;
    for(i=(top); i>=0; i--)
        cout<<num[i]<<"\n";
    cout<<endl;
}
 
int main()
{
    
    STACK stk;
    int choice, n,temp,x;
     
    do
    {
        cout<<endl;
        cout<<"0 - Exit."<<endl;
        cout<<"1 - Push Item."<<endl;
        cout<<"2 - Pop Item."<<endl;
        cout<<"3 - Display Items (Print STACK)."<<endl;
        cout<<"4 - Peek Value."<<endl;
         
        cout<<"Enter your choice: ";
        cin>>choice;
         
        switch(choice)
		{
            case 0: break;
             
            case 1:
                cout<<"Enter item to insert: ";
                cin>>n;
                temp=stk.push(n);
                if(temp==0)
                    cout<<"STACK is FULL."<<endl;
                else
                    cout<<temp<<" inserted."<<endl;
            break;
                 
            case 2:
                temp=stk.pop();
                if(temp==0)
                    cout<<"STACK IS EMPTY."<<endl;
                else
                    cout<<temp<<" is removed (popped)."<<endl;
            break;
             
            case 3:
                stk.displayItems();
                break;
            case 4:
            	x=stk.peek();
            	cout<<x;
            	break;
            	
             
            default:
                cout<<"An Invalid choice."<<endl;
        }   
    }while(choice!=0);
 
     
    return 0;
     
}

