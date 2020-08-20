#include <bits/stdc++.h>
using namespace std;
bool isValid(string in, string op, int s, int f)
{
    if (in[f] == 'N' || op[s] == 'N')
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
#ifndef ONLINE_JUDGE

    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);

    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);

#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, t1, n;
    cin >> t;
    t1 = 1;
    while (t--)
    {
        cin >> n;
        char a[n + 1][n + 1];
        string in = "-", op = "-", temp;
        cin >> temp;
        in = in + temp;
        cin >> temp;
        op = op + temp;
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = i; j < n + 1; j++)
            {
                if (i == j)
                {
                    a[j][i] = 'Y';
                }
                else if (a[j - 1][i] == 'N')
                {
                    a[j][i] = 'N';
                }
                else if (isValid(in, op, j, j - 1))
                {
                    a[j][i] = 'Y';
                }
                else
                {
                    a[j][i] = 'N';
                }
            }
            for (int k = i + 1; k < n + 1; k++)
            {
                if (a[i][k - 1] == 'N')
                {
                    a[i][k] = 'N';
                }
                else if (isValid(in, op, k - 1, k))
                {
                    a[i][k] = 'Y';
                }
                else
                {
                    a[i][k] = 'N';
                }
            }
        }
        cout << "Case #" << t1 << ":"
             << "\n";
        t1++;
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j < n + 1; j++)
            {
                cout << a[i][j];
            }
            cout << "\n";
        }
    }
}