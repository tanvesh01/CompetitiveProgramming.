#include <bits/stdc++.h>
using namespace std;
int v[1000001], cc[1000001], co = 0;
vector<int> a[1000001];
void dfs(int n)
{
    int child;
    v[n] = 1;
    cc[n] = co;
    for (int i = 0; i < a[n].size(); i++)
    {
        child = a[n][i];
        if (v[child] == 0)
        {
            dfs(child);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n, k;
    cin >> t;
    while (t--)
    {
        memset(v, 0, sizeof(v));
        int t1, t2;
        vector<pair<int, int>> p;
        cin >> n >> k;
        for (int i = 1; i <= n; i++)
        {
            a[i].clear();
        }
        string s;
        co = 0;
        for (int i = 0; i < k; i++)
        {
            cin >> t1 >> s >> t2;
            if (s == "=")
            {
                a[t1].push_back(t2);
                a[t2].push_back(t1);
            }
            else
            {
                p.push_back(make_pair(t1, t2));
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if (v[i] == 0)
            {
                dfs(i);
                co++;
            }
        }

        bool res = true;
        for (int i = 0; i < p.size(); i++)
        {
            int a = p[i].first;
            int b = p[i].second;
            if (cc[a] == cc[b])
            {
                res = false;
                break;
            }
        }
        if (res == true)
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
    }
}