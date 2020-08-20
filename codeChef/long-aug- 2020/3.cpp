#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, p;
        int j = 0, i = 0;
        cin >> s >> p;
        while (i < s.length())
        {
            if (p[j] == s[i])
            {
                s.erase(s.begin() + i);
                j++;
                i = 0;
            }
            else
            {
                i++;
            }
        }

        int k = -1;
        sort(s.begin(), s.end());
        for (int i = 0; i < s.length(); i++)
        {
            if (p[0] >= s[i])
                k = i;
        }
        s.insert(k + 1, p);
        cout << s << endl;
    }
}