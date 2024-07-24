#include <bits/stdc++.h>
using namespace std;
const int MOD = 100003;
int n, m;
int a[1005][1005];
bool flag[1005][1005];
int main()
{
    cin >> n >> m;
    while (m--)
    {
        int x, y;
        cin >> x >> y;
        flag[x][y] = 1;
    }
    a[1][1] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            a[i][j] += a[i - 1][j] + a[i][j - 1];
            if (flag[i][j] == 1)
                a[i][j] = 0;
            a[i][j] = a[i][j] % MOD;
        }
    }
    cout << a[n][n];
    return 0;
}
