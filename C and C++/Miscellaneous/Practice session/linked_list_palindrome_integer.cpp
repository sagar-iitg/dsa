#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = { 1, 7, 2, 4, 8, 3 };
    int l = sizeof(a) / sizeof(a[0]);
    reverse(a, a + l);
    for (int i = 0; i < l; i++)
        cout << a[i] << " ";
    return 0;

}
