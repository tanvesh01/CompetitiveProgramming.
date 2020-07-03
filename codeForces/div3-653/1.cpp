#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, x, t1, y, t2;
        cin >> x >> y >> n;
        t2 = (x * (n / x)) + y;
        t1 = x * ((n / x) - 1) + y;
        if (t2 > n)
        {
            cout << t1 << "\n";
        }
        else
        {
            cout << t2 << "\n";
        }
    }
}