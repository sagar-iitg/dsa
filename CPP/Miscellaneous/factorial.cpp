#include<iostream>
using namespace std;
int main()
{
	int fact,i,n;
	cout<<"enter numbers"<<endl;
	cin>>fact;
	n=fact;
	if(n>0)
	{
	
		for(i=1;i<n;i++)
		{
		fact=fact*i;
		}
		cout<<fact;
	}
	else if(n==0)	
	{
	fact=1;
	cout<<fact;
	}
	else
	{
		cout<<"for negative numbers factorial is not defined";
		
	}
	
	
}
