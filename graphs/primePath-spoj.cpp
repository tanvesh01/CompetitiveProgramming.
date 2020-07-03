#include <bits/stdc++.h>
using namespace std;
int v[100001], dist[100001];
vector<int> a[100001], prime;
int n, m;
void bfs(int src)
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

bool isValid(int i, int j)
{
    int numi, numj, count = 0;
    for (int k = 0; k < 4; k++)
    {
        numi = i % 10;
        i = i / 10;
        numj = j % 10;
        j = j / 10;
        if (numj == numi)
        {
            count++;
        }
    }
    if (count == 3)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

void makeGraph()
{
    for (int i = 1000; i <= 9999; i++)
    {
        if (isPrime(i))
        {
            prime.push_back(i);
        }
    }
    for (int i = 0; i < prime.size(); i++)
    {
        for (int j = i + 1; j <= prime.size(); j++)
        {
            if (isValid(prime[i], prime[j]))
            {
                //cout << prime[i] << " " << prime[j] << "\n";
                a[prime[i]].push_back(prime[j]);
                a[prime[j]].push_back(prime[i]);
            }
        }
    }
}

int main()
{
    makeGraph();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        memset(v, 0, sizeof(v));
        cin >> n >> m;
        for (int i = 1000; i <= 9999; i++)
        {
            dist[i] = -1;
        }
        bfs(n);
        if (dist[m] == -1)
        {
            cout << "Impossible"
                 << "\n";
        }
        else
        {
            cout << dist[m] << "\n";
        }
    }
}