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
        long long int n, k, temp, count = 0;
        vector<int> v;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            if (m[v[i]] == 0)
            {
                m[v[i]]++;
            }
            else
            {
                m.clear();
                count++;
                i = i - 1;
            }
        }
        if (m.empty() == false)
        {
            count++;
        }
        cout << k * count << "\n";
    }
}