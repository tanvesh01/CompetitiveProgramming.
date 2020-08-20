#include <bits/stdc++.h>
using namespace std;
long long int t[105][100005];
long long int f(long long int wt[], long long int v[], long long int w, long long int n)
{
    if (w == 0 || n == 0)
    {
        return 0;
    }
    if (t[n][w] != -1)
    {
        return t[n][w];
    }
    // cout << wt[n] << "\n";
    if (wt[n] <= w)
    {
        return t[n][w] = max(v[n] + f(wt, v, w - wt[n], n - 1), f(wt, v, w, n - 1));
    }
    else
    {
        return t[n][w] = f(wt, v, w, n - 1);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    memset(t, -1, sizeof(t));
    long long int n, w;
    cin >> n >> w;
    long long int wt[n + 1], val[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> wt[i] >> val[i];
    }
    cout << f(wt, val, w, n) << "\n";
}