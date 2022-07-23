#include<bits/stdc++.h>
using namespace std;



int minimum_divisor(vector<int> &v,int threshold){


    int n=v[v.size()-1];

    //cout<<v.size();

    for(int i=1;i<n;i++){

            float sum=0.0;
            for(int j=0;j<v.size();j++){

                    float div=ceil(v[j]/i);
                    cout<<div<<" ";
                    sum=sum+div;


            }
            cout<<endl<<i<<" "<<sum<<endl;
            if(sum<=threshold){
                 return i;
            }

    }

    return 0;


}
int main(){


    //vector<int> v={1,5,7};
    vector<int> v={1,2,9,5};
    int threshold=6;
    cout<<minimum_divisor(v,threshold);





}
