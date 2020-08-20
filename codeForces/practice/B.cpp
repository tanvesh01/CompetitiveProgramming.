#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE

    // For getting input from input.txt file
    freopen("input1.txt", "r", stdin);

    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);

#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, t1;
    cin >> t;
    t1 = 1;
    while (t--)
    {
        long long int n, na = 0, nb = 0;
        cin >> n;
        char s[n];
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'A')
            {
                na++;
            }
            else
            {
                nb++;
            }
        }
        cout << "Case #" << t1 << ": ";
        if (abs(na - nb) == 1)
        {
            cout << "Y"
                 << "\n";
        }
        else
        {
            cout << "N"
                 << "\n";
        }
        t1++;
    }
}