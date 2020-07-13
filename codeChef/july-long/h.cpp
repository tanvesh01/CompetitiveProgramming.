#include <bits/stdc++.h>
using namespace std;
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    long long int t, n, x, y, cost = 0;
    cin >> t;
    while (t--)
    {
        cost = 0;
        map<int, int> mf, ms;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            mf[x]++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            ms[x]++;
        }
        auto r = ms.end();
        advance(r, -1);
        bool is = true;
        for (auto i = mf.begin(); i != mf.end(); ++i)
        {
            if ((i->second + ms[i->first]) % 2 != 0)
            {
                is = false;
            }
        }
        cout << "yo"
             << "\n";
        if (is)
        {
            for (auto i = mf.begin(); i != mf.end(); ++i)
            {
                cout << i->first << " " << r->first << "\n";
                if (i->second >= r->second && mf[i->first] - ms[i->first] != 0)
                {
                    cost = cost + (min(i->first, r->first) * (r->second / 2));
                    mf[i->first] = i->second - (r->second / 2);
                    ms[r->first] = r->second - (r->second / 2);
                    mf[r->first] = mf[r->first] + (r->second / 2);
                    ms[i->first] = ms[i->first] + (r->second / 2);
                    if (mf[i->first] - ms[i->first] != 0 && ms[r->first] - mf[r->first] == 0)
                    {
                        advance(r, -1);
                        advance(i, -1);
                    }
                    else if (mf[i->first] - ms[i->first] != 0 && ms[r->first] - mf[r->first] != 0)
                    {
                        advance(i, -1);
                    }
                }
                else
                {
                    cost = cost + (min(i->first, r->first) * (r->second / 2));
                    mf[i->first] = i->second - (i->second / 2);
                    ms[r->first] = r->second - (i->second / 2);
                    mf[r->first] = mf[r->first] + (i->second / 2);
                    ms[i->first] = ms[i->first] + (i->second / 2);
                    if (mf[i->first] - ms[i->first] != 0 && ms[r->first] - mf[r->fi
                                                                                  rst] !=
                                                                0)
                    {
                        --i;
                    }
                    else if (ms[r->first] - mf[r->first] == 0)
                    {
                        advance(r, -1);
                    }
                }
            }
            cout << cost << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }
}