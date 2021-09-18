#include<bits/stdc++.h>
using namespace std;



const string one[] = { "", "one ", "two ", "three ", "four ",
                 "five ", "six ", "seven ", "eight ",
                 "nine ", "ten ", "eleven ", "twelve ",
                 "thirteen ", "fourteen ", "fifteen ",
                 "sixteen ", "seventeen ", "eighteen ",
                 "nineteen " };



const string ten[] = { "", "", "twenty ", "thirty ", "forty ",
                 "fifty ", "sixty ", "seventy ", "eighty ",
                 "ninety " };





string num2words(int n,string s){
    string str="";
    if(n>19){
        str=str+ten[n/10]+one[n%10];

    }

}

 string convertToWords(unsigned long long int n){

    string out;
    out+=num2words( (n/100000000),"crore" );
    out+=


 }

int main(){

    unsigned long long int  n = 438237764;
    cout << convertToWords(n) << endl;

    return 0;
}
