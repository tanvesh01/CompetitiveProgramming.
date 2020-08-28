#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, sum, wt;
    cin >> sum >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // cout << sum << "\n";
    long long int t[n + 1][sum + 1];
    for (int i = 0; i < sum + 1; i++)
    {
        t[0][i] = 0;
    }
    for (int i = 1; i < n + 1; i++)
    {
        t[i][0] = 1;
    }
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < sum + 1; j++)
        {
            if (a[i - 1] <= j)
            {
                t[i][j] = t[i][j - a[i - 1]] + t[i - 1][j];
            }
            else
            {
                t[i][j] = t[i - 1][j];
            }
        }
    }
    cout << t[n][sum] << "\n";
    // for (int i = 0; i < n + 1; i++)
    // {
    //     for (int j = 0; j < sum + 1; j++)
    //     {
    //         cout << t[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
}