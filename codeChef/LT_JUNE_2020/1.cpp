#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int t, s, n;
    cin >> t;
    while (t--)
    {
        long long int c1 = 0, ce = 0, t1, t2;
        cin >> s >> n;
        if (s % 2 != 0)
        {
            s = s - 1;
            c1++;
        }
        if (s < n && s != 0)
        {
            ce++;
        }
        else
        {
            t1 = s / n;
            s = s - (t1 * n);
            ce = ce + t1;
            if (s > 0)
            {
                ce++;
            }
        }
        cout << c1 + ce << "\n";
    }
}