#include <bits/stdc++.h>
using namespace std;
#define _for(i, a, b) for (int i = a; i <= b; i++)
const int N = 1e5 + 10;
int n, a[N], f1[N], f2[N], in;
int main()
{
    cin >> in;
    while (in--)
    {
        cin >> n;
        _for(i, 1, n) cin >> a[i];
        int ma = -0x3fffffff, mi = 0x3ffffff, ans = -0x3fffffff;
        _for(i, 1, n)
        {
            f1[i] = max(f1[i - 1], a[i] - mi);
        }
        for (int i = n; i > 0; i--)
        {
            ma = max(ma, a[i]);
            f2[i] = max(ma - a[i], f2[i + 1]);
        }
        _for(i, 1, n) ans = max(ans, f1[i] + f2[i]);
        cout << ans << endl;
    }
    return 0;
}