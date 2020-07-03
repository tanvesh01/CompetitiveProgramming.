#include <bits/stdc++.h>
using namespace std;
int v[100001], c = 1;
vector<int> a[100001];
const unsigned int M = 1000000007;
void dfs(int n)
{
    int child;
    v[n] = 1;
    for (int i = 0; i < a[n].size(); i++)
    {
        child = a[n][i];
        if (v[child] != 1)
        {
            c++;
            dfs(child);
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
        int n, e, t1, t2;
        cin >> n >> e;
        for (int i = 1; i <= n; i++)
        {
            a[i].clear();
        }
        while (e--)
        {
            cin >> t1 >> t2;
            a[t1].push_back(t2);
            a[t2].push_back(t1);
        }
        long long int count = 0, m = 1;
        for (int i = 1; i <= n; i++)
        {
            if (!v[i])
            {
                dfs(i);
                m = (c * m) % M;
                c = 1;
                count++;
            }
        }
        cout << count << " " << m << "\n";
    }
}