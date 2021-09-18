#include<iostream>
using namespace std;


int ugly(int x){


    if(x==1){
        return 1;
    }
    if(x<=0){
        return 0;
    }
    if(x%2==0){
        return (ugly(x/2));
    }
    if(x%3==0){
        return (ugly(x/3));
    }
    if(x%5==0){
        return (ugly(x/5));
    }

    return 0;

}



int ugly_no(int n){

    int i=1;
    int c=1;

    while(n > c){

        i++;
        if(ugly(i)){
            c++;

        }

    }
    return i;


}


int main(){

    cout<<ugly_no(150);
    cout<<endl;



}
