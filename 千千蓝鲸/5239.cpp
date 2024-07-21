#include <bits/stdc++.h>
using namespace std;
int flag(int n) {
    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = n; j >= i; j--) {
            dp[j] = (dp[j] + dp[j - i]) % 998244353;
        }
    }
    return dp[n];
}
int main() {
    int n;
    cin >> n;
    int out = flag(n);
    cout << out << endl;
    return 0;
}