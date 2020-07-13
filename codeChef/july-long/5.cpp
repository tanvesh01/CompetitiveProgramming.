#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int t, n, x, y, cost = 0;
    cin >> t;
    while (t--)
    {
        unordered_map<long long int, long long int> mf, ms, f, s;
        vector<long long int> fi, si;
        cost = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (mf[x] == 0)
            {
                fi.push_back(x);
            }
            mf[x]++;
            f[x] = f[x] + 1;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (ms[x] == 0)
            {
                si.push_back(x);
            }
            ms[x]++;
            s[x] = s[x] + 1;
        }
        bool is = true;
        for (auto i = mf.begin(); i != mf.end(); ++i)
        {
            if ((i->second + ms[i->first]) % 2 != 0)
            {
                is = false;
                break;
            }
        }
        if (is)
        {
            sort(fi.begin(), fi.end());
            sort(si.begin(), si.end());
            if (s == f && mf == ms)
            {
                cout << 0 << "\n";
            }
            else
            {
                for (int i = 0; i < fi.size(); i++)
                {
                    for (int j = si.size() - 1; j >= 0; j--)
                    {
                        int t1 = fi[i], t2 = si[j];
                        if (f[t1] >= s[t2])
                        {
                            if (s[t2] - f[t2] != 0 && f[t1] - s[t1] != 0)
                            {
                                cost = cost + (min(t1, t2) * (s[t2] / 2));
                            }
                            f[t1] = f[t1] - (s[t2] / 2);
                            s[t1] = s[t1] + (s[t2] / 2);
                            f[t2] = f[t2] + (s[t2] / 2);
                            s[t2] = s[t2] - (s[t2] / 2);
                            if (s[t2] - f[t2] == 0 && f[t1] - s[t1] == 0)
                            {
                                si.erase(si.begin() + j);
                                break;
                            }
                            else if (s[t2] - f[t2] == 0 && f[t1] - s[t1] != 0)
                            {
                                si.erase(si.begin() + j);
                                j = si.size();
                            }
                        }
                        else
                        {
                            if (s[t2] - f[t2] != 0 && f[t1] - s[t1] != 0)
                            {
                                cost = cost + (min(t1, t2) * (f[t1] / 2));
                            }
                            s[t2] = s[t2] - (f[t1] / 2);
                            f[t2] = f[t2] + (f[t1] / 2);
                            s[t1] = s[t1] + (f[t1] / 2);
                            f[t1] = f[t1] - (f[t1] / 2);
                            if (s[t2] - f[t2] == 0 && f[t1] - s[t1] == 0)
                            {
                                si.erase(si.begin() + j);
                                break;
                            }
                            else if (s[t2] - f[t2] != 0 && f[t1] - s[t1] == 0)
                            {
                                break;
                            }
                            else if (s[t2] - f[t2] != 0 && f[t1] - s[t1] != 0)
                            {
                                break;
                            }
                        }
                    }
                }
                cout << cost << "\n";
            }
        }
        else
        {
            cout << -1 << "\n";
        }
    }
}