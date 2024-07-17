#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
const int MOD = 100005;
int vgravgabre(int n, int v, vector<pair<int, int>> &items)
{
    vector<vector<long long>> dp(n + 1, vector<long long>(v + 1, 0));
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 0; j <= v; ++j)
        {
            if (j < items[i - 1].first)
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - items[i - 1].first]) % MOD;
            }
        }
    }
    return dp[n][v];
}

int main()
{
    int n, v;
    cin >> n >> v;
    vector<pair<int, int>> items(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> items[i].first >> items[i].second;
    }
    cout << vgravgabre(n, v, items) << endl;

    return 0;
}