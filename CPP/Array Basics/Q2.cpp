#include<iostream>
using namespace std;





	int countTriplet(int arr[], int n)
	{
	    // Your code goes here
	    int temp;
	    int found = 0;
	    for (int i=0;i<n;i++){
	        for(int j = i+1;j<n;j++){
	            temp = arr[i]+arr[j];
	            for(int k = 0;k<n;k++){
	                if(temp==arr[k])
	                found+=1;
	            }
	        }
	    }
	    return found;
    }

    int main(){

        int arr[]={1, 1, 1, 2, 2};

        int n=sizeof(arr)/sizeof(arr[0]);
        cout<<endl;
        cout<<countTriplet(arr,n)<<endl;
        cout<<endl;

    }


    /*

    1,5,3,2

    sorting
                1,2,3,5  nlog(n)
                1,2,3,4,5
                
                for(int i=0;i<n;i++){

                    int x=arr[i]+arr[i+1]

                    for(int j=i+2;j<n;j++){
                        if(x==arr[j]){
                            c++;
                        }

                    }
                }

                vector<int> v;

                v.push_back(x);
                v.size();
                for(int i=0;i<v.size();i++){
                    
                    cout<<v[i]<<endl;
                
                }
            






    */