#include<bits/stdc++.h>
#define MERGE_SORT_THRESHOLD 5
using namespace std;

int binarySearch(vector<int> &a, int item, int low, int high)
{

    if (high <= low)
        return (item > a[low])?  (low + 1): low;	

    int mid = (low + high)/2;

    if(item == a[mid])
        return mid+1;

    if(item > a[mid])
        return binarySearch(a, item, mid+1, high);
    return binarySearch(a, item, low, mid-1);
}

void insertionSort(vector<int> &arr,int l, int r)
{
    int i, loc, j, k, selected;    
    int n=arr.size();
    for (i = l+1; i <= r; ++i)
    {
        j = i - 1;
        selected = arr[i];
        loc = binarySearch(arr, selected, l, j);
        while (j >= loc)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = selected;
    }
}

void merge(vector<int> &arr, int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int> &arr, int l, int r)
{
    if (l < r)
    {
        if(r-l <= MERGE_SORT_THRESHOLD){
            insertionSort(arr,l,r);
        }else{

                int m = l+(r-l)/2;
                mergeSort(arr, l, m);
                mergeSort(arr, m+1, r);
                merge(arr, l, m, r);

        }
    }
}

void printArray(vector<int> A, int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}


int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);

    for(int i=0;i<n;i++)
        cin>>arr[i];

    printArray(arr, n);
    mergeSort(arr, 0, n-1);
    printArray(arr, n);
    return 0;
}
