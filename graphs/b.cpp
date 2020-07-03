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
    memset(v, 0, sizeof(v));
    memset(dist, 0, sizeof(v));
    int e, n, m, t1, t2;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> t1 >> t2;
        a[t1].push_back(t2);
        a[t2].push_back(t1);
    }

    cin >> e;
    while (e--)
    {
        memset(v, 0, sizeof(v));
        memset(dist, 0, sizeof(v));
        int u, v1, count = 0;
        cin >> u >> v1;
        dfs(u);
        for (int i = 0; i < n; i++)
        {
            if (dist[i] == v1)
            {
                count++;
            }
        }
        cout << count << "\n";
    }
}