#include <bits/stdc++.h>
using namespace std;
long long int N, M;
int v[1001][1001];
char a[1001][1001];

bool isValid(int x, int y)
{
    if (x < 1 || x > N || y < 1 || y > M)
    {
        return false;
    }
    if (v[x][y] == 1)
    {
        return false;
    }
    return true;
}

void dfs(int x, int y)
{
    v[x][y] = 1;
    if (isValid(x - 1, y))
    {

        dfs(x - 1, y);
    }
    if (isValid(x, y + 1))
    {
        dfs(x, y + 1);
    }
    if (isValid(x + 1, y))
    {

        dfs(x + 1, y);
    }
    if (isValid(x, y - 1))
    {

        dfs(x, y - 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> M;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= M; j++)
        {

            cin >> a[i][j];
            if (a[i][j] == '#')
            {
                v[i][j] = 1;
            }
            else
            {
                v[i][j] = 0;
            }
        }
    }
    long long int count = 0;
    for (int x = 1; x <= N; x++)
    {
        for (int y = 1; y <= M; y++)
        {
            if (v[x][y] == 0)
            {
                dfs(x, y);
                count++;
            }
        }
    }
    cout << count << "\n";
}