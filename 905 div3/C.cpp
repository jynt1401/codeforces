#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }

        if (k == 2 || k == 3 || k == 5)
        {
            int ans = INT_MAX;
            for (int i = 0; i < n; i++)
            {
                ans = min(ans, (k - (vec[i] % k)) % k);
            }
            if (ans == k)
                ans = 0;
            cout << ans << endl;
        }
        else
        {
            vector<int> twos;
            int ans = INT_MAX;
            for (int i = 0; i < n; i++)
            {
                ans = min(ans, (k - (vec[i] % k)) % k);
                twos.push_back((2 - (vec[i] % 2)) % 2);
            }
            if (ans == k)
                ans = 0;
            sort(twos.begin(), twos.end());
            cout << min(ans, twos[0] + twos[1]) << endl;
        }
    }
    return 0;
}