#include <bits/stdc++.h>
using namespace std;
long long binpow(long long a, long long b, long long m)
{
    a %= m;
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    long long int M = 1000000007;
    cin >> t;
    while (t--)
    {
        long long int n, temp, num;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        for (long long int i = n - 1; i >= 0; i--)
        {
            cout << binpow(2, i, M) << " ";
        }
        cout << "\n";
    }
}