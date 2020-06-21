#include <bits/stdc++.h>
using namespace std;
int v[100001], dist[100001];
vector<int> a[100001];

void dfs(int src)
{
    queue<int> q;
    q.push(src);
    v[src] = 1;
    dist[src] = 0;
    while (!q.empty())
    {
        int curr = q.front();
        q.pop();
        for (int i = 0; i < a[curr].size(); i++)
        {
            int child = a[curr][i];
            if (v[child] == 0)
            {
                q.push(child);
                v[child] = 1;
                dist[child] = dist[curr] + 1;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        memset(v, 0, sizeof(v));
        int n, m, t1, t2;
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
        {
            dist[i] = 0;
            a[i].clear();
        }
        for (int i = 0; i < m; i++)
        {
            cin >> t1 >> t2;
            a[t1].push_back(t2);
            a[t2].push_back(t1);
        }
        dfs(1);
        cout << dist[n] << "\n";
    }
}