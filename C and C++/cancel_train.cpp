#include<iostream>
using namespace std;

int solve(int bottom[],int n,int left[],int m){

    int counter=0;
    int i=0,j=0;
    while(i<n && j<m){

        if(bottom[i] > left[j]){

            j++;
        }
        else if(bottom[i] < left[j]){
            i++;
        }
        else{

            j++;
            i++;
            counter++;
        }

    }
    return counter;

}




/*
int solve(int bottom[],int n,int left[],int m){

    int counter=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(bottom[i]==left[j]){
                counter++;

            }
        }
    }
    return counter;
}*/

/*
int solve(int bottom[],int n,int left[],int m){

    int counter=0;
    for(int i=0;i<n;i++){
        int search=bottom[i];
        int begin=0;
        int end=m-1;

        while(begin<=end){
            int mid=(begin+ ((end-begin)/2) );

            if(left[mid]==search){
                counter++;
                break;
            }
            else if(left[mid]< search){
                begin=mid+1;
            }
            else{
                end=mid-1;

            }


        }
        
    }
    return counter;
}
*/



int main(){


    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int bottom[n];
        int left[m];
        for(int i=0;i<n;i++){
            cin>>bottom[i];

        }
        for(int j=0;j<m;j++){
            cin>>left[j];
            
        }

        cout<<"ans is :"<<solve(bottom,n,left,m)<<endl;




    }
}