#include <bits/stdc++.h>
using namespace std;
const int S = 105;
int n, m;
int a[S];
int f[S][10005];
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    f[0][0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            f[i][j] = f[i - 1][j];
            if (j >= a[i])
            {
                f[i][j] += f[i - 1][j - a[i]];
            }
        }
    }
    cout << f[n][m];
    return 0;
}