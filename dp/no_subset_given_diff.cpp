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
        int n, sum = 0, count = 0, diff;
        cin >> n;
        // cin >> diff;
        vector<int> v;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum = sum + a[i];
        }
        // cout << sum << "\n";
        int t[n + 1][sum + 1];
        for (int i = 0; i < sum + 1; i++)
        {
            t[0][i] = 0;
        }
        for (int i = 0; i < n + 1; i++)
        {
            t[i][0] = 1;
        }
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j < sum + 1; j++)
            {
                if (a[i - 1] <= j)
                {
                    t[i][j] = (t[i - 1][j - a[i - 1]] + t[i - 1][j]);
                }
                else
                {
                    t[i][j] = t[i - 1][j];
                }
            }
        }
        // for (int i = 0; i < n + 1; i++)
        // {
        //     for (int j = 0; j < sum + 1; j++)
        //     {
        //         cout << t[i][j] << " ";
        //     }
        //     cout << "\n";
        // }
        int num = (sum - diff) / 2;
        count = t[n][num];
        // for (int i = 0; i < sum + 1; i++)
        // {
        //     if (t[n][i] == )
        //     {
        //         v.push_back(i);
        //     }
        // }
        // for (int i = 0; i < v.size(); i++)
        // {
        //     cout << ((2 * v[i]) + diff) << "\n";
        //     if (sum == ((2 * v[i]) + diff))
        //     {
        //         count++;
        //     }
        // }
        cout << count << "\n";
    }
}