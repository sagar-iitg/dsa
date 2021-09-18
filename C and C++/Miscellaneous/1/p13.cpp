#include<iostream>
using namespace std;
void print(char *c)
{
    int i=0;
    while(c[i]!='\0')
    {
        cout<<c[i];
        c=c+1;

    }

}

int main()
{

    char c[]="sagarkumar@iitg.ac.in";
    print(c);
}
