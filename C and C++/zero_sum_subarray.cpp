#include<iostream>
#include<vector>
using namespace std;

// Brute Force approach
//time Complexity O(n2)
// Space Complexity  O(1)

int zero_sum_subarray(vector<int> v,int target){
    
    int n=v.size();
    int c=0;
    
    for(int i=0;i<n;i++){
        int sum=v[i];
        int index1=i;
        for(int j=i+1;j<n;j++){
            sum=sum+v[j];
            int index2=j;
            if(sum==target){
                c=c+1;
                cout<<"Subarray found from Index "<<index1<<" to "<<index2<<endl;
                

            }

        }
        sum=0;
    }
    cout<<endl<<"Count zero_sum_subarray :"<<" ";
    return c;

}

// better Approach 
// Hashing
 



int main(){

    vector<int> v={6, 3, -1, -3, 4, -2, 2,
             4, 6, -12, -7};
    cout<<zero_sum_subarray(v,0);
    return 0;
}
