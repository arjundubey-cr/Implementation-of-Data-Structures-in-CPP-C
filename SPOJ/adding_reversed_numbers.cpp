#include <iostream>
using namespace std;
long long int reverse_number(long long int a)
{
    long long int ans = 0;
    while (a > 0)
    {
        int rem = a % 10;
        ans = ans * 10 + rem;
        a = a / 10;
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b;
        cin >> a >> b;
        a = reverse_number(a);
        b = reverse_number(b);
        cout << reverse_number(a + b) << "\n";
    }
}