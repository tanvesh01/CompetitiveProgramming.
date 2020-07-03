#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int t, k;
    cin >> t;
    while (t--)
    {
        int count = 1;
        cin >> k;
        char a[8][8];
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                a[i][j] = 'X';
            }
        }
        a[0][0] = 'O';
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (a[i][j] != 'O')
                {
                    if (count < k)
                    {
                        a[i][j] = '.';
                        count++;
                    }
                }
            }
        }
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cout << a[i][j];
            }
            cout << "\n";
        }
        cout << "\n";
    }
}
