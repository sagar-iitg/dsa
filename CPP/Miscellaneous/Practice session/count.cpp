 #include <bits/stdc++.h>
using namespace std;


int getPairsCount(int arr[], int n, int sum)
{
	unordered_map<int, int> m;

	for (int i=0; i<n; i++)
		m[arr[i]]++;

    for(auto i:m)
        cout<<i.first<<" "<<i.second<<endl;

	int twice_count = 0;


	for (int i=0; i<n; i++)
	{
		twice_count += m[sum-arr[i]];

        cout<<"-----"<<endl;
    for(auto i:m)
        cout<<i.first<<" "<<i.second<<endl;

    cout<<"-----"<<endl;

    if (sum-arr[i] == arr[i])
			twice_count--;
	}


	return twice_count/2;
}

int main()
{
	int arr[] = {1, 5, 7, -1, 5} ;
	int n = sizeof(arr)/sizeof(arr[0]);
	int sum = 6;
	cout << getPairsCount(arr, n, sum);
	return 0;


}

