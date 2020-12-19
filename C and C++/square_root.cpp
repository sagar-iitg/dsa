#include<iostream>
using namespace std;



int floor_sqrt(int n){

    if(n==0 || n==1){
        return  n;
    }
    if(n<0){
        cout<<"Please Enter Positive no\n";
        return -1;
    }
    int begin=0;
    int end=n;
    int ans;

    while(begin<=end){

        int mid=begin+(end-begin)/2;

        if(mid*mid==n){
            return mid;
        }
        else if(mid *mid<n){
            begin=mid+1;
            ans=mid;
        }
        else if(mid*mid >n){
            end=mid-1;

        }



    }
    return ans;
}

int main(){


    int x;
    while(true){

        printf("Enter no x else to exit from program please enter -1 \n");
        
        cin>>x;
        if(x==-1){
            exit(1);
        }

        cout<<floor_sqrt(x);
        cout<<endl;

    }
   
    return 0;


}
