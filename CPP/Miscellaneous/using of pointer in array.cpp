#include<iostream>
using namespace std;
int main()
{
	int arr[5],i,*p;
	p=&arr[0];
	input(arr);
	display(arr);
}
void display(int *p)
{
	int i;
	for(i=0;i<=4;i++)
	cout<<*(p+i);
}

void input(int *p)
{
	int i;
	for(i=0i<=4;i++)
	cin>>(p+i);
}
