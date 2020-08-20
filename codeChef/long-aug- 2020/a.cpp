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
        long long int temp, mini, r, g, b, w;
        bool is = false, re = false , ge=false, be=false, we=false;
        cin >> r >> g >> b >> w;
        for (int i = 0; i < 4; i++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        mini = min(r, min(g, b));
        if ((r % 2 == 0 && g % 2 == 0 && b % 2 == 0 && w % 2 == 0) || (r % 2 != 0 && g % 2 != 0 && b % 2 != 0 && w % 2 != 0) || (r % 2 != 0 && g % 2 != 0 && b % 2 != 0 && w % 2 == 0) || (r % 2 != 0 && g % 2 != 0 && b % 2 == 0 && w % 2 != 0) || (r % 2 != 0 && g % 2 == 0 && b % 2 != 0 && w % 2 != 0) || (r % 2 == 0 && g % 2 != 0 && b % 2 != 0 && w % 2 != 0))
        {
            is = true;
        }
        for (int i = 0; i < 4; i++)
        {
            if (v[i] )
            {
                /* code */
            }
            
        }

        // for (int i = 0; i < mini + 1; i++)
        // {
        //     // cout << r << " " << g << " " << b << " " << w << "\n";
        //     else
        //     {
        //         r = r - 1;
        //         g = g - 1;
        //         b = b - 1;
        //         w = w + 3;
        //     }
        // }
        if (is)
        {
            cout << "Yes"
                 << "\n";
        }
        else
        {
            cout << "No"
                 << "\n";
        }
    }
}