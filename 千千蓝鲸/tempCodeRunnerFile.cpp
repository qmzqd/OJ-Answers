#include <bits/stdc++.h>
using namespace std;
const int MOD = 100003;
int cp(int N, int M, vector<pair<int, int>> &ob)
{
    vector<vector<int>> dp(N + 1, vector<int>(N + 1, 0));
    dp[1][1] = 1;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (i == N && j == N)
            {
                break;
            }
            if (dp[i][j] == 0)
            {
                if (i < N)
                {
                    dp[i + 1][j] = (dp[i + 1][j] + dp[i][j]) % MOD;
                }
                if (j < N)
                {
                    dp[i][j + 1] = (dp[i][j + 1] + dp[i][j]) % MOD;
                }
            }
        }
    }
    for (const auto &obstacle : ob)
    {
        int x = obstacle.first;
        int y = obstacle.second;
        if (x > 0 && y > 0)
        {
            dp[x][y] = 0;
        }
    }

    return dp[N][N];
}
int main()
{
    int N, M;
    cin >> N >> M;
    vector<pair<int, int>> ob(M);
    for (int i = 0; i < M; i++)
    {
        cin >> ob[i].first >> ob[i].second;
    }
    int result = cp(N, M, ob);
    cout << result << endl;

    return 0;
}