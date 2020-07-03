#include <bits/stdc++.h>
using namespace std;
long long int N, M;
int v[1001][1001];
char a[1001][1001];
vector<int> len;
vector<string> str;
string s = "", t;
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

void dfs(int x, int y, int l, string st)
{
    v[x][y] = 1;
    if (a[x][y] != 'B')
    {
        if (isValid(x - 1, y))
        {
            t = "U";
            s = s + t;
            dfs(x - 1, y, l + 1, st + t);
        }
        if (isValid(x, y + 1))
        {
            t = "R";
            s = s + t;
            dfs(x, y + 1, l + 1, st + t);
        }
        if (isValid(x + 1, y))
        {
            t = "D";
            s = s + t;
            dfs(x + 1, y, l + 1, st + t);
        }
        if (isValid(x, y - 1))
        {
            t = "L";
            s = s + t;
            dfs(x, y - 1, l + 1, st + t);
        }
    }
    else
    {
        v[x][y] = 0;
        str.push_back(st);
        len.push_back(l);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> M;
    int u, k;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= M; j++)
        {

            cin >> a[i][j];
            if (a[i][j] == 'A')
            {
                u = i;
                k = j;
            }
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
    dfs(u, k, 0, "");
    if (len.size() == 0)
    {
        cout << "NO"
             << "\n";
    }
    else
    {
        cout << "YES"
             << "\n";
        sort(len.begin(), len.end());
        sort(str.begin(), str.end());
        cout << len[1] << "\n";
        cout << str[1] << "\n";
    }
}