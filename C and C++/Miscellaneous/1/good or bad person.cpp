#include<iostream>
using namespace std;
int main()
{

    int T; cin>>T;





    while(T--)
    {

        int N; cin>>N;  // n<-denoting the length of the string
        int K; cin>>K;
        string s;   cin>>s;
        int cap=0,small=0;

        for(int i=0; i<N;i++)
        {

            char x=s[i];
            int p=int(x); //ASCII CODE

            //65 to 90<-  capital letter
            //97 to 122 <- small letter

            if(p>=65 && p<=90)
                cap++;
            else
                small++;
        }


        cout<<" No. of Capital Letter :"<<cap<<endl;
         cout<<" No. of Small Letter :"<<small<<endl;

        if(cap==small)
        {

            if(K>=cap)
                 cout<<"both"<<endl;
            else
                cout<<"none"<<endl;
        }
        else if(cap<small)
        {
            if(K>=small)
                cout<<"both";
            else if(K<=cap)
                cout<<"none"<<endl;
            else
                cout<<"chef";


        }
        else
        {

            if(K>=cap)
                cout<<"both"<<endl;
            else if(K<=small)
                cout<<"none"<<endl;
            else
                cout<<"brother"<<endl;
        }


    }






}
