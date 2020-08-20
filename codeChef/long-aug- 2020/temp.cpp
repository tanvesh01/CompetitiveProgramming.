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
        int temp = -1, count = 0;
        string s, p;
        cin >> s >> p;
        sort(s.begin(), s.end());
        if (p.length() == 1 || s == p)
        {
            cout << s << "\n";
        }
        else
        {
            map<char, int> m;
            for (int i = 0; i < p.length(); i++)
            {
                m[p[i]]++;
            }
            for (int i = 0; i < s.length(); i++)
            {
                // cout << s[i] << " " << m[s[i]] << "\n";
                if (m[s[i]] > 0)
                {
                    m[s[i]] = m[s[i]] - 1;
                    s.erase(s.begin() + i);
                    i--;
                }
            }
            temp = 0;
            for (int i = 0; i < s.length(); i++)
            {
                if (p[0] > s[i])
                {
                    temp = i + 1;
                }
                else if (p[0] == s[i])
                {
                    bool isl = false;
                    for (int j = 0; j < p.length() - 1; j++)
                    {
                        if (p[j] > p[j + 1])
                        {
                            isl = true;
                            break;
                        }
                        else if (p[j] < p[j + 1])
                        {
                            isl = false;
                            break;
                        }
                    }
                    if (isl)
                    {
                        temp = i;
                        break;
                    }
                    else
                    {
                        for (int j = i; j < s.length(); j++)
                        {
                            if (s[i] != s[j])
                            {
                                temp = j;
                                break;
                            }
                            else
                            {
                                temp = j + 1;
                                break;
                            }
                        }
                    }
                }
            }
            if (s.length() == 0)
            {
                cout << p << "\n";
            }
            else
            {
                s.insert(temp, p);
                cout << s << "\n";
            }
        }
    }
}