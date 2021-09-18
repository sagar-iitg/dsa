#include <iostream>
#include<vector>

using namespace std;
// generate non-empty subarrays

// iterative method
vector<vector<int>> v;

void generate_all_subarrays_iterative(int *arr, int n)
{

    for (int i = 0; i < n; i++)
    {
        //int first=arr[i];
        //cout<<first<<endl;
        
        for (int j = i; j < n; j++)
        {
            vector<int> v1;
            for (int k = i; k <= j; k++)
            {
                v1.push_back(arr[k]);
                cout << arr[k] << " ";
            }
            v.push_back(v1);
            cout << endl;
        }
        
    }
}













int main()
{
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"Print all subarray"<<endl;
    generate_all_subarrays_iterative(arr,n);
    cout<<"Print all subarray and store all subarray in 2d vector"<<endl;
    for (int i = 0; i < v.size(); i++) { 
        for (int j = 0; j < v[i].size(); j++) 
            cout << v[i][j] << " "; 
        cout << endl; 
    } 
   

    return 0;
}