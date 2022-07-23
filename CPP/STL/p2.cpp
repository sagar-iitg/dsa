#include<iostream>
#include<list>
using namespace std;
int main()
{

       list <int> l1{11,22,33};

    //iterator<-pointer

       list <string>l2{"India","Dhaka"};
      l2.push_back("Dhanwar");
     l2.push_front("Giridih");
     list <int> ::iterator p=l1.begin();
     while(p!=l1.end())
     {

        cout<<*p<<" ";
        p++;

     }
        cout<<"Total values in list: "<<l1.size();


        list <string> ::iterator p2=l2.begin();
        cout<<"Total values in list :"<<l2.size();

        while(p2!=l2.end())

        {
            cout<<*p2<<" ";
            p2 ++;

        }



}
