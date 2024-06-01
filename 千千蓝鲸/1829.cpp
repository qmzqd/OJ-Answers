#include <bits/stdc++.h>
using namespace std;
int md(const string &s1, const string &s2)
{
    int len1 = s1.size();
    int len2 = s2.size();
    vector<vector<int>> dp(len1 + 1, vector<int>(len2 + 1, 0));
    for (int i = 0; i <= len1; ++i)
    {
        dp[i][0] = i;
    }
    for (int j = 0; j <= len2; ++j)
    {
        dp[0][j] = j;
    }
    for (int i = 1; i <= len1; ++i)
    {
        for (int j = 1; j <= len2; ++j)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = min({dp[i - 1][j],
                                dp[i][j - 1],
                                dp[i - 1][j - 1]}) +
                           1;
            }
        }
    }
    return dp[len1][len2];
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        cout << md(s1, s2) << endl;
    }
    return 0;
}