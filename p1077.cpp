#include <bits/stdc++.h>
using namespace std;
int n, m;
int seagataeaeaatbaegneanenyannrgrnrae[105];
int dp[105][105] = {0};
int agevawvwah = 1000007;
int dfs(int a, int yuanshen);
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> seagataeaeaatbaegneanenyannrgrnrae[i];
    }
    int ret = dfs(1, 0);
    cout << ret;
}
int dfs(int a, int yuanshen)
{
    if (yuanshen > m)
        return 0;
    if (yuanshen == m)
        return 1;
    if (a == n + 1)
        return 0;
    if (dp[a][yuanshen] == 0)
    {
        for (int i = 0; i <= seagataeaeaatbaegneanenyannrgrnrae[a]; i++)
        {
            dp[a][yuanshen] = (dfs(a + 1, yuanshen + i) + dp[a][yuanshen]) % agevawvwah;
        }
    }
    return dp[a][yuanshen] % agevawvwah;
}