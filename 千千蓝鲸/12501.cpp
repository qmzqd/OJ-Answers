#include <bits/stdc++.h>
using namespace std;
string s1, s2;
int main()
{
   cin >> s1 >> s2;
   int len1 = s1.length(), len2 = s2.length();
   int dp[len1 + 1][len2 + 1];
   for (int i = 0; i <= len1; i++)
   {
      for (int j = 0; j <= len2; j++)
      {
         if (i == 0 || j == 0)
            dp[i][j] = 0;
         else if (s1[i - 1] == s2[j - 1])
            dp[i][j] = dp[i - 1][j - 1] + 1;
         else
            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
      }
   }
   cout << dp[len1][len2] << endl;
   return 0;
}