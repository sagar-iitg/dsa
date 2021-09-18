#include<iostream>
#include<map>
using namespace std;
int main()
{

    map<int,string> customer;
    customer[100]="nnnn";
    customer[101]="knn";
    map<int,string> c{{100,"sagar"},{101,"kumar"}};
    map<int,string>::iterator p=c.begin();
    while(p!=c.end())
    {

        cout<<p->first<<" "<<p->second<<endl;
        p++;

    }



}

