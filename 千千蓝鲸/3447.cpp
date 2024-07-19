#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int n, p, x, y, z, a[N], d[N], ans = 0;
int main()
{
    cin >> n >> p;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        d[i] = a[i] - a[i - 1]; // 差分修改
    }
    while (p--)
    {
        cin >> x >> y >> z;
        d[x] -= z;
        d[y + 1] += z; // 差分修改
    }
    for (int i = 1; i <= n; i++)
    {
        d[i] += d[i - 1];
        ans = max(ans, d[i]);
    }
    cout << ans;
    return 0;
}
