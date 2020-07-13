#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int max = -1;
        map<char, int> m;
        string s, c;
        char n;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            m[s[i]]++;
        }
        for (auto i = m.begin(); i != m.end(); i++)
        {
            if (max < i->second)
            {
                max = i->second;
                n = i->first;
            }
        }
        if (n == 'R')
        {
            n = 'P';
        }
        else if (n == 'P')
        {
            n = 'S';
        }
        else
        {
            n = 'R';
        }
        for (int i = 0; i < s.length(); i++)
        {
            cout << n;
        }
        cout << "\n";
    }
}