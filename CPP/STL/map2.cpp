#include<iostream>
#include<unordered_map>
#include<map>

using namespace std;

int main()
{
    int arr[] = { 1, 5, 7, -1, 5 ,7,7,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 6;

    unordered_map <int,int> um;
    map <int,int> m;

    for(int i=0;i<n;i++)
    {

        m[arr[i]]++;
        um[arr[i]]++;

    }


    um.insert(make_pair(2, 3));

    cout<<"unordered-map"<<endl;

    for(auto i:um){
      cout<<i.first<<"  "<<i.second<<"  "<<"\n";
    }

    int key=0;

     if (um.find(key) != um.end())
        cout << key << " found\n\n";
     else
        cout << " not Found " << key << "\n\n";

        return 0;
}
