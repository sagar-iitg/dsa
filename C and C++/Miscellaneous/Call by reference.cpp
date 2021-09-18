#include<stdio.h>
#include<iostream>
void swap(int*,int*);
using namespace std;

int main()
{
	int a,b;
	
	cout<<"Enter Two Values\n";
	cin>>a>>b;
	swap(&a,&b);  
	cout<<a<<"\n";
	cout<<b;
	
	
}
void swap(int *x,int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
}
