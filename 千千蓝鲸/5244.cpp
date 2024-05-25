#include <bits/stdc++.h>
using namespace std;
int main()
{
    int V, n;
    cin >> V >> n;
    vector<int> it(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> it[i];
    }
    vector<int> dp(n + 1, 0);
    dp[0] = V;
    for (int i = 1; i <= n; ++i)
    {
        dp[i] = min(dp[i - 1], V - it[i - 1]);
    }
    cout << dp[n] << endl;
    return 0;
}
