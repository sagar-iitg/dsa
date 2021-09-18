#include<iostream>
#include<stack>
using namespace std;


int main()
{


        stack <pair <int,int>> s;




        s.push({5,6});
        s.push({2,3});
        s.push({3,4});
        s.push({7,9});
          cout<<s.empty();



        cout<<s.size();
        cout<<endl;
        for(int i=0; i<s.size(); i++)
        {
            cout<<i<<endl;

            cout<<s.top().first<<" ";
            s.pop();

        }



}
