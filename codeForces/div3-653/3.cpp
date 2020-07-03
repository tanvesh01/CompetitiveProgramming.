#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int t;
    cin >> t;
    while (t--)
    {
        int num, count = 0;
        cin >> num;
        string s;
        cin >> s;
        for (int i = 0; i < num; i++)
        {
            if (s[i] == '(')
            {
                for (int j = i + 1; j < num; j++)
                {
                    if (s[j] == ')')
                    {
                        s[j] = '.';
                        count = count + 2;
                        // s.erase(s.begin() + i);
                        // s.erase(s.begin() + j);
                        break;
                    }
                }
            }
        }
        cout << (num - count) / 2 << "\n";
    }
}