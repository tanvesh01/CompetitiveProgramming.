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
        int n, sum = 0, mn = INT_MAX;
        cin >> n;
        vector<int> v;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum = sum + a[i];
        }
        // cout << sum << "\n";
        bool t[n + 1][sum + 1];
        for (int i = 0; i < sum + 1; i++)
        {
            t[0][i] = false;
        }
        for (int i = 0; i < n + 1; i++)
        {
            t[i][0] = true;
        }
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j < sum + 1; j++)
            {
                if (a[i - 1] <= j)
                {
                    t[i][j] = (t[i - 1][j - a[i - 1]] || t[i - 1][j]);
                }
                else
                {
                    t[i][j] = t[i - 1][j];
                }
            }
        }

        for (int i = 0; i < ((sum) / 2) + 1; i++)
        {
            if (t[n][i] == true)
            {
                // cout << i << "\n";
                v.push_back(i);
            }
        }

        for (int i = 0; i < v.size(); i++)
        {
            // cout << sum - (2 * v[i]) << "\n";
            mn = min(mn, sum - (2 * v[i]));
        }

        cout << mn << "\n";
    }
}