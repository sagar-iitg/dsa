#include <bits/stdc++.h>
using namespace std;
// Given a number n,
// print all primes smaller than or equal to n.
//time complexity O(n*log(log(n)))

class sol
{

public:
    int n;

    void SieveOfEratosthenes(int n)
    {
        bool prime[n + 1];
        memset(prime, true, sizeof(prime));

        for (int i = 2; i * i <= n; i++)
        {
            if (prime[i] == true)
            {
                for (int j = i * i; j <= n; j = j + i)
                    prime[j] = false;
            }
        }
        for (int i = 2; i <= n; i++)
        {
            //cout<<"sagar";
            if (prime[i])
            {
                cout << i << " ";
            }
        }
    }
};

int main()
{
    sol obj;
    obj.n = 30;

    cout << "-------------" << endl;
    cout << "prime no between 1 to "
         << " is :  " << endl;
    obj.SieveOfEratosthenes(obj.n);
    cout << endl
         << "-------------" << endl;
    return 0;
}