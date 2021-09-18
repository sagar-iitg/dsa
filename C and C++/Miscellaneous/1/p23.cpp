#include<iostream>
using namespace std;

void missing(int a[], int n)
{
    cout<<"THE MISSING ELEMENTS ARE: "<<endl;
    for(int i=1; i<=n; i++)
    {
        if(i!=a[i])
            cout<<i;
    }
}



int main()
{
    int n;
    cout<<"Enter size of the array: "<<endl;
    cin>>n;

    int *a = new int(n);

    cout<<"Enter the elements of the array: "<<endl;

    for(int i=1; i<=n; i++)
        cin>>a[i];

    missing(a, n);

    return 0;
}
