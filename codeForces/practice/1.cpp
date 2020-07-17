#include <bits/stdc++.h>
#define ll long long
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
        int n, temp, prev = -1, pn = -1;
        cin >> n;
        vector<int> v, ans;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        for (int i = 0; i < v.size(); i++)
        {
            //cout << pn << " " << v[i] << "\n";
            if (v[i] > pn)
            {
                if (prev == -1)
                {
                    ans.push_back(i);
                    prev = -1;
                }
                prev = 1;
                pn = v[i];
            }
            else
            {
                prev = -1;
                pn = v[i];
            }
        }
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
}