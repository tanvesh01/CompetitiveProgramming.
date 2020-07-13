#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int n, q;
    cin >> n >> q;
    long long int a[n + 1], t[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> t[i];
    }
    while (q--)
    {
        long long int c, b, d;
        cin >> c;
        if (c == 1)
        {
            cin >> b >> d;
            t[b] = d;
        }
        else
        {
            cin >> d >> b;
            long long int temp = a[b], cost = t[b], flag = -1;
            // cout << cost << "----s"
            //      << "\n";
            if (b < d)
            {
                for (int i = b; i <= d; i++)
                {
                    if (a[i] > temp)
                    {
                        temp = a[i];
                        cost = cost + t[i];
                        if (i == d)
                        {
                            flag = 1;
                        }
                    }
                }
                if (flag == 1)
                {
                    cout << cost << "\n";
                }
                else
                {
                    cout << -1 << "\n";
                }
            }
            else if (d < b)
            {
                for (int i = b; i >= d; i--)
                {
                    if (a[i] > temp)
                    {
                        temp = a[i];
                        cost = cost + t[i];
                        if (i == d)
                        {
                            flag = 1;
                        }
                    }
                }
                if (flag == 1)
                {
                    cout << cost << "\n";
                }
                else
                {
                    cout << -1 << "\n";
                }
            }
            else
            {
                cout << t[b] << "\n";
            }
        }
    }
}
