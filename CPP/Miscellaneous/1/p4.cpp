//#include<stdafx.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{

    //c++STL
    vector<int> A={11,2,3,14};
    cout<<A[1]<<endl;
    sort(A.begin(),A.end());  //O(Nlog(N))

}
