#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int t, x, temp, n, count;
    cin >> t;
    while (t--)
    {
        count = 0;
        vector<long long int> v;
        cin >> n >> x;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        while (x < v[0])
        {
            x = x * 2;
            count++;
        }
        cout << count + n << "\n";
    }
}