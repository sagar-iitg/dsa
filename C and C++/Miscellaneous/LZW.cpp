#include<bits/stdc++.h>
using namespace std;


void shift_str(string &str,int l,int cp_l)
{
    int i=cp_l,j=l;
    while(str[i]!='\0')
    {
        str[j] = str[i];
        i++;
        j++;
    }
    str[j]='\0';
}


string LWZ(string &str)
{
    int n = str.length();
    if(n==1 || n==0)
    {
        return str;
    }

    int i=1,j=0,cp_l=0,l=0,count=1;

    while(str[i]!='\0')
    {
        if(str[i]==str[i-1])
        {
            count++;
        }

        else if(count>1)
        {
            str[j+1] = count + '0';

            l = j+2;
            cp_l = i;


            //cout<<str<<"  ";

            shift_str(str,l,cp_l);
            count = 1;
            i=j+2;
            j=i;
            //cout<<str<<endl;
        }

        i++;
    }
    if(count>1)
    {
        str[j+1] = count + '0';
        l=j+2;
        cp_l = i;
        shift_str(str,l,cp_l);


    }

    return str;

}


int main()
{
    string str="aaabbcccc";
    cout<<str<<endl;
    string str_mod = LWZ(str);
    cout<<str<<endl;
    return 0;


}
