#include <bits/stdc++.h> 

using namespace std; 

// Delete L to R element 
vector<int> deleteElement(int A[], int L, int R, int N) 
{ 
	vector<int> B; 

	for (int i = 0; i < N; i++) 
		if (i <= L || i >= R) 
		B.push_back(A[i]);		 
	
	return B; 
} 

// main Driver 
int main() 
{ 
	int A[] = { 3, 5, 3, 4, 9, 3, 1, 6, 3, 11, 12, 3 }; 
	int L = 2, R = 7; 
	int n = sizeof(A) / sizeof(A[0]); 
	vector<int> res = deleteElement(A, L, R, n); 
	for (auto x : res) 
		cout << x << " "; 
	return 0; 
} 
