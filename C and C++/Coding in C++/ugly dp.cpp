#include<iostream>
using namespace std;




int ugly_no(int n){

    int nm2=2,nm3=3,nm5=5;
    int i2=0,i3=0,i5=0;

    int ugly[n];
    ugly[0]=1;
    int mn=1;


    for(int i=1; i<n; i++){
             mn=min(nm2,min(nm3,nm5));

            ugly[i]=mn;

            if(mn == nm2){

                i2=i2+1;
                nm2=ugly[i2]*2;


            }

            if(mn==nm3){

                i3=i3+1;
                nm3=ugly[i3]*3;

            }


            if(mn==nm5){

                i5=i5+1;
                nm5=ugly[i5]*5;

            }






    }


    return (mn);


}


int main(){

    cout<<ugly_no(10);
    cout<<endl;



}
