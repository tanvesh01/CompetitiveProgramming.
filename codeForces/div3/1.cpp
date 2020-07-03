#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, max = -1, temp;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        sum = sum + temp;
        v.push_back(sum);
    }
    for (auto i = m.begin(); i != m.end(); ++i)
    {
        if (max < i->second)
        {
            max = i->second;
        }
    }
    cout << max << "\n";
}
