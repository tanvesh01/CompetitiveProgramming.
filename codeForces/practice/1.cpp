#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (ll i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll l, r, m, b, c, a, temp;
        cin >> l >> r >> m;
        bool is = false;
        ll rp = r;
        for (ll i = l; i <= r; i++)
        {
            c = i, b = rp;
            temp = m + c - b;
            if ((isPrime(temp) == false || (temp >= l && temp <= r)) && temp != 0)
            {
                for (ll j = l; j <= r; j++)
                {
                    if (temp % j == 0)
                    {
                        a = j;
                        is = true;
                        break;
                    }
                }
                if (is)
                {
                    break;
                }
            }
            rp--;
        }
        cout << a << " " << b << " " << c << "\n";
    }
}