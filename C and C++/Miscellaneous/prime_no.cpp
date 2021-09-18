#include<iostream>
#include<chrono>
using namespace std;
using namespace std::chrono;

bool is_prime(int n){

    if(n<=1){
        return false;
    }

    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }



    }
    return true;




}

int main(){

    int n=599;
    auto start = high_resolution_clock::now(); 
    if(is_prime(n)){
        cout<<n<<" is prime no";
    }
    else{
        cout<<n<<" is not prime no";
    }
    auto stop = high_resolution_clock::now(); 
    auto duration = duration_cast<microseconds>(stop - start); 
     cout <<endl<< "Time taken by function: "
         << duration.count() << " microseconds" << endl; 
  
    return 0;
  
}