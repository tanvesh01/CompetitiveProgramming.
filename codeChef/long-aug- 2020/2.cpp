#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        long long int c, r, t1, ansc = 0, ansr = 0;
        cin >> c >> r;
        t1 = c / 9;
        if (t1 == 0)
        {
            ansc = 1;
        }
        else if (c - (t1 * 9) == 0)
        {
            ansc = t1;
        }
        else if (c - (t1 * 9) != 0)
        {
            ansc = t1 + 1;
        }
        t1 = r / 9;
        if (t1 == 0)
        {
            ansr = 1;
        }
        else if (r - (t1 * 9) == 0)
        {
            ansr = t1;
        }
        else if (r - (t1 * 9) != 0)
        {
            ansr = t1 + 1;
        }
        if (ansr <= ansc)
        {
            cout << "1"
                 << " " << ansr << "\n";
        }
        else
        {
            cout << "0"
                 << " " << ansc << "\n";
        }
    }
}