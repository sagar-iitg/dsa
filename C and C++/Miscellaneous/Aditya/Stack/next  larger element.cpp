#include <iostream>
#include<stack>
#include<vector>

using namespace std;



void NLE(int arr[],int n)
{
    stack <int> s;
    vector <int> v;



    for(int i=n-1; i>=0; i--)
    {
        if(s.size()==0)
            v.push_back(-1);
        else if(s.size()>0  && s.top() > arr[i])
            v.push_back(s.top());


        else if(s.size()>0  && s.top() <= arr[i])
        {
            while(s.size()>0  && s.top() <= arr[i])
                s.pop();
            if(s.size()==0)
                v.push_back(-1);
            else
                v.push_back(s.top());

        }


        s.push(arr[i]);


    }




     for (int i=v.size()-1; i>=0; i--)
        cout << v[i] << " ";





}
int main() {
	//code

	int T;  //T denote no of Test Cases
	cin>>T;

	while(T--)
	{
	   int N; //N denote number of elements in array
	   cin>>N;

	   int arr[N];

	   for(int i=0;i<N;i++)
	        cin>>arr[i];

	   NLE(arr,N);




	}



	return 0;
}
