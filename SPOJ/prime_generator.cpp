#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(long long int num)
{
    if (num == 1)
    {
        return false;
    }
    int lim = pow(num, 0.5) + 1;
    // cout << "Function called" << lim << "";
    for (int i = 2; i < lim; i++)
    {
        if (num % i == 0)
        {
            // cout << num << " -- " << i << "\n";
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int m, n;
        cin >> m >> n;
        for (long long int i = m; i <= n; i++)
        {
            // cout << isPrime(i) << " " << i << "\n";
            if (isPrime(i))
            {
                cout << i << endl;
            }
        }
    }
}