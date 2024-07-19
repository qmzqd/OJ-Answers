#include <bits/stdc++.h>
#pragma GCC optimize(3)
using namespace std;
int a[1005];
int cmp(int l, int r, int k)
{
    int b[1005], i, j = 0;
    for (i = l; i <= r; i++)
    {
        b[j++] = a[i];
    }
    sort(b, b + j);
    return b[j - k];
}

int main()
{
    int c[1005], i, n, m;
    int l, r, k;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    for (i = 1; i <= m; i++)
    {
        cin >> l >> r >> k;
        c[i] = cmp(l, r, k);
        cout << c[i] << endl;
    }
    return 0;
}