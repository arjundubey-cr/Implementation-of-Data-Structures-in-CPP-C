#include <iostream>
using namespace std;
void solve()
{
    long long int x, number_zeros = 0;
    cin >> x;
    while (x / 5 != 0)
    {
        long long int rem = x / 5;
        x = x / 5;
        number_zeros += rem;
    }
    cout << number_zeros << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}