#include <bits/stdc++.h>
using namespace std;
int n, a[100005], dp[100005][2], t;
int main()
{
    cin >> t;
    while (t--)
    {
        memset(a, 0, sizeof(a));
        memset(dp, 0, sizeof(dp));
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        dp[1][1] = a[1];
        dp[1][0] = 0;
        for (int i = 2; i <= n; i++)
        {
            dp[i][0] = max(dp[i - 1][0], dp[i - 1][1]);
            dp[i][1] = a[i] + dp[i - 1][0];
        }
        cout << max(dp[n][0], dp[n][1]) << endl;
    }
    return 0;
}