#include<iostream>
#include<string>
using namespace std;
int main()
{

	string str = "geeksforgeeks is for";
    cout << str << endl;
    cout<<str.capacity()<<" "<<str.length()<<endl;

    str.resize(13);

    cout << str << endl;
    cout<<str.capacity()<<" "<<str.length()<<endl;
	str.shrink_to_fit();
    cout<<str.capacity()<<" "<<str.length()<<endl;
    return 0;

}
