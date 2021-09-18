#include<iostream>
#include<string>
using namespace std;

int main()
{

	string str1 = "geeksforgeeks is for geeks";
    string str2 = "geeksforgeeks rocks";
    char ch[80];

	str1.copy(ch,13,0);

	cout << ch << endl << endl;


	cout << "The 1st string before swapping is : ";
	cout << str1 << endl;
	cout << "The 2nd string before swapping is : ";
	cout << str2 << endl;


	str1.swap(str2);


	cout << "The 1st string after swapping is : ";
	cout << str1 << endl;
	cout << "The 2nd string after swapping is : ";
	cout << str2 << endl;

	return 0;

}
