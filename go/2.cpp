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
        long long int n, temp, sum = 0;
        cin >> n;
        vector<long long int> a, b;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            a.push_back(temp);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            b.push_back(temp);
        }
        long long int mina = *min_element(a.begin(), a.end());
        long long int minb = *min_element(b.begin(), b.end());
        for (int i = 0; i < a.size(); i++)
        {
            sum = sum + max(a[i] - mina, b[i] - minb);
        }
        cout << sum << "\n";
    }
}