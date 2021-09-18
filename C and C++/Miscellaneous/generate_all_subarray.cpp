#include <iostream>
using namespace std;
// generate non-empty subarrays

// iterative method
void generate_all_subarrays_iterative(int *arr, int n)
{

    for (int i = 0; i < n; i++)
    {
        //int first=arr[i];
        //cout<<first<<endl;
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
}
//recursion method
void generate_all_subarrays_recursion_util(int arr[], int n, int start, int end)
{

    // stop if we reached the end of the array
    
    if(end==n){
        return;
    }

    else if(start > end){
        generate_all_subarrays_recursion_util(arr,n,0,end+1);

    }

    else{
        for(int i=start;i<=end;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        generate_all_subarrays_recursion_util(arr,n,start+1,end);
    }

}

void generate_all_subarrays_recursion(int arr[], int n)
{

    generate_all_subarrays_recursion_util(arr, n, 0, 0);
}

int main()
{
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    //generate_all_subarrays_iterative(arr,n);
    generate_all_subarrays_recursion(arr, n);

    return 0;
}