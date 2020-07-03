#include <bits/stdc++.h>
using namespace std;
int a[100005];

int main()
{
    int t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        set<int> num;
        int ans = 0, x;
        for (int i = 0; i < n; ++i)
        {
            cin >> x;
            if (x != m)
                num.insert(x), ++ans;
        }

        int mex = 1;
        while (num.count(mex))
            ++mex;

        if (mex != m)
            ans = -1;
        cout << ans << "\n";
    }
    return 0;
}