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
        long long int p, h;
        cin >> h >> p;
        if (2 * p > h)
        {
            cout << "1"
                 << "\n";
        }
        else
        {
            cout << "0"
                 << "\n";
        }
    }
}